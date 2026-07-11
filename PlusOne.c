#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
   for(int i = digitsSize - 1; i>=0; i--)
   {
        if(digits[i] < 9){
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
   }
   int *result = malloc((digitsSize+1)*sizeof(int));
   result[0] = 1;
   for(int i = 1; i<=digitsSize; i++){
        result[i] = 0;
   }
   *returnSize = digitsSize+1;
   return result;
}

int main(){
    int digits[] = {1,2,3};
    int size = 3;
    int *result = plusOne(digits, size, &size);
    for(int i = 0; i<size; i++){
        printf("%d, ", digits[i]);    	
    }
}
