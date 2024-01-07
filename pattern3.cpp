# include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    
    int i=1;
    int k=1;
    while (i<=n) {
        int y=1;
        int z=n-i; // i th row have n-i spaces   
        while (y<=z){
            cout<<" ";
            y=y+1;
        }
            int a=1;
            while (a<=i){
                cout<<k;
                a=a+1;
                k=k+1;
            }
        
        
        cout<<endl;
        i=i+1;
    }
}