# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
         // ek generic row ki baat kr rhe h
        int j=1;
        while (j<=n){
            cout<<n+1-j;
            j=j+1;
        }
        cout<<endl;
        i++;
    }
    

}