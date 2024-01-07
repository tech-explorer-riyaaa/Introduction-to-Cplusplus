#include <iostream>
using namespace std;

inline int max (int a, int b){ // declaring the function to be inline
   return (a > b)? a : b; 
}

int main(){
    int a, b;
    cin >> a >> b;
    // to find maximum
    // int c;
    // if (a > b){
    //     c = a;
    // } else {
    //     c = b;
    // }

    // shortcut - tertiary operator

    int c = (a > b) ? a : b;

    int x, y;
    x = 12;
    y = 34;

    int z = (x > y) ? x : y;

    // second option - max function

    // int d = max(a, b);
    // int s = max(x, y); - normal max define kara tha bina inline k

    // code readability is improved - function
    // downside - performance p thoda sa hit aayega
    // var copy honge..upr jaare hai... neeche wala func rukega ki rukja ans aayega... upr jayega waps aayega...fir wo ans c mei daala jayega

    //no performance hit + code readable
    // inline - jaha bhi wo func use ho rha h uski body ko waha p copy kr diya jayega - compiler hi kr dega
    // inline se jab actually code run hoga, koi function nahi hai humare pass, wahin hai humare pass , wahin k wahin eveluate krna hai
    // func + funcCalls + readable 
    
    int d = max(a, b);
    int s = max(x, y);

}