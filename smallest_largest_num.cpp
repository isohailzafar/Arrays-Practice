#include <iostream>
using namespace std;

int main(){

    int num[] = {5, 15, 22, 1, -15, 24};

    int size = sizeof(num) / sizeof(int);
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i ++){
        smallest = min(num[i], largest);
        largest = max(num[i], smallest);
    }
    cout << "Largest number is: " << largest << endl;
    cout << "Smallest number is: " << smallest;

}