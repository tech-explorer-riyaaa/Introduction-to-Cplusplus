#include <iostream>
using namespace std;
#define PI 3.14 // compiler ko har jagah PI ki jagah 3.14 likha dikhega
// no extra variable is required
// jab tak tumhara code compile hoga ye kaam usse pehle ho chuka hoga

int main(){

    int r;
    cin >> r;
    // double pi = 3.14;

    // cout << 3.14 * r * r << endl;

    // pi = pi + 1;
    cout << PI * r * r << endl;

    // easy code maintenance
    // no performance hit
    // no extra memory
    // noone can change it

    

}
