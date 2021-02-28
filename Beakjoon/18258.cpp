#include<stdio.h>
#include<string.h>
class Que {
    int size=0;
    int top=0;
    int arr[2000001];
public:
    void push(int X){
        arr[size++]=X;
    }
    int pop(){
        if(size==top)
            return -1;
        else
            return arr[top++];
    }
    int size_(){
        return size-top;
    }
    int empty(){
        if(size==top)
            return 1;
        else
            return 0;
    }
    int front(){
        return arr[top];
    }
    int back(){
        return arr[size-1];
    }
};


int main(){
    int N;
    Que A;
    char arr[10];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        getchar();
        scanf("%s",arr);
        if(strcmp(arr,"push")==0){
            int M;
            scanf("%d",&M);
            A.push(M);
        }
        else if(strcmp(arr,"pop")==0){
            printf("%d\n",A.pop());
        }
        else if(strcmp(arr,"size")==0)
            printf("%d\n",A.size_());
        else if(strcmp(arr,"empty")==0)
            printf("%d\n",A.empty());
        else if(strcmp(arr,"front")==0)
            printf("%d\n",A.front());
        else if(strcmp(arr,"back")==0)
            printf("%d\n",A.back());
    }
}
