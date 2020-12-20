#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int a;
        scanf("%d",&a);
        for(int j=0;j<a;j++)
            printf("=");
        printf("\n");
    }
}