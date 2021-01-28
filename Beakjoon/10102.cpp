#include<stdio.h>
int main(){
    int V,countA=0,countB=0;
    scanf("%d",&V);
    getchar();
    for(int i=0;i<V;i++){
        char a;
        scanf("%c",&a);
        if(a=='A')
            countA++;
        else if(a=='B')
            countB++;
        
    }
    if(countA>countB)
        printf("A\n");
    else if(countB>countA)
        printf("B\n");
    else
        printf("Tie\n");
}