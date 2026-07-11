#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int romanToInt(char* s)
{
    int sum = 0;
    size_t size = strlen(s);
    int *arr = malloc(size * sizeof(int));
    for (int i = 0; i<size; i++){
        switch (s[i]){
            case 'I':
                arr[i] = 1;
                break;
            case 'V':
                arr[i] = 5;
                break;
            case 'X':
                arr[i] = 10;
                break;
            case 'L':
                arr[i] = 50;
                break;
            case 'C':
                arr[i] = 100;
                break;
            case 'D':
                arr[i] = 500;
                break;
            case 'M':
                arr[i] = 1000;
                break;
        }
    }
    for(int x = 0; x<size; x++){
        if(x+1<size && arr[x]< arr[x+1]){
            sum+=arr[x+1]-arr[x];
            x++;
        }
        else{
            sum+=arr[x];
        }
    }
    return sum;
}
int main(){
    printf("Input: ");
    char s[100];
    scanf("%s", &s);
    int result = romanToInt(s);
    printf("Output: %d", result);
    return 0;
}
