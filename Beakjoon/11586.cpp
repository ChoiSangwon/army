#include<stdio.h>
int main(){
    int N,K;
    scanf("%d",&N);
    char arr[N][N];
    for(int i=0;i<N;i++){
        getchar();
        for(int j=0;j<N;j++)
            scanf("%c",&(arr[i][j]));
    }
    scanf("%d",&K);
    if(K==1){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++)
                printf("%c",arr[i][j]);
            printf("\n");
        }
    }
    else if(K==2){
        for(int i=0;i<N;i++){
            for(int j=N-1;j>=0;j--)
                printf("%c",arr[i][j]);
        printf("\n");
        }
    }
    else{
        for(int i=N-1;i>=0;i--){
            for(int j=0;j<N;j++)
                printf("%c",arr[i][j]);
        printf("\n");
        }
    }
}