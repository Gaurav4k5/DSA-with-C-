#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,1,1};
    int size = 18;

    int numZero = 0;
    int numOne = 0;

    for(int i=0; i<size; i++) {
        if(arr[i] == 1){
            numOne++;
        }
        else{
            numZero++;
        }
    }

    cout << "number of ones is " << numOne << endl;
    cout << "number of zerose is " << numZero << endl;

    return 0;
}