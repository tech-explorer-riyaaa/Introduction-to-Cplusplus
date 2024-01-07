#include <iostream>
using namespace std;
int main(){

    // constant integer

    const int i = 10;

    // one more way of writing

    int const i2 = 10;

    // char const or const char - same thing

    // i =12;

    // const int j; - initialising is allowed
    // j =20; - this also not allowed

    // same reference var mei bhi saath k saath initialize krna pdta tha
    // 2 errors - pehla is you have to do initialization here; you cannot assign to j neeche


    // constant reference from a non const integer



    int j = 12;

    const int & k = j;
    // k++; - can't do
    j++;  // can do

    cout << k << endl; // j k ek hi cheez hai...k mei bhi changes reflect hore hai

    // const reference from a const integer

    int const j2 = 12;
    int const &k2 = j2;
    // k2++;
    // j2++;

    // reference from a const integer

    int const j3 = 123;
    // int & k3 = j3; - not possible - iss line p error aayega
    // k++; - ispe error nahi aayega
    // ready only k path se read and write dono k access wala path copy nahi kr skte

     


}