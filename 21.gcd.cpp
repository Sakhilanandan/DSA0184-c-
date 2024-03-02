#include<iostream>
#include<numeric>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the two num";
	cin>>a>>b;
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		if(a<b){
			b=b-a;
		}
		cout<<"gcd of a and b="<<a<<endl;
	}
	
	
}
