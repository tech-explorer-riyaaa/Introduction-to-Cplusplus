# include <iostream>
using namespace std;
int func(int a){
    a += 10;
    return a;
}

int main() {
    int a = 5;
    cout<<func(a)<<endl;
    func(a); // this value will not get printed until asked to do so.
    cout << a;
}
