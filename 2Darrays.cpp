#include <iostream>
using namespace std;

int main(){
    int a[100][100];
    int m,n;
    cin>>m>>n;

    // Taking input
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    cout<<"row wise : "<<endl;
    // Print array row wise
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    } 

    cout<<"column wise : "<<endl;
    // Print array column wise
    for (int j=0;j<n;j++){
        for (int i=0;i<m;i++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl; // for new line
    }


}