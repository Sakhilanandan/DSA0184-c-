#include<iostream>
using namespace std;
int main(){
	int number,i,factorial=1;
	cout<<"enter the number"<<endl;
	cin>>number;
	for(i=number;i>=2;i--){
		factorial=factorial*i;
		}
		cout<<factorial;
	
}
#include<iostream>
using namespace std;
int factorial(int n){
	if(n<=1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}
int main(){
	int number,x;
	cout<<"enter the number";
	cin>>number;
	x=factorial(number);
	cout<<x;
}

