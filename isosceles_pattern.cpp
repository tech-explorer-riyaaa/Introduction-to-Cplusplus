# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int spaces=1;
        while (spaces<=n-i){
            cout<<" ";
            spaces++;
        }
        int num=1;
        while (num<=i){
            cout<<num;
            num++;
        }
        int j=i-1; // j>=1
        while (j>0){
            cout<<j;
            j=j-1;
        }
        cout<<endl;
        i++;
    }
}