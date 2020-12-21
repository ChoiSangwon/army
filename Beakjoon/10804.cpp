#include<stdio.h>
int main(){
    int arr[21];
    for(int i=1;i<21;i++)
        arr[i]=i;
    for(int i=0;i<10;i++){
        int a,b,temp;
        scanf("%d %d",&a,&b);
        for(;a<=(a+b)/2;){
            temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
            a++;
            b--;
        }
    }
    for(int i=1;i<21;i++)
        printf("%d\n",arr[i]);
}