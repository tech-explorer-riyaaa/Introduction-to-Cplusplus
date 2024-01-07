#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	int i=1;
	while (i<=n){
        int j = 1;
        int a=i;
		while (j<=i){
			cout<<a;
			j=j+1;
			a=a+1;
		}	
		cout<<endl;
		i=i+1;
    }
    int f;
	cin>>f;
	n=f;
	int j=1;
	i=j;
	while (i<=n){
        int y=1;
        while (y<=n-i){
            cout<<" ";
            y=y+1;
        }
        int j = 1;
        int a=i;
		while (j<=i){
			cout<<a;
			j=j+1;
			a=a+1;
		}	
		cout<<endl;
		i=i+1;
    }

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}
