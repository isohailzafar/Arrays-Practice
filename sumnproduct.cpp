#include <iostream>
using namespace std;

int sumofArray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

int productofArray(int arr[], int size){
    int product = 1;
    for(int i = 0; i < size; i++){
        product *= arr[i];
    }

    return product;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    cout << "Original Array:\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Sum of array: " << sumofArray(arr, size) << endl;
    cout << "Product of array: " << productofArray(arr, size) << endl;

    return 0;
}
