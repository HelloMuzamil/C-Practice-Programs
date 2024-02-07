#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"enter your age"<<endl;
	cin>>age;
	
	if(age<=12){
		cout<<"You are a child";
	}else if (age>=13 && age<=19){
		cout<<"You are a teenager";
	}else if (age>=20 && age<=59){
		cout <<"You are a adult";
	}else {
		cout <<"You are a senior";
	}
	
	
	
	
	
	
	
	
	
	


	return 0;
	
}
