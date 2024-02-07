#include<iostream>
using namespace std;
int main (){
	int age;
	cout<<"Enter your age";
	cin>>age;
	if(age==16){
		cout<<"You have done fsc";
		
	}
	else if (age<=18){
		cout<<"You are a teenager";
	}
	else{
		cout<<"You are not a teenager";
	}
}
