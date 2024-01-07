# include <iostream>
using namespace std;

int sum(int a[], int size, int si = 0){  // default value of argument
    // array ka size toh pass krna hi pdta hai
    int ans = 0;
    for (int i = si; i < size; i++){
        ans += a[i];
    }
    return ans;
}

int sum2(int a, int b = 0, int c = 0, int d = 0){
    // effectively tumne chaar func bana diye yaha p
    return a + b + c + d;
}

int main(){
    int a[20];

    // input code for a

    cout << sum(a, 20) << endl;
    // 3 arg bhi theek hai; 2 bhi  theek hai
}