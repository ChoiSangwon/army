#include<stdio.h>
#include<string.h>
int main(){
    char arr1[41],arr2[41],ret[41][41];
    int anwi=0,anwj=0;
    scanf("%s",arr1);
    scanf("%s",arr2);

    int arr1len=strlen(arr1),arr2len=strlen(arr2),k=0;

    for(int z=0;z<arr1len;z++){
        k=0;
        for(int i=z;i<arr1len;i++){
            for(int j=k;j<arr2len;j++){
                if(arr1[i]==arr2[j]){
                    printf("%c %d %d\n",arr1[i],i,j);
                    k=j+1;
                    ret[anwi][anwj++]=arr2[j];
                    break;
                }
            }
        }
        ret[anwi++][anwj]='\0';
        anwj=0;
    }
    int top=0;
    for(int i=0;i<=anwi;i++){
        //printf("%s\n",ret[i]);
        if(strlen(ret[top])<strlen(ret[i]))
            top=i;
    }
    printf("%s\n",ret[top]);
    return 0;    
}