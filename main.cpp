#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int length){
    int counter=0;
    while(counter<length){
        for(int i=0; i<length-1; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    
}
void insertionSort(int arr[], int length){
    int i, j, lowest;
    for(i=0; i<length-1; i++){
        lowest=i;
        for(j=i; j<length; j++){
            if(arr[lowest]>arr[j]){
                lowest=j;
            }
        }
        if(lowest!=i){
            int temp = arr[lowest];
            arr[lowest]=arr[i];
            arr[i]=temp;
        }
    }
}
void selectionSort(int arr[], int length){
    int i, j, index;
    
    for(i=1; i<length; i++){
        index= arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>index){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=index;
    }
}
//this is function for qsort algorithm
int compare(const void* A, const void* B){
    int x, y;
    x=*((int*)A);
    y=*((int*)B);
    
    return x-y;
}
int main(){
    int arr[6]={4,6,9,2,5,4};
    qsort(arr, 6, sizeof(int),compare);
    
    for(int i=0; i<6; i++)
        cout<<arr[i]<<" ";
    
    return 0;
}
