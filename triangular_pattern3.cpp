# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    
    int a=1;
    while( i<=n){
        int j=1;
        while(j<=i){

            cout<<a;
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
}