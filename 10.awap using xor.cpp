#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the a and b";
	cin>>a>>b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<a<<endl<<b;
	return 0;
}
