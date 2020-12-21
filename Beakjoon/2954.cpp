#include<stdio.h>
#include<string.h>
int main(){
    char S1[101];
    int S1len;
    scanf("%[^\n]",S1);
    S1len=strlen(S1);
    for(int i=0;i<S1len;i++){
        if(i<S1len-2&&(S1[i]=='a'||S1[i]=='e'||S1[i]=='i'||S1[i]=='o'||S1[i]=='u')&&S1[i+1]=='p'&&S1[i+2]==S1[i]){
        printf("%c",S1[i]);
            i+=2;
        }
        else if(S1[i]=='\n')
            printf(" ");
        else
            printf("%c",S1[i]);
    }
    printf("\n");
}