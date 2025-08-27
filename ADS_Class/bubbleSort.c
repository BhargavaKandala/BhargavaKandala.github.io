#include <stdio.h>
void sort(int *arr, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j+1] < arr[j]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }  
    }
}



void recursivesort(int *arr, int n){
    if(n > 1){
        recursivesort(arr, n-1);
        for(int i = 0; i < n-1; i++){
            if(arr[i+1] < arr[i]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}


void BubbleSort(int *arr,int n, int i){

    if(n == 0 || i == n - 1) return;

    if(arr[i] > arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    BubbleSort(arr, n, i+1);
    BubbleSort(arr, n-1, 0);
}

int main()
{
    int arr[] = {45,22,1,2,6,76,86};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n, 0);
    for(int i = 0; i < n-1; i++){
        printf("%d ", arr[i]);
     }

}