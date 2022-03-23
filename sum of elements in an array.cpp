#include<iostream>
using namespace std;
int main(){
	int n,a[50],i,sum=0;
	cout<<"size is: ";
	cin>>n;
	cout<<"enter marks:\t";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++){
		sum=a[i]+sum;
	}
	cout<<sum<<endl;
	cout<<sum/n;
	return 0;
}
