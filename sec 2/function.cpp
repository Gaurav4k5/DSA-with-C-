#include <iostream>
using namespace std;

void printname()
{
    int n;
    cout << "Enter the value of n " << endl;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Babbare " << endl;
    }
}

int getadd(int a , int b) {
    int result = a + b;
    return result; 
}

int findMax(int num1, int num2, int num3) {
    if(num1>num2 && num1>num3) {
        return num1;
    }
    else if (num2>num1 && num2>num3) {
        return num2;
    }
    else {
        return num3;
    }
}

int main()
{
    // //Function call
    // printname();
    
    // int a;
    // cout << "Enter Value of a is : " << endl;
    // cin >> a;

    // int b; 
    // cout << " Enter Value of b is : " << endl;
    // cin >> b;

    // int sum = getadd(a,b);

    // cout << " Sum of two number is :" << sum  << endl;

    int a,b,c;
    cin >>a >> b >> c ;
    
    int maximumNumber = findMax(a,b,c);
    cout << maximumNumber << endl;
}