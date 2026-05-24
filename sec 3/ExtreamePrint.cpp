#include<iostream>
using namespace std;

int main() {
    // int arr[9] = {1,2,3,4,5,6,7,8,9};
    // int size = 8;
    // // print like this 1,8,2,7,3,6,4,5
    // for(int i=0; i<=size/2; i++) {
    //     cout << arr[i] << " " << arr[size-i] << " ";
    // }

    // reverse an Array
    int arr[8] = {1,2,3,4,5,6,7,8};
    int size = 8;
    for(int i=0; i<9; i++) {
        arr[size-i] == arr[i];
        cout << arr[size-i] << " ";
    }

    return 0;
}
