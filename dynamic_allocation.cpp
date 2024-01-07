# include <iostream>
using namespace std;

int main(){
    int* p = new int;
    *p = 10; // dereferencing
    cout << *p << endl;

    double* pd = new double;
    char* c = new char;

    // allocating a array on heap 

    int* pa = new int[50]; // 200 bytes on heap and 8 bytes on the stack
    // variable sized array
    int n;
    cout << "enter num of elements" << endl;
    cin >> n;
    
    int* pa2 = new int[n];
    // new keyword is for heap - pointer mei array k first element ka address aa jayega

    for (int i=0; i < n; i++){
        cin >> pa2[i];
    }
    int max = -1;
    for (int i = 0; i < n; i++){
        if (max < pa2[i]){
            max = pa2[i];
        }
    }
    cout << max << endl;
}