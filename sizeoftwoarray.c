#include<stdio.h>
int main(){
    int a[]={1,2,3,4,6,5,8};
    int b[]={3,4,5,6,77,7};
    int size_ist=sizeof(a)/sizeof(int);
    int size_2nd=sizeof(b)/sizeof(int);
    if (size_ist==size_2nd){
        printf("equal");
    }
    else{
        printf("not equal");
    }
}