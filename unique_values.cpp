#include <iostream>
using namespace std;

int uniqueValues(int arr[], int pos[], int unique[], int size){
    
    for(int i = 0; i < size; i++){
        int x = 0;
        for (int j = 0; j < size; j++)
        {   
            if(i == j){
                continue;
            }
            else if(arr[i] == arr[j]){
                x++;
                pos[i] = x;
            }
        }    
    }
    int j = 0;
    
    for(int i = 0; i < size; i++){
        
        if(pos[i] == 0){
            unique[j] = arr[i];
            j++;
        }
    }
    return j;
    
}

int main(){
    int arr[] = {1, 2, 1, 2, 3, 4, 4, 5,5,5,4,3, 10};
    
    int size = sizeof(arr) / sizeof(int);
    int unique[size];
    int pos[size] = {};
    
    int j = uniqueValues(arr, pos, unique, size);

    cout << "Unique Values: \n";
    for(int i = 0; i < j; i++){
        cout << unique[i] << " ";
    }
    cout << endl;
}