# include <iostream>
using namespace std;
int main(){
    /*for(int i = 0; i < 5; i = i + 1){
    cout << i << " ";
    i = i + 1;
}
for(int i = 1; i < 5; i = i + 1){
    cout << i << " ";
    i = i - 1;
}
for(int i = 0; i < 2; i = i + 1) {
     for(int j = 0; j < 2; j = j + 1) {
          if (j == 1)
              break; // break is used to break the loop
          cout << j << " ";
      }*/
      for(int i = 0; i < 5; i = i + 1) {
     if(i == 2) 
           continue;
    cout << i << " ";
 } 

}