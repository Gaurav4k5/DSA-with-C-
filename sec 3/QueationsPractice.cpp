#include<iostream>
#include<limits.h>
using namespace std;

// void PrintRowWiseSum(int arr[][3], int rows, int cols) {
//     //row wise sum -> row wise traversal
//     for(int i=0;i<rows; i++){
//         int sum =0;
//         for(int j=0;j<cols; j++) {
//             cout << arr[i][j] << " ";
//             sum = sum + arr[i][j];
//         }
//         cout << "The sum of this rows is :" << sum << endl;
//     }

// }

int getMax(int arr[][3], int rows, int cols) {
    int maxi = INT_MIN; 
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++) {
            if(arr[i][j] > maxi){
               maxi == arr[i][j];
            }
        }
    }
    return maxi;
}

int main() {
    int arr[3][3];
    int rows = 3;
    int cols = 3;
    
    for(int i = 0; i <rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
  
// PrintRowWiseSum(arr, rows, cols);

cout << "maximum number is " <<getMax(arr, rows, cols) <<endl;

    return 0;
}