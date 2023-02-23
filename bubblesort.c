#include<stdio.h>
void printarray(int* a,int n){
    for (int i=0;n>i;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

}
void  bubblesort(int* a,int n){
    int temp;
    for (int i=0;n-1>i;i++){
        for (int j=0;n-1-i>j;j++){
            if (a[j]>a[j+1]){
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
    }
}

int main(){
    int n,temp;
    scanf("%d",&n);
    temp=n;
    int a[temp];
    
    for (int i=0;n>i;i++){ 
          scanf("%d",&a[i]);
    }
    printarray(a,n); //print the array before sorting.
    bubblesort(a,n); //function to bubble sorting.
    printarray(a,n);//print the array after sorting.
    return 0;

}