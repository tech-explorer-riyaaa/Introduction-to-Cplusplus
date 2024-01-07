# include <iostream>
using namespace std;

void print_1_to_n(int n){
    for (int i=1;i<=n;i++){
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    print_1_to_n(n);
    // ye void func h toh ise kisi storage mei save krne ki koshish nahi krenge , error aa jayega
    // int a=print_1_to_n(n) will give error ; kyoki ye toh kuch return hi nahi kar raha hai
    // agar int input likha hai func define karne mei toh use int input chaiye
    // print_1_to_n() krenge toh aayega - no matching function to call
}