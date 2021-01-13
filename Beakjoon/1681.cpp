#include<stdio.h>
int main(){
    int N,L,res=0,a,count;
    scanf("%d %d",&N,&L);
    for(int i=0;i<N;i++){
        while(1){
            res++;
            a=res;
            count=0;
            while(a>0){
                if(a%10==L)
                    count++;
                a/=10;
            }
            if(count==0){
                break;
            }
        }
    }
    printf("%d\n",res);
}