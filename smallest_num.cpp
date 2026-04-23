#include <iostream>
using namespace std;

int main(){

    int num[] = {5, 15, 22, 1, -15, 24};

    int size = sizeof(num) / sizeof(int);
    int smallest = INT_MAX;
    int index = 0;
    for (int i = 0; i < size; i ++){
        if(num[i] <= smallest){
            smallest = num[i];
            index = i;
        }
        //min function can also be used instead of this
    }
    cout << "Smallest number is: " << smallest << endl;
    cout << "Index of the smallest number is: " << index;

}