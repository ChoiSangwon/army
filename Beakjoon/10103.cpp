#include<stdio.h>
int main(){
    int N,a=100,b=100;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int c,d,g;
        scanf("%d %d",&c,&d);
        if(c==d)
            continue;
        else if(c>d)
            b-=c;
        else
            a-=d;

    }
    printf("%d\n%d\n",a,b);
    return 0;
}