# include <iostream>
using namespace std;
int main(){
    
   //  int marks = 75;

   //  if(marks>=50){     
   //     if(marks>=80) cout<<"Grade: A";
   //     else{ 
   //        if(marks>=60) cout<<"Grade: B";
   //        else cout<<"Grade: C";   
   //     }
   //   }
   //   else cout<<"Grade: F";

   int n;
	cin>>n;

	
	for (int i=1;i<=n;i++){
		int a=i;
		int b=n-i;
		for (int j=1;j<=b;j++){
			cout<<' ';
		}
		for (int k=0;k<i;k++){
			cout<<a;
			a++;
		}
		cout<<endl;
	}
}
