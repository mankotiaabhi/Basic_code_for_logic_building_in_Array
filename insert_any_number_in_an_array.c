/* array = {55,12,24,63,12}
   we have to insert 29 at index no. 2 and after that right shift the array
   output = {55,12,29,24,63,12}*/ 

#include<stdio.h>
int insertion(int* arr,int size_of_array,int capacity,int element,int index){
    if (size_of_array>=capacity){
        return -1;
    }
    else{
        for (int i=size_of_array-1;i>=2;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
    }
}
int printarray(int* arr,int size_of_array){
    for (int i=0;size_of_array>i;i++){
    printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[100]={55,12,24,63,12};  
    int size_of_array = 5,capacity_of_array=100,element=29,index=2;
    size_of_array+=1;
    insertion(arr,size_of_array,capacity_of_array,element,index);
    printarray(arr,size_of_array);
    
}