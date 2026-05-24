#include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

                                                                    // ---Full pyramid ----
    // for (int row=0; row<n; row++)
    // {
    //  for (int col=0; col<n-row-1;  col++) {
    //     cout << " ";

    //  }for (int i=0; i<row+1;  i++) {
    //     cout << "* ";
    //  }
    //  cout << endl;

    // }


                                                              //----inverted pyramid -----
    // for (int row=0; row<n; row++) {
    //     for(int col=0; col<row; col++) 
    //     {
    //         cout << " ";
    //     }
    //     for (int i=0; i<n-row; i++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

                                                           //    -----------Diamond-------------
    
    // for (int row=0; row<n; row++)
    // {
    //  for (int col=0; col<n-row-1;  col++) {
    //     cout << " ";
    //  }for (int i=0; i<row+1;  i++) {
    //     cout << "* ";
    //  }
    //  cout << endl;
    // }
    // for (int row=0; row<n; row++) {
    //     for(int col=0; col<row; col++) 
    //     {
    //         cout << " ";
    //     }
    //     for (int i=0; i<n-row; i++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

                                                                     //--hollow Diamond--

    // for (int row=0; row<n; row++){

    //     for (int col=0; col<n-row-1; col++) {
    //         cout << " ";    
    //     }
    //     for (int col=0; col<2*row+1; col++) {
    //         if (col == 0 || col == 2*row ) {
    //             cout << "*";
    //         }
    //         else {
    //             cout <<  " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int row=0; row<n; row++) {
    //     for(int col=0; col<row; col++) 
    //     {
    //         cout << " ";
    //     }
    //     for (int col=0; col<2*n-2*row-1; col++) {
    //         if (col == 0 || col == 2*n-2*row-2 ) {
    //             cout << "*";
    //         }
    //         else {
    //             cout <<  " ";
    //         }
    //     }
    //     cout << endl;
    // }

                                                             //-----hollow Diamond in rectangle box-------

    // for (int row=0; row<n; row++) {
    //      for (int col=0; col<n-row; col ++) {
    //         cout << "*";
    //      }
    //      for (int col=0; col<2*row+1; col++) {
    //         cout << " ";
    //      }
    //      for (int col=0; col<n-row; col ++) {
    //         cout << "*";
    //      }
         
    //      cout << endl;

    // }
    // for (int row=0; row<n;  row++) {
    //      for (int col=0; col<row+1; col ++) {
    //          cout << "*";
    //     }
    //     for (int col=0; col<2*n-2*row-1; col++) {
    //         cout << " ";
    //     }
    //      for (int col=0; col<row+1; col ++) {
    //          cout << "*";
    //     }
    //     cout << endl;

    // }

                                                                        //---------fancy pattarn #2-------

    for (int row=0; row<n; row++) {
        for (int col=0; col<row+1; col++) {
            cout << row+1 ;
            if ( col != row )
            cout <<"*";
        }
        cout << endl;
    }
    for (int row=0; row<n; row++) {
        for (int col=0; col<n-row; col++) {
            cout << n-row ;
            if ( col != n-row-1 )
            cout <<"*";
        }
        cout << endl;
    }
    
    for (int row=0; row<n; row++) {
        int col;
        for ( col=0; col<row+1; col++){
            int ans =  col + 1;
            char ch =  ans + 'A' - 1 ;
            cout << ch;
        }

        for (col=row; col>=1; col = col -1 ) {
            int ans =  col;
            char ch =  ans + 'A' - 1 ;
            cout << ch;
        }
        cout << endl;
    }
}