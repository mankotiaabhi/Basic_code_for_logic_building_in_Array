#include<stdio.h>
void selectionSort(int *a,int size ){
    int MINofindex,temp;
    for (int i=0;size>i;i++){
        MINofindex=i;
        for (int j=i;size>j;j++){
            if (a[j]<a[MINofindex]){
                MINofindex=j;
            }
        }
        temp=a[i];
        a[i]=a[MINofindex];
        a[MINofindex]=temp;
    }
}
 int prinTaRRay(int *a,int size){
    
    for (int i=0;size>i;i++){
        printf("%d ",a[i]);
    }
}
int main(){
     int size;
     scanf("%d",&size);
    int a[size];//={56,432,42,1,2,4};
    //size = sizeof(a)/sizeof(int);
    for (int i=0;size>i;i++){
        scanf("%d",&a[i]);
    }
    selectionSort(a,size);
    prinTaRRay(a,size);
}