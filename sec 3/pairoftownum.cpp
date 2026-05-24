#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> arr{1,2,3,4,5,6,7,8};

    //print all pairs
    for(int i=0; i<arr.size(); i++) {
        int element = arr[i];

        //for every element , will traverse on aage wale element 
        for(int j=i+1; j<arr.size(); j++) {
            // all pairs
            // cout << "(" << element <<"," << arr[j] << ")"<< " , ";

            // pairs have sum is 9
            if(element + arr[j] == 9) {
                cout << "(" << element <<"," << arr[j] << ")"<< " , ";
            }
            
        }
    }

    return 0;
}