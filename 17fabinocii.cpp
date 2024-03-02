#include<iostream>
using namespace std;
int main(){
	int i,z,a,b,c;
	a=0;
	b=1;
	c=a+b;
	cout<<"enter the num";
	cin>>z;
	cout<<a<<b;
	for(i=3;i<=z;i++){
		cout<<c;
		a=b;
		b=c;
		c=a+b;	
	}
	return 0;
}
