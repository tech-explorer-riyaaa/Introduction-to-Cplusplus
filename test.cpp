# include <iostream>
using namespace std;
# include <climits>
int main(){
    /*int p = 100;
    if(p > 20) {
        if(p < 20) {
            cout<<"coding";
        }
    } else {
        cout<<"ninjas";
    }
    int x = 10;
while(x >= 0) {
    x = x - 1;
    cout<<x;
    x--;
}
 int n;
  cin>>n;
  int i=1;
  while (i<=n){
    int a=1;
    while (a<=n-i){
      cout<<" ";
      a++;
    }
    int b=i;
    while (b>0){
      cout<<b;
      b--;
    }
    int c=2;
    while (c<=i){
      cout<<c;
      c++;
    }
    cout<<endl;
    i++;
  }
   int n;
  cin >> n;
  int l = n;
  for (int i = 1; i <= n; i++) {
    for (int j = n; j >= i; j--) {
      cout << n - j + 1;
    }
    if (i > 1) {
      for (int p = 1; p <= 2 * (i - 1); p++) {
        cout << "*";
      }
    }
    for (int j = l; j >= 1; j--) {
      cout << j;
    }
    l = l - 1;
    cout << endl;
  }*/
  int n;
  cin >> n;
  int max = INT_MIN, secondMax = INT_MIN;
  int num;
  int count = 1;

  while (count <= n) {
    cin >> num;
    if (num > max) {
      secondMax = max;
      max = num;
    } else if (num > secondMax && num != max) {
      secondMax = num;
    }
    count++;
  }
  cout << secondMax << endl;
}
