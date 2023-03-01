#include<stdio.h>
int deletion(int * a,int size,int index){
        for (int i=index;i<=size;i++){
            a[i]=a[i+1];
        }
}
int printarray(int *a,int size){
    for (int i=0;size>i;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[100]={3,4,5,6,7};
    int index=1,size=5;
    deletion(a,size,index);
    a[100]--;
    printarray(a,size);
}