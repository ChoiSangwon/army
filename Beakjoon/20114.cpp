#include<stdio.h>

int main(){
    int N,H,W;
    scanf("%d %d %d",&N,&H,&W);
    char arr[H][N*W],arr2[N*W],arr3[N],to=0;
    for(int i=0;i<H;i++){
        for(int j=0;j<N*W;j++){
            scanf("%c",&(arr[i][j]));
            if(arr[i][j]=='\n')
                j--;
        }
    }
    for(int i=0;i<N*W;i++){
        to=0;
        for(int j=0;j<H;j++){
            if(arr[j][i]!='?'){
                arr2[i]=arr[j][i];
                to++;
                break;
            }
        }
        if(to==0)
            arr2[i]='?';
    }
    for(int i=0;i<N;i++){
        to=0;
        for(int j=i*W;j<(i*W)+W;j++){
            if(arr2[j]!='?'){
                arr3[i]=arr2[j];
                to++;
            }
        }
        if(to==0)
            arr3[i]='?';
    }
    for(int i=0;i<N;i++)
        printf("%c",arr3[i]);
    printf("\n");
    return 0;
}