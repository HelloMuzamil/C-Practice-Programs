#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter your number"<<endl;
	cin>>a;
	
	 if (a%2==0  && a%3==0 )
   {
		
		cout<<"Your number is divisible by both 2 or 3";
	}
	 else if(a%2==0 )
	{
		cout<<"Divisible by 2";
		
	}
	else if (a%3==0)
	{
		cout<<" Divisible by 3";
	}
	else
	{
		
		cout<<"Your number is not divide by 2 and 3";
	}	
	return 0;	
}













