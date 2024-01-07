# include <iostream>
using namespace std;
int main(){
    int basic , allow;
    float hra, da, pf, total_salary;
    char grade;
    cin>>basic>>grade;
    hra=basic*(20.0/100);
    da=basic*(50.0/100);
    pf=basic*(11.0/100);
    if (grade=='A'){
        allow=1700;
    } else if(grade=='B'){
        allow=1500;
    } else{
        allow=1300;
    }

    total_salary=basic+hra+da+allow-pf;
    int k=total_salary;
    float m=total_salary-k;
    int a=k%10;
    if (m>=0 and m<0.5){
        cout<<k;
    } else if (m==0.5){
        if (a%2==0){
            cout<<k;
        }else{
            cout<<k+1;
        }

    } else {
        cout<<k+1;
    }
        
    
    }
