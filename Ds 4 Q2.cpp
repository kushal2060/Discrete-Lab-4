// Write a program to calculate bn mod  m.
#include<iostream>
#include<cmath>
using namespace std;
 int main(){
 	int b,n,m,power,rem;
 	cout<<"Enter b: ";
 	cin>>b;
 	cout<<"Enter n: ";
 	cin>>n;
 	cout<<"Enter m: ";
 	cin>>m;
 	power=pow(b,n);
 	rem=power%m;
 	cout<<"b^n mod m= "<<rem;
 	return 0;
 }