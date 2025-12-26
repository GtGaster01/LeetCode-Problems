#define MAX_SIZE 20003

typedef struct HASH {
    int key;
    bool isFull;
}Hashset;

Hashset newHash[MAX_SIZE];

int j=0;
void initHash() {
    for (int i = 0; i < MAX_SIZE; i++) {
        newHash[i].isFull = false;
    }
}

int hash(int key) {
    return abs(key % MAX_SIZE);
}

void addHash(int key) {
    int index = hash(abs(key));
    while (newHash[index].isFull && newHash[index].key != key) {
        index = (index + 1) % MAX_SIZE;
    }
    newHash[index].key = key;
    newHash[index].isFull = true;
}

bool checkHash(int target) {
    int index = hash(abs(target));
    while (newHash[index].isFull) {
        if (newHash[index].key == target) return true;
        index = (index + 1) % MAX_SIZE;
    }
    return false;
}


int arr[10001];

void turnTreeToArr(struct TreeNode* root) {
    if (root != NULL) {
        turnTreeToArr(root->left);
        arr[j++] = root->val;
        turnTreeToArr(root->right);
    }
}

bool findTarget(struct TreeNode* root, int k) {
    j=0;
    initHash();
    turnTreeToArr(root);
    for (int i = 0; i < j; i++) {
        int complement = k - arr[i];
        if(checkHash(complement)) return true;
        addHash(arr[i]);
    }
    return false;
}