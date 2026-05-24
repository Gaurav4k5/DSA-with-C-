#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // create vector
    vector<int> arr;

    // int ans = (sizeof(arr)/sizeof(int));
    // cout << ans << endl;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    // insert
    arr.push_back(5);
    arr.push_back(7);
    arr.push_back(6);
    arr.push_back(9);

    // print
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    // pop
    arr.pop_back();
    // print
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    

    int n;
    cout << "Enter value of n " << endl;
    cin >> n;

    vector<int> brr(n, 4);
    cout << "size of b " << brr.size() << endl;
    for(int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;




    return 0;
}