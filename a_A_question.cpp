#include <iostream>
using namespace std;
int main(){   
    /* Q1 int x = 5; 
    if (x<6) {
        cout <<  "Hello " ;
    }
    if (x==5) {
        cout << "Hi " ;
    }else { 
        cout << "Hey " ;
    } 
   */
  // Q2
    /* int x = 15;
    if (x<=15) {
        cout << "Inside if ";
    } else if (x==15) {
        cout << "Inside else if ";
    }
    cout << x; */
    // Q3
     /*int var1=5; 
     int var2=6;
     if ((var2=1)==var1){
        cout << var2;
     } else {
        cout<<(var2 + 1); */
    //Q4
    /*int x;
    cout<<"enter x: ";
    cin>>x;
    if((1+x)!=(1-x)) {
        cout<<"In if block";
    }*/
// Q5
     /*int a = 10, b = 20, c = 100;
    if(a <= b || c <= b) {
        cout << "hello" << endl;
    }
    else if(a <= b || a <= c) {
        cout << "hi" << endl;
    }
    else {
        cout << "hey" << endl;
    }*/
    // Q6
    /*int a = 10, b = 20, c = 30;
    if(a <= b && !b) {
        cout << "hello";
    }
    else if(c >= a && c >= b) {
        cout << "hi";
    }
    else {
        cout << "hey";
    }*/
    // check case
    /*cout<<"write the character: ";
	char x;
	cin>>x;
    int g=x;
    int c='a'; //65
    int d='z'; //90
    int e='A'; //97
    int f='Z'; //122
    if (c<=g && g<=d){
        cout<<0;
    } else if (e<=g && g<=f){
        cout<<1;
    } else{
        cout<<-1;
    }*/
    // better method
    char x;
    cin>>x;
    if (x>='A' and x<='Z'){
        cout<<1;
    } else if (x>='a' and x<='z'){
        cout<<0;
    } else {
        cout<<-1;
    }
}

