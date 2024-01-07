#include<iostream>
using namespace std;


int main(){
    int s;
    int e;
    int w;
    cin >> s >> e >> w;
    
    while (s<e) {
        int a;
        a=(5.0/9)*(s-32);
        cout << s << " " << a << endl;
        s = s + w;
     }
  
}


