#include<iostream>
using namespace std;
int main(){
	int i,n,count;
	cout<<"enter the value";
	cin>>n;
	for(i=2;i<=n;i=n+1){
		if(n%i==0){
			count=count+1;
			
		}
		if(count==1){
			cout<<"it is  a prime";
		}
		else{
			cout<<"it is not a prome";
		}
	}
	return 0;
}
