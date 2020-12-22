#include<stdio.h>
#include<string.h>
int main(){
    int N;
    scanf("%d",&N);
    char A[8][7]={"000000","001111","010011","011100","100110",
    "101001","110101","111010"};
    char arr[N][7],res[N];
    getchar();
    for(int i=0;i<N;i++){
        for(int j=0;j<6;j++)
            scanf("%c",&(arr[i][j]));
    }
    for(int i=0;i<N;i++){
        char check[7]="000000";
        int a=0,b=0;
        for(int j=0;j<6;j++){
            check[j]=arr[i][j];
        }
        for(int k=0;k<8;k++){
            if(strcmp(check,A[k])==0){
                res[i]=65+k;
                a++;
            }
        }
        if(a==0){
            for(int k=0;k<8;k++){
                int count=0;
                for(int j=0;j<6;j++){
                    if(A[k][j]==check[j])
                        count++;
                }
                if(count==5){
                    res[i]=65+k;;
                    b++;
                }
            }
        }
        if(b==0&&a==0){
            printf("%s\n",check);
            printf("%d\n",i+1);
            return 0;
        }
    }
    for(int i=0;i<N;i++)
        printf("%c",res[i]);
    printf("\n");
}