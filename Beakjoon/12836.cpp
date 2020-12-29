#include<stdio.h>
int main(){
    int N,Q;
    scanf("%d %d",&N,&Q);
    long long int arr[N+1],sum;
    for(int i=0;i<N+1;i++)
        arr[i]=0;
    for(int i=0;i<Q;i++){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==2){
            for(int j=b;j<=c;j++)
                sum+=arr[j];
            printf("%lld\n",sum);
            sum=0;
        }
        else{
            arr[b]+=c;
        }
    }
}