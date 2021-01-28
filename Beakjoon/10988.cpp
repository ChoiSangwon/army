#include<stdio.h>
#include<string.h>
int main(){
    char arr[101];
    scanf("%s",arr);
    int len=strlen(arr),check=0;
    for(int i=0;i<len/2;i++){
        if(arr[i]==arr[len-1-i])
            check++;
    }
    if(check==len/2)
        printf("1\n");
    else
        printf("0\n");
}