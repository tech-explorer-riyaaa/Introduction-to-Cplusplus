#include<iostream>
# include <cmath> // header file for using "round()" function
using namespace std;

int main() {
	int basic;
	cin>>basic;
	char grade;
	cin>>grade;
	float hra;
	hra=(20.0/100)*basic;
	float da;
	da=(50.0/100)*basic;
	float allow;
	if (grade=='A'){
		allow=1700;
	} else if (grade='B'){
		allow=1500;
	} else {
		allow=1300;
	}
	float pf;
	pf=(11.0/100)*basic;
	int total_salary = round (basic +  hra + da + allow - pf);
    
	cout<<total_salary;
	// Write your code here
	
}
