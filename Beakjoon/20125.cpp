#include<stdio.h>
int main(){
    int N,heartI,heartJ,belti,Larm=0,Rarm=0,belt=0,Lleg=0,Rleg=0;
    scanf("%d",&N);
    char arr[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            scanf("%c",&(arr[i][j]));
            if(arr[i][j]=='\n')
                j--;
        }
        
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i!=0&&j!=0&&i!=N-1&&j!=N-1&&arr[i][j]=='*'&&arr[i-1][j]=='*'&&arr[i][j-1]=='*'&&arr[i+1][j]=='*'&&arr[i][j+1]=='*'){
                heartI=i;
                heartJ=j;
            }
        }
    }
    /*for(int i=0;i<N;i++){
        for(int j=0;j<4;j++){
            printf("%c",arr[i][j]);
        }
        printf("\n");
    }*/
    //printf("%d %d\n",heartI,heartJ);
    for(int j=heartJ;j<N&&arr[heartI][j]=='*';j++)
        Rarm++;
    for(int j=heartJ;j>=0&&arr[heartI][j]=='*';j--)
        Larm++;
    int a=heartI;
    printf("%d\n",a);
    while(1){
        if(a>=N||arr[a][heartJ]!='*'){
            belti=a;
            break;
        }
        belt++;
        a++;
    }
    //printf("%d\n",heartI-1);
    for(int i=belti;i<N,arr[i][heartJ-1]=='*';i++)
            Lleg++;
    
    for(int i=belti;i<N,arr[i][heartJ+1]=='*';i++)
        Rleg++;
    printf("%d %d\n%d %d %d %d %d\n",heartI+1,heartJ+1,Larm-1,Rarm-1,belt-1,Lleg,Rleg);
    return 0;
}