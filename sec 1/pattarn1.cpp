#include <iostream>
using namespace std;

int main()
{

    // for (int row = 0; row<3; row= row + 1){
    //     for (int col = 0 ;  col<5; col = col +1 ) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;

    // for (int row = 0; row<n; row= row + 1){
    //     for (int col = 0 ;  col<n; col = col +1 ) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // --Hollow Rectangle--
    // for this

    // * * * * *
    // *       *
    // * * * * *

    // for (int row = 0; row<3; row = row + 1){
    //     if (row == 0 || row == 2) {
    //         for(int col=0; col <5;  col = col +1){
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    //     else{
    //         cout << "* ";
    //         for(int i=0; i<3; i = i+1){
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //         cout << endl;
    //     }
    // }

    // for this
    //  * * * * *
    //  *       *
    //  *       *
    //  *       *
    //  * * * * *

    //    for (int row = 0; row<5; row = row + 1){
    //     if (row == 0 || row == 4) {
    //         for(int col=0; col <5;  col = col +1){
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    //     else  {
    //         cout << "* ";
    //         for (int i=1; i<4; i = i+1){
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //         cout << endl;

    //     }
    // }

    // --Half pyramid--
    //--seedha
    // int n;
    // cin >> n;

    // for (int row=0; row<n; row = row + 1) {
    //     for(int col=0; col<row +1; col = col + 1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //--ulta
    // int n;
    // cin >> n;

    // for (int row=0; row<n; row = row + 1) {
    //     for(int col=0; col<n-row; col = col + 1){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int n;
    // cin >> n;

    // for (int row=0; row<n; row = row + 1) {
    //     for(int col=0; col<row+1; col = col + 1){
    //         cout << col + 1 ;
    //     }
    //     cout << endl;
    // }

    // --for a pyramid --
    int n;
    cin >> n;

    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << "  ";
        }
        for (int i = 0; i < row + 1; i++)
        {
            cout << "* ";
        }
        for (int i = 1; i < row + 1; i++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}