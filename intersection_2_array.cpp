#include <iostream>
using namespace std;

int intersection_2_arr(int arr1[], int arr2[], int intersection[], int size1, int size2){
    int x = 0;
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                intersection[x] = arr1[i];
                x++;
            }
        }
        
    }
    return x;
    
}

int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 2, 3};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
    int intersection[size1];
    int x = intersection_2_arr(arr1, arr2, intersection, size1, size2);

    cout << "Intersection: ";
    for(int i = 0; i < x; i++){
        cout << intersection[i] << " ";
    }
    cout << endl;
}