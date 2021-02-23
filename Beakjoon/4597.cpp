#include<stdio.h>
#include<string.h>
int main(){
    char arr[32];
    while(1){
        int count=0;
        scanf("%s",arr);
        if(arr[0]=='#')
            break;
        for(int i=0;i<strlen(arr);i++){
            if(arr[i]=='1')
                count++;
        }
        if(arr[strlen(arr)-1]=='e'){
            if(count%2==0)
                arr[strlen(arr)-1]='0';
            else
                arr[strlen(arr)-1]='1';
        }
        else{
            if(count%2==1)
                arr[strlen(arr)-1]='0';
            else
                arr[strlen(arr)-1]='1';
        }
        printf("%s\n",arr);
    }
}