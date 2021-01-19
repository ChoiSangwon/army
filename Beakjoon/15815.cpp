#include<stdio.h>
#include<string.h>
#define STACK_SIZE 1000
int buf[STACK_SIZE];
int top=0;

int main(){ 
    char arr[101];
    scanf("%s",arr);
    int size=strlen(arr);
    for(int i=0;i<size;i++){
        if(arr[i]>='0'&&arr[i]<='9'){
            buf[top++]=arr[i]-'0';
        }
        else{
            top--;
            int a=buf[top];
            top--;
            int b=buf[top];
            if(arr[i]=='+')
                buf[top++]=a+b;
            else if(arr[i]=='-')
                buf[top++]=a-b;
            else if(arr[i]=='*')
                buf[top++]=a*b;
            else if(arr[i]=='/')
                buf[top++]=a/b;
        }
    }
    printf("%d\n",buf[0]);
}