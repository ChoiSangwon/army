#include<stdio.h>
#include<string.h>
int main(){
    int N;
    scanf("%d",&N);
    char a[N][11];
    int b[N],max=0,maxR,c[N]={0,},count=0;
    for(int i=0;i<N;i++){
        scanf("%s %d",a[i],&b[i]);
    }
    
    maxR=b[0];
    for(int i=1;i<N;i++){
        if(maxR<b[i]){
            max=i;
            maxR=b[i];
        }
    }
    for(int i=0;i<N;i++){
        if(maxR==b[i]){
            c[i]=1;
            count++;
        }
    }
    if(count==1){
        printf("%s\n",a[max]);
    }
    else{
        char d[count][11],temp[11];
        int g=0;
        for(int i=0;i<N;i++){
            if(c[i]==1){
                strcpy(d[g++],a[i]);
            }
        }
        for(int i=0;i<N-1;i++){
            for(int j=i+1;j<N;j++){
                if(strcmp(d[i],d[j])==1){
                    strcpy(temp,d[i]);
                    strcpy(d[i],d[j]);
                    strcpy(d[j],temp);
                }
            }
        }
        for(int i=0;i<count;i++)
            printf("%s\n",d[i]);
    }
}