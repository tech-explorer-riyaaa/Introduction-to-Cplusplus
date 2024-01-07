# include <iostream>
using namespace std;
int main() {
    int p=2000;
    int t=2;
    int r=8;
    /*Samriddhi Tiwari Cse-ai: Ismein tune float define toh kar diya par */
    /*fraction likhte Waqt dono numerator aur denominator integer Mein diye hain.*/
    /* Toh uska result bhi integer he dega. 0.08 ko 0 consider karega*/
    /* Toh tune 100.0 lagake computer ko Yeh bataya ki decimal number chal jayega*/
    float q=r/100.0;
    float si=p*q*t;
    float n=100;
    float a=r/n;
    float nsi=p*a*t;
    cout<<nsi<<endl;
    cout<<si<<endl;
    /* garbage value wali cheez*/
    int s;
    cout<<s;
}