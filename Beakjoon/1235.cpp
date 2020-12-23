#include<stdio.h>
#include<string.h>
int main(){
    int N,count=1,len;
    scanf("%d",&N);
    char arr[N][101],check[N][101];
    for(int i=0;i<N;i++)
        scanf("%s",arr[i]);
    len=strlen(arr[0]);
    while(1){
        int res=0;
        for(int i=0;i<len;i++){
            for(int j=len-1;j>=len-count;j--){
                check[i][i]=arr[i][j];
            }
            if(aa==count)
                res++;
        }
        if(res==0)
            break;
        count++;
    }
    printf("%d\n",count);
    return 0;
}