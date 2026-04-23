#include <iostream>
using namespace std;

void maxnminSwap(int arr[], int size){
    int max = INT_MIN, min = INT_MAX;
    int max_index = 0, min_index = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] <= min){
            min = arr[i];
            min_index = i;
        }
        if(arr[i] >= max){
            max = arr[i];
            max_index = i;
        }
    }
    arr[max_index] = arr[max_index] + arr[min_index];
    arr[min_index] = arr[max_index] - arr[min_index];
    arr[max_index] = arr[max_index] - arr[min_index];
 
}

int main(){
    int arr[] = {4, 6, 3, 2, 1, 8, 7, 0};
    int size = sizeof(arr) / sizeof(int);

    maxnminSwap(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}