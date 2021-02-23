#include<stdio.h>
#include<string.h>
int main(){
    char arr[101]; 
    scanf("%s",arr);
    for(int i=0;i<strlen(arr);i++){
        if(arr[i]=='C'||arr[i]=='A'||arr[i]=='M'||arr[i]=='B'||arr[i]=='R'||arr[i]=='I'||
        arr[i]=='D'||arr[i]=='G'||arr[i]=='E'){
            ;
        }
        else{
            printf("%c",arr[i]);
        }
    }

    printf("\n");
}