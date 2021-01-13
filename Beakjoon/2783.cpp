#include<stdio.h>
int main(){
    float Y,X;
    int N;
    scanf("%f %f",&Y,&X);
    scanf("%d",&N);
    float a[2][N];
    for(int i=0;i<N;i++)
        scanf("%f %f",&(a[0][i]),&(a[1][i]));
    float res=Y/X;
    for(int i=0;i<N;i++){
        if(res>a[0][i]/a[1][i])
            res=a[0][i]/a[1][i];
    }
    printf("%.2f\n",res*1000);
}