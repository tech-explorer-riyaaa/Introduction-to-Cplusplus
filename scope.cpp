# include <iostream>
using namespace std;
int main(){
    int k=1;
    while(k<100){
        int k2=1002;
        cout<<k2<<endl;
        k++;
    }
    //cout<<k2<<endl;
    //k2 is not available here

    int i=10;
    cout<<i<<endl;

    if (i==10){
        int j=12;
        cout<<j<<endl; // first curly bracket k bahar variable ki value nahi maani jaati
    } else {
        int j=122;
        cout<<j<<endl;
    }
   // cout<<j<<endl;
   // j is not available here 
}