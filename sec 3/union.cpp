#include<iostream>
#include<vector>
using namespace std;

int main() {

    int arr[] = {1,2,4,5,7};
    int sizea = 5;
    int brr[] = {6,77,8,9,0,3};
    int sizeb = 6;

    vector<int> ans;

    for(int i=0; i<sizea; i++) {
        ans.push_back(arr[i]);
    }

    for(int i=0; i<sizeb; i++) {
        ans.push_back(brr[i]);
    }

    cout << "Printnig ans vector"<< endl;
    for(int i=0; i<ans.size(); i++) {
        cout << ans[i]<< " ";

    }
    return 0;
}