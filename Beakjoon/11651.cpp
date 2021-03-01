#include<stdio.h>
struct a{
    int x;
    int y;
};
void printa(struct a arr){
    printf("%d %d\n",arr.x,arr.y);
}
void change(struct a *arr,struct a *arr2){
    int tempx,tempy;
    tempx=arr->x;
    tempy=arr->y;
    arr->x=arr2->x;
    arr->y=arr2->y;
    arr2->x=tempx;
    arr2->y=tempy;
}

int main(){
    int N;
    scanf("%d",&N);
    struct a arr[N];
    for(int i=0;i<N;i++)
        scanf("%d %d",&(arr[i].x),&(arr[i].y));
    int tempx,tempy;
    for(int i=0;i<N-1;i++){
        for(int j=i;j<N;j++){
            if(arr[i].y>arr[j].y)
                change(&(arr[i]),&(arr[j]));
            else if(arr[i].y==arr[j].y){
                if(arr[i].x>arr[j].x)
                    change(&(arr[i]),&(arr[j]));
            }
        }
    }

    for(int i=0;i<N;i++)
        printa(arr[i]);
}