# include <iostream>
using namespace std;
int main(){
    int i=10;
    // int i=22 - same naam ki do storage allowed nahi hai
    if (i==10){
        int i=23; //other variable of same name yaha par bana skte hai
        cout<<i<<endl;
    }
    cout<<i<<endl;
    // surrounding bracket scope ho jayega

    // generally aisa hota hai ki jo bhi surrounding bracket hai usse scope niklega
    // neeche hai ek case for example jisme aisa nahi hota hai
    // to access k everywhere k ko bahar banao
    // int k=0; fir uska scope int main wale {} hoga
    // hence for loop k andr bhi chlega and bahar bhi
    for (int k=0;k<10;k++){
        cout<<k<<endl;
    }
    // k bana () k beech pr ise hum andr use kr skte hai
    // effectively int k=0 ka scope for loop ka { } hai
    // toh sirf for loop k andr k valid hai , bahar nahi hoga
    // cout <<k<<endl; error 

    
    int a = 10;
    while(a > 5) {
        int a = 1;
        cout << a << " ";
        a--;
    }



}