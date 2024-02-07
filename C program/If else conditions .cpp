#include<iostream>
using namespace std;
int main(){
	
	int age;
	char matine;
	cout<<"Enter Your Age";
	cin>>age;
	cout<<"Is it a matinee showing (Yes/Not) ";
	cin>>matine;
	
	if(matine){
		cout<<"hello welcome";
		
	}else if (matine){
		cout<<"bye bye";
	}
	
	if(age>=0  && age<=12)
	{
		
		cout<<"Please pay 5$";
	}
	else if (age>=13 && age<=64)
	{
		cout<<"Please pay 10$";
	}
	else if (age>=65)
	{
		cout<<"Please Pay 8$";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
