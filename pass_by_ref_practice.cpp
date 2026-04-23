#include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout << "In function\n";
    for (int i=0; i < size; i++){
        arr[i] = 2 * arr[i];
        
    }
}

int main(){
    int arr[] = {1, 2, 3};
    int size = sizeof(arr) / sizeof(int);
    changeArr(arr, size);
    cout << "In main\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}