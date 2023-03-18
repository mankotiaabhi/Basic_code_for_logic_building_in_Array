#include<stdio.h>
int insertion(int *a,int size,int element,int index,int capacity){
        if (size>capacity){
            return -1;
        }
        else{
            for (int i=size-1;i>=index;i--){
               a[index+1]=a[index];
               }

               a[index]=element;
            

        }
 }
int printarray(int *a,int size){
    for (int i=0;size>i;i++){
    printf("%d ",a[i]);}    
}
int main(){
    int a[100]={3,4,5,6,67,7};
    int capacity=100,element=78,size=6, index=4;
    size=size+1;

    
    insertion(a,size,element,index,capacity);
    printarray(a,size);
}