#include <iostream>
using namespace std;

int factorial(int n){
    if (n == 0){
        return 1; // handled base case
    }
    int smallOutput = factorial(n - 1); // assumed it will work for n - 1
    int output = n * smallOutput; // defined for n
    return output;
}

int main(){
    cout << factorial(4);
    // sbse pehla step base case
    // assume krna ki choti problem k liye chal jayega
    // chota wala assume krke badi problem k liye dhang se hume code krna hai
}