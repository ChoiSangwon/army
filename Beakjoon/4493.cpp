#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int n,a1=0,a2=0;
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            char a,b;
            getchar();
            scanf("%c %c",&a,&b);
            if(a==b)
                ;
            else if(a=='R'&&b=='P')
                a2++;
            else if(a=='R'&&b=='S')
                a1++;
            else if(a=='S'&&b=='P')
                a1++;
            else if(a=='S'&&b=='R')
                a2++;
            else if(a=='P'&&b=='S')
                a2++;
            else if(a=='P'&&b=='R')
                a1++;
        }
        if(a1==a2)
            printf("TIE\n");
        else if(a1>a2)
            printf("Player 1\n");
        else
            printf("Player 2\n");
    }
}