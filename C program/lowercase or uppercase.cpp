#include<iostream>
using namespace std;
int main(){
	
	char a;
	int b;
	cout<<"enter your letter";
	cin>>a;
	if(a>='A' && a<='Z')
	{
		cout <<"it is a uppercase letter"<<endl;
	}
	else if(a>='a' && a<='z')
	{
		cout<<"it is a lowercase letter"<<endl;
	}
	else if(b>=0  && b<=10)
	{
		cout<<"it is  digit"<<endl;
		
	}
	else
	{
		cout<<"it is a special character"<<endl;
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
