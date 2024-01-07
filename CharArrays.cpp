# include <iostream>
using namespace std;

int length(char input[]){
     int count=0;
     for (int i=0;input[i]!='\0';i++){
        count++;
     }
     return count;
}
 int main(){
    char name[100];
    cout<<"Enter your name : ";
    cin>>name;
    //name[4]='x'; will print only abc because 3 index p toh use null mil gya
    // even on entering Riya Ahlawat I only got Riya during cout because of the space
    // got Riya_Ahlawat intact if entered
    // if name entered is abc ; toh third index pr null
    // lets add 'x' at fourth index
    //and replace null with char d at index 3
    // toh abcdx....garbage values print hoti rhegi jab tak use null nahi mil jaata
    // garbage mei null bhi mil jaata hai
    //name[1]='\0'; // only a will be printed 
    //name[4]='x';
    //name[3]='d';
    cout<<"Name : "<<name<<endl;

    cout<<"Length : "<<length(name)<<endl;
 }