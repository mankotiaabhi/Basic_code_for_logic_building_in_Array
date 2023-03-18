#include<stdio.h>
int binary(int *a,int size,int element){
    int high,low,mid;
    high=size-1;
    low=0;
    for (int i=0;size>i;i++){
              mid = (high+low)/2;
             if (a[mid]==element){
                return mid;
             }
             if (a[mid]>element){
                high=mid-1;
             }
             else{
                low=mid+1;
             }
    }return -1;
}
int main(){
    int a[]={22,33,44,55,66,77,88,99};
    int x,size=sizeof(a)/sizeof(int),element=88;
    x=binary(a,size,element);
    printf("%d",x);
}