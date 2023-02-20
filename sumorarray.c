#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n],temp=n;
    for (int i=1;temp>=i;i++){
        scanf("%d",&a[i]);
    }
    for (int i=1;temp>=i;i++){
        sum=sum+a[i];
    }
    printf("%d ",sum);

}