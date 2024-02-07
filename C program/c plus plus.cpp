#include<iostream>
using namespace std;
int main()
{
	int number;
	cin>>number ;
	cout<<"Your number is";
	
	
	if(number>0){
			cout<<" POSITIVE";
	}
	

	else if (number==0){
		cout<<" 0";
	}
	
	else{
		cout<<" NEGATIVE";
	}
	
	return 0;
	
}
