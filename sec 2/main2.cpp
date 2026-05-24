#include<iostream>
using namespace std;


// float Circle_area(float radius) {
//     float area;
//     area = 3.14 * radius * radius;
//     return area;
    
// }

// int main () {
//     float radius;
//     cin >> radius;
//     float area = Circle_area(radius);
//     cout << "Area of circle is :" <<area<<endl;
// }



// hecking Even or Odd

// int EvenOdd(int n) {
//     if(n%2 == 0){
//         cout <<  "the number is Even" <<endl;
//     }
//     else{
//         cout <<  "the number is Odd" <<endl;
//     }
// }


// int main () {
//     int n;
//     cin >> n;
//     int Number = EvenOdd(n);
// }



int Factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact = fact * i;
    }
    cout << "Factorial is :" <<fact<<endl;
}


int main () {
    int n;
    cin >> n;
    int Number = Factorial(n);
}
