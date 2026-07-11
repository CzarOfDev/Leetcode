#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int strStr(char* haystack, char* needle){
    int haystackSize = strlen(haystack);
    int needleIdx = 0;
    int needleSize = strlen(needle);
    for(int i = 0; i<haystackSize; i++){
        if(haystack[i] == needle[needleIdx]){
            int temp = i;
            int idx = i;
            bool isMatch = true;
            while(needleIdx < needleSize-1)
            {
                idx++;
                needleIdx++;
                if(needle[needleIdx] != haystack[idx]){
                        isMatch = false;
                        needleIdx = 0;
                        break;
                }

            }
            needleIdx = 0;
                if(isMatch == true){
                    return temp;
                }
            }
        }
    return -1;
}
int main(){
    char* haystack = "mississippi";
    char* needle = "issip";
    int res = strStr(haystack, needle);
    printf("%d", res);
    return 0;
}

