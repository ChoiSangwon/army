#include<stdio.h>
#include<string.h>
int main(){
    char S[100001],temp;
    scanf("%[^\n]",S);
    int len=strlen(S),a=0,b=0,c=0;
    while(1){
        if(c==len){
            if(S[c-1]=='>')
                break;
            else{
                b=c-1;
                for(int i=a;i<=a+((b-a)/2);i++){
                    temp=S[i];
                    S[i]=S[b-i+a];
                    S[b-i+a]=temp;
                }
                break;
            }
        }
        if((S[c-1]=='>'||S[c-1]==' ')&&S[c]!=' '){
            a=c;
            while(1){
                c++;
                if(S[c]=='<'||S[c]==' '){
                    b=c-1;
                    break;
                }
            }
            for(int i=a;i<=a+((b-a)/2);i++){
                temp=S[i];
                S[i]=S[b-i+a];
                S[b-i+a]=temp;
            }
            a=c+1;
        }
        if(S[c]=='<'){
            while(1){
                c++;
                if(S[c]=='>')
                    break;
            }
            a=c+1;
        }
        else if(S[c]==' '){
            b=c-1;
            for(int i=a;i<=a+((b-a)/2);i++){
                temp=S[i];
                S[i]=S[b-i+a];
                S[b-i+a]=temp;
            }
            a=c+1;
        }
        c++;
    }
    printf("%s\n",S);
}