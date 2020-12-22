#include<stdio.h>
#include<string.h>
int main(){
    int N,count,num;
    char arr[14][71429]={"baby", "sukhwan", "tururu", "turu", "very", "cute", 
    "tururu", "turu", "in", "bed", "tururu", "turu","baby", "sukhwan"};
    scanf("%d",&N);
    num=(N-1)%14; 
    count=(N-1)/14; 
    if(strcmp(arr[num],"tururu")==0){
        if(count>=3)
            printf("tu+ru*%d",count+2);
        else{
            printf("%s",arr[num]);
            for(int i=0;i<count;i++)
                printf("ru");
        }
        printf("\n");
    }
    else if(strcmp(arr[num],"turu")==0){
        if(count>=4)
            printf("tu+ru*%d",count+2);
        else{
            printf("%s",arr[num]);
            for(int i=0;i<count;i++)
                printf("ru");
        }
        printf("\n");
    }
    else
        printf("%s\n",arr[num]);
}