#include<stdio.h>
#include<string.h>
int main(){
    char S[101];
    scanf("%s",S);
    int T,A,B,temp;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        scanf("%d %d",&A,&B);
        temp=S[A];
        S[A]=S[B];
        S[B]=temp;
    }
    printf("%s\n",S);
}