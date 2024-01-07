#include <iostream>
using namespace std;

int main(){
    int m, n; //m - number of rows , n - number of columns
    cin >> m >> n;
    int** p = new int*[m];
    for (int i = 0; i < m; i++){
        p[i] = new int[n]; // uss pointer p jaake ek array allocate krra hai
        for (int j = 0; j < n; j++){
            cin >> p[i][j]; // taking input 
        }
    }

    // for diff col size array
    for (int i = 0; i < m; i++){
        p[i] = new int[i + 1]; // uss pointer p jaake ek array allocate krra hai
        for (int j = 0; j < n; j++){
            cin >> p[i][j]; // taking input 
        }
    }

    // deletion from heap

    for (int i = 0; i < m; i++){
        delete [] p[i]; // p[i] is the i th row in the array of pointers
        // p ki saari rows ko del kr diya    
    }
    delete [] p;
    // integer pointer wale array ko bhi del kr diya
}