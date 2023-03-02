//Write a program to calculate a^n
#include<iostream>
#include<cmath>
using namespace std;
 int main(){
 	double a,n,power;
 	cout<<"Enter a: ";
 	cin>>a;
 	cout<<"Enter n: ";
 	cin>>n;
 	power=pow(a,n);
 	cout<<"a^n=:"<<power;
 	return 0;
 }