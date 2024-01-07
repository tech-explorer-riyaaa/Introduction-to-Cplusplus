# include <iostream>
using namespace std;
int main(){
    int i=1;
    /*while (i<10){
        cout<<i<<endl;
        i++;
    }
    while (i<10){
        cout<<i<<endl;
        if (i==4){
            break;
        }
        i++;
    }
    while (i<10){
        if (i==7){ // kisi cheez ko skip krna hai ; break loop ko break kr deta tha
            continue; // agr kisi itertaion k doran continue mil gya wo wapas upr chla jayega , uss continue k neeche ki cheezein execute nahi hogi
        }// baar baar i=7 hi reh jayega toh loop 1 to 6 hi print krega
        cout<<i<<endl;
       
        i++;
    }*/
    while (i<10){
        if (i==7){
            i++;
            continue;
        }
        cout<<i<<endl;
        i++;
    }
}