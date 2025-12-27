 struct ListNode* addNode(struct ListNode* l1, struct ListNode* l2, int carry){
    if(l1==NULL && l2==NULL && carry==0) return NULL;
    int sum = carry;
    if(l1 != NULL){
        sum += l1->val;
        l1 = l1->next;
    }
    if(l2 != NULL){
        sum += l2->val;
        l2 = l2->next;
    }
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = sum % 10;
    newNode->next = addNode(l1, l2, sum / 10);
    return newNode;
 }


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    return addNode(l1, l2, 0);
}