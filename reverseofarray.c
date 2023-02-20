#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],temp=n;
    for (int i=0;temp>i;i++){
        scanf("%d",&a[i]);
    }
    for (int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}