#include<iostream>
#include<stdio.h>

const double pi = 3.1416;
using namespace std;

float Area(float R){
	return (pi*R*R);
	}

int main(){
	float R, area;
	cout<<"Enter Radius R:"<<endl;
	cin>>R; 
 	
 	area=Area(R);
 	cout<<"Area of the given Circle is:"<<area<<"\t sq. units";
 	return 0;
 }
 
