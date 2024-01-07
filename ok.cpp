# include <iostream>
using namespace std;
int main(){
    int n;
	cin>>n;
	int c;
	while (n>0){
		int b;
		b=n%10;
		c=(c*10)+b;
		n=n/10;
	}
	cout<<c;
}
    
