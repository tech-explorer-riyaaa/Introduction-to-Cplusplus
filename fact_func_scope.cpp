# include <iostream>
using namespace std;
 
 int fact(int n){
    // cout<<a<<endl; not possible as wo neeche wale a ka scope main k parentheses hai
    int ans=1;
    for (int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
 }
 int main(){
    int a;
    cin>>a;
    int output = fact(a);
    // cout<<n<<endl; also wrong
    // cout<<ans<<endl;  nahi kar sakte ye bcz iss ans ka scope fact ke {} hai , jaise hi wo parentheses khatam hoga ans ki storage khatam ho chuki hai 
    cout<<output<<endl;
 }
// fact(int n) mei n ka scope for loop k case mei i jaisa ho jayega
// n is argument variable here ; same for i in for loop (func k andr argument mei hum jo variable bhejte hai)
// so ans and a are local variable - local to that particular  function , sirf uss func k andr accesible hai inhe bahar use nahi kar payenge