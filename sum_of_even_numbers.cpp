# include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"enter N: "<<endl;
    cin>>a;
    int sum;
    sum=0;
    int i;
    i=0;
    while (i<=a) {
        sum=sum+i;
        i=i+2;
    }
    cout<<sum<<endl;
}