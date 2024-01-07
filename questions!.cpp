#include <iostream>
using namespace std;
int main() {    
    /*int x, y = 1;
    x = 10;
    if (x != 10 && x / 0 == 0) { // sirf warning aayegi of divison by zero ; baaki answer toh sahi aa jayega
        cout << y;
    } else{
         cout << ++y; 
    } 
    int x = 10;
    int y = 20;
    if(x++ > 10 && ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x <<" " << y;*/
     int x = 10;
    int y = 20;
    if(x++ > 10 || ++y > 20 ){
    cout << "Inside if ";
    } else{
    cout << "Inside else ";
    }
    cout << x <<" " << y;

}
       