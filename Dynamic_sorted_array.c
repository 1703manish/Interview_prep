#include<stdio.h>
#include<stdlib.h>

void bubblesort(int arr[], int n){
        int temp;
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if( arr[j] > arr[j+1]){
                    temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
}

int remove_duplicate(int arr[], int n){
    int i=0;
    for(int j=1; j<n; j++ )
        if( arr[i] != arr[j]){
            i++;
            arr[i]=arr[j];
        }
    return i+1;
    
}

void display(int arr[], int n){
    printf("\nElements present in array:\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    
    int size;
    printf("enter size of array:\n");
    scanf("%d",&size);
    
    int* arr=(int*) malloc(size*sizeof(int));
    
    printf("Enter elements for array:\n");
    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    display(arr,size);
    
    bubblesort(arr,size);
    
    printf("\nafter sorting");
    display(arr,size);
    
    int new_size=remove_duplicate(arr,size);
    display(arr,new_size);
    
    return 0;
}
