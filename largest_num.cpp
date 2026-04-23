#include <iostream>
using namespace std;

int main(){

    int num[] = {5, 15, 22, 1, -15, 24};

    int size = sizeof(num) / sizeof(int);
    int largest = INT_MIN;
    int index = 0;
    for (int i = 0; i < size; i ++){
        if(num[i] >= largest){
            largest = num[i];
            index = i;
        }
        //max() function can also be used instead of this
    }
    cout << "Largest number is: " << largest << endl;
    cout << "Index of the largest number is: " << index;

}