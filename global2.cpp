#include<iostream>
using namespace std;
#define MULTIPLY(a, b) a*b
int x = 1;

void print(){
    int x = 2;
    {
        int x = 3;
        cout << x << endl;
    }
}
int main(){
    print();
    

    cout << MULTIPLY(2+3, 3+5);
    return 0;
}
