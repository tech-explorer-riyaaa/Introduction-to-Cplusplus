# include <iostream>
using namespace std;
void increment(int a){ // void mtlb wo kuch return nahi karta
    a=a+1;
}
int increment2(int a){
    a=a+1;
    return a;
}
int main(){
    int n=10;
    increment(n); // change of a in func above can't chnage our n here
    cout<<n<<endl;
    n=increment2(n); // 'main' have updated its variable
    cout<<n<<endl;
    int a=5;
    increment(a);
    cout<<a<<endl;
}
