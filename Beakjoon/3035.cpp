#include<stdio.h>
int main(){
    int R,C,ZR,ZC;
    scanf("%d %d %d %d",&R,&C,&ZR,&ZC);
    char arr[C][R];
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            scanf("%c",&(arr[j][i]));
            if(arr[j][i]=='\n')
                j--;
        }
    }
    for(int i=0;i<R;i++){
        for(int l=0;l<ZR;l++){
            for(int j=0;j<C;j++){
                for(int k=0;k<ZC;k++)
                    printf("%c",arr[j][i]);
            }
            printf("\n");
        }
    }
}