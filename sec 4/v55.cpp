#include <iostream>
using namespace std;    

int binarySearch(int arr[], int n , int target) {
    int first = 0;
    int last = n-1;
    int mid = (first+last)/2;
     
    while(first <= last) {
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            first = mid + 1;
        }
        else{
            last = mid - 1;
        }
        mid = (first + last)/2;
    }
    return -1;

}



int main() {
        int arr[] = {3, 8, 12, 17, 24, 33, 42, 51, 59, 66, 71, 80, 88, 94, 99};
        int target = 33;
        int n = sizeof(arr)/sizeof(int);

        int targetindex = binarySearch(arr, n, target);

        if(targetindex == -1) {
            cout << "Target was not found " << endl;
        }
        else{
            cout << " target is found at" <<" "<< targetindex << " index "<< endl;
        }
}