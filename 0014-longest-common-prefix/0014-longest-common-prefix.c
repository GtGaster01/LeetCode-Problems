char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize==0) return "";
    char *prefix=strs[0];
    if (strlen(prefix) == 0) {
        return prefix;
    }
    for(int i=1; i<strsSize; i++){
        while(strncmp(prefix, strs[i], strlen(prefix))!=0){
            size_t currentlen=strlen(prefix);
            if(currentlen==0) return prefix;
            prefix[currentlen - 1] = '\0';
        }
        
    }
    return prefix;
}
