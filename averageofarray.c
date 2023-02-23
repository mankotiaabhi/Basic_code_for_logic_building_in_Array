#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int temp=n;
    int a[n];
    for (int i=0;n>i;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;n>i;i++){
        
        sum=sum+a[i];
    }
    int avr=sum/n;
    printf("%d\n",avr);
}