# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int j;
    int a;
    while (i<=n){
        a=i;
        j=1;
        while (j<=i){
            cout<<a;
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
}