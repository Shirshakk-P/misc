#include<iostream>
#include<stdio.h>

using namespace std;

unsigned int fact(unsigned int n){
	if(n==0 || n==1){
		return 1;
	}
	return n*fact(n-1);
}

int main(){
	int n;
	cout<<"Enter the number (n):"<<endl;
	cin>>n;
	
	cout<<"Factorial of input number is:  "<<fact(n)<<endl;;
	return 0;
} 
