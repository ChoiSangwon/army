#include<stdio.h>
int main(){
    int N,X,K,S;
    scanf("%d %d %d",&N,&X,&K);
    S=X;
    for(int i=0;i<K;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==S)
            S=b;
        else if(b==S)
            S=a;
    }
    printf("%d\n",S);
}