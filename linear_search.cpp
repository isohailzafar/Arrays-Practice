#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int match){

    for(int i = 0; i < size; i++){
        if(arr[i] == match){
            return i;
        }
    }
    return -1;
}

int main(){

    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr)/sizeof(int);

    // int ans = linearSearch(arr, size, 22);
    cout << "Index = " << linearSearch(arr, size, 7) << endl; 
}