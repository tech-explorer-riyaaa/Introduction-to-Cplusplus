# include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1=(n+1)/2;
    int n2=n1-1;
    // first part
    int i=1;
    while (i<=n1){
        int j=1;
        while(j<=n1-i){
            cout<<" ";
            j++;
        }
        int k=1;
        while (k<=2*i-1){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;

    }
    // second part
    int r=n2;
    int k=1;
    while (k<=n2){
        int p=1;
        while (p<=n2-r+1){
            cout<<" ";
            p++;
        }
        int s=1;
        while (s<=2*r-1){ // multiply mei * use krna is mandatory ; error aata hai iske bina
            cout<<"*";
            s++;
        }
        cout<<endl;
        r=r-1;
        k++;
    }
}