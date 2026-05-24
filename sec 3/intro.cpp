#include<iostream>
using namespace std;


void printArray(int arr[], int size) {
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void inc(int arr[] , int size) {
    arr[0] = arr[0] + 10;

    printArray(arr, size);
}

int main() {
    // int arr[7] = {1,2,3,4,4,6,8};
    // cout << "Array created successfully" << endl;
    // // cout << arr[5] <<endl;
    // for (int i=0; i<7; i++) {
    //     cout << arr[i] << " ";
    // }

    // int arr[10];

    // cout << "Enter the values of array " << endl;
    // for (int i=0; i<10; i++) {
    //     cin >> arr[i] ;
    // }

    // // printing 
    // cout << " The array is " << endl;
    // for(int i=0; i<10; i++) {
    //     cout << arr[i] << " ";
    // }


    // int arr[5] = {1,3,5,7,9};
    // for(int i=0; i<5; i++){
    //     cout << arr[i]%2 << " ";
    // }

    int arr[] = {5,6};
    int size = 2;
    inc(arr, size);

    printArray(arr, size);

    return 0;
}