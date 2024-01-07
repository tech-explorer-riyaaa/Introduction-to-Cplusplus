# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int a=1;
        while (a<=n-i){
            cout<<" ";
            a=a+1;
        }
        int j=1;
        while (j<=i){
            cout<<"*";
            j=j+1;
        }
        int k=1;
        while (k<=i-1){
            cout<<"*";
            k=k+1;
        }        
        int b=1;
        while (b<=n-i){
            cout<<" ";
            b=b+1;
        }
        cout<<endl;
        i=i+1;
    }
}