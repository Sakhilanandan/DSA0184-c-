#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"enter the number ";
	cin>>x;
	string y=(x%3 ==0 ? "are divisible by 3":"not divisible");
	cout<<y;
	return 0;
	
}
