#include<stdio.h>
int main(){
    int N,res=0;
    scanf("%d",&N);
    getchar();
    char arr[N];
    scanf("%s",arr);
    for(int i=0;i<N;i++){
        res+=arr[i]-64;
    }
    printf("%d\n",res);
}