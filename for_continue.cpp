# include <iostream>
using namespace std;
int main(){
    for (int j=1;j<10;j++){
        if (j==7){
            continue; // for loop m continue k baad bhi j++ hoga...baaki continue k neeche ka loop ka hissa j=7 k liye skip ho jayega..then j++=8 k liye loop chlegi
        } // while mei if k andr bhi i++ krna pd rha tha continue k case mei
        cout<<j<<endl;
    }
}