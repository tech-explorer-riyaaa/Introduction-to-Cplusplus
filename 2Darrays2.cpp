#include <iostream>
using namespace std;

void printArray(int a[][5], int m, int n){
    // whenever we passes a 1D array in a function
    // always need to pass its length
    // no way the function can determines its length
    // same is the case with 2D array
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int a[5][5]={{1,2},{3,4}};
    printArray(a,5,5);



    /*
    int a[100][100];
    int m,n;
    cin>>m>>n;
    
    // Taking input
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];        
        }
    }
    printArray(a,m,n);
    */
}

