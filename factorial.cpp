#include <iostream>
using namespace std;

int factorial(int n) {
    cout << n << endl;
    // make sure recursion kahi rukna bhi chaiye
    if (n == 0){
        return 1;
    }
    int smallOutput = factorial(n - 1); 
    return n * smallOutput;
}

int main() {
    int n;
    cout << " enter n : ";
    cin >> n;
    cout << "reached here" << endl;
    int output = factorial(n); // iske neeche access nahi kr paare kuch bhi
    cout << "started" << endl;
    cout << output << endl;
    cout << "ended" << endl;
}