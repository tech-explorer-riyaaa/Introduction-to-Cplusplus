# include <iostream>
using namespace std;
int main(){
    int f;
    cout<<"enter fahrenheit value: ";
    cin>>f;
    int c=(5.0/9)*(f-32);
    cout<<(5.0/9)*(f-32)<<endl;
    cout<<c<<endl;
    c=(5*(f-32))/9;
    cout<<c<<endl;
    cout<<10%3<<endl;

    int a;
    int b;
    cout<<"enter a and b: "<<endl;
    cin>>a>>b;
    bool isequal=(a==b);
    bool isagreater=(a>b);
    bool isaless=(a<b);
    cout<<"are they equal? "<<isequal<<endl;
    cout<<"is a greater? "<<isagreater<<endl;
    cout<<"is a less? "<<isaless<<endl;
    // bool prints 0 or 1 
    bool third = isequal && isagreater; 
    bool fourth = isequal || isagreater;
    cout<<third<<endl<<fourth<<endl;
    cout<<"not equal? "<<!isequal<<endl; //use of negation operator

}