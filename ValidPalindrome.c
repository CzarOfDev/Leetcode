#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<ctype.h>
#include<strings.h>
bool isPalindrome(char* s)
{
    size_t size = strlen(s);
    int formatStrIdx = 0;
    for(int i = 0; i<size; i++){
        if(isalpha(s[i])){
           s[formatStrIdx] = tolower((unsigned char)s[i]);
            formatStrIdx++;
        }
        else if(isdigit(s[i])){
            s[formatStrIdx] = s[i];
            formatStrIdx++;
        }
    }
    s[formatStrIdx] = '\0';
    int beginIdx = 0;
    int endIdx = formatStrIdx-1;
    while(beginIdx < endIdx)
    {
        if(s[beginIdx] == s[endIdx]){
            beginIdx++;
            endIdx--;
        } else{
            return false;
        }
    }
    return true;
}
int main(){
    char s[] = "Hello, world!";
    bool is = isPalindrome(s);
    if(is == true){
	printf("true");
    }else{
	printf("false");
    }
    return false;
}
