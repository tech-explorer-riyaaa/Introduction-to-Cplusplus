# include <iostream>
using namespace std;
int main(){
    char input[100];
    //cin>>input; // for hello world input ; it prints only hello 
    //cin.getline(input,100);
    // cin.getline(input,100); gives 'he' for hello world
    cin.getline(input,100,'o'); // hello world ka output cout hell dega; hell k baad o lete hi input lena band kr dega 
    cout<<input<<endl;
}