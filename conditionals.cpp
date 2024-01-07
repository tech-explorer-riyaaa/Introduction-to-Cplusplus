# include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"enter numbers"<<endl;
    cin>>a>>b;
    /*if (a==b){
        cout<<"hey these are equal"<<endl; 
    }*/

    /*if (a==b){
        cout<<"they are equal";
    }else{
        cout<<"they are not equal";
        
    }*/
    // single line comment
    /* if (a==b){
        cout<<"they are equal"<<endl;
    } else{
        if (a<b){
            cout<<"a is smaller than b";
        }else{
            cout<<"a is greater than b";
        }
        
    } */
     if (a==b) {
        cout<<"hey these are equal"<<endl;
     } else if (a<b){
        cout<<"a is smaller than b"<<endl;
    } else { //else if (a>b)
        cout<<"a is greater than b"<<endl;
    }
}
