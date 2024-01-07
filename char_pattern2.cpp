# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        int a=i;
        while (j<=n){
            cout<<char('A'+a-1);
            a++;
            j++;
        }
        cout<<endl;
        i++;
    }
}