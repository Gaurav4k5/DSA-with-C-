#include<iostream>
#include<vector>
using namespace std;

int main() {
    // vector<vector<int>> arr;

    // vector<int> a{1,2,3};
    // vector<int> b{3,4,5,4,5,4};
    // vector<int> c{9,2,4,3};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    int row = 9;
    int col = 13;
    vector<vector<int> > arr(row, vector<int>(col, 2));

    for(int i=0; i<arr.size(); i++) {
        for(int j=0; j<arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}