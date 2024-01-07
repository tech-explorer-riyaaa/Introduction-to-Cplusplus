# include <iostream>
using namespace std;
int main(){
    int x;
    int n;
    cin>>x;
    cin>>n;
    int a=x;
    if (n==0){
        cout<<1;
    } else if (n==1){
        cout<<x;
    } else {
        while (n>1){
            x=a*x;
            n=n-1;
        }
        cout<<x;
    }
}