#include<stdio.h>
int sum(int *a,int n){
    int sum=0;
    for (int i=0;n>i;i++){
        sum=sum+a[i];
    }return sum;
}
int array(int *a,int n){
    for (int i=0;n+1>i;i++){
        printf("%d ",a[i]);
    }
}

int main(){
    int a[]={8,5,3,2,6,7,3,3};
    int n=(sizeof(a)/sizeof(int));
    int x=sum(a,n);
    array(a,n);

    

}