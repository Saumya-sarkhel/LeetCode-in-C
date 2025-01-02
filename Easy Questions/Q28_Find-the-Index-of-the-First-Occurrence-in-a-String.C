int strStr(char* haystack, char* needle) {
    int hys_syz = strlen(haystack);
    int needl_syz = strlen(needle);

    for (int i=0; i<=hys_syz - needl_syz; i++) {
        int j;
        for (j=0; j<needl_syz; j++) {
            if (haystack[i+j] != needle[j]) {
                break;
            }
        }
        if (j == needl_syz) {
            return i;
        }
    }
    return -1;
}
