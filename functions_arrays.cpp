#include <iostream>
using namespace std;

//int sum(int a[], int size){ // ye bhi chal jayega pr fraud hai
    // array k function mei size bhi pass krna pdta hai
    // neeche wala array upar as a pointer aata hai having 8 bytes 
int sum(int*a, int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=a[i];
    }
    cout<<sizeof(a)<<endl;
    return ans;

}

void fun(int a[]) {
    cout << a[0] << " ";
}

void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}

int main(){
    int a[10];
    cout<<sizeof(a)<<endl;
    cout<<sum(a, 10)<<endl;
    cout << sum(a +3, 7) << endl;


    int aa[] = {1, 2, 3, 4};
    fun(aa + 1);
    cout << aa[0]<<endl;

     int ba = 10;
    square(&ba);
    cout << ba << endl;
}