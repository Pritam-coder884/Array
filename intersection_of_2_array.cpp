#include<iostream>
using namespace std;
int main(){
	int a[50],b[50],n1,n2,i,j;
	cout<<"enter 1st array size: ";
	cin>>n1;
	cout<<"Enter 1st array elements: ";
	for(i=0;i<n1;i++)
	cin>>a[i];
	cout<<"enter 2nd array size: ";
	cin>>n2;
	cout<<"Enter 2nd array elements: ";
	for(j=0;j<n2;j++)
	cin>>b[j];
	cout<<"\n\nThe intersection element of 2 array is: ";
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			if(a[i]==b[j])
			cout<<a[i]<<"\t";
		}
	}
	cout<<endl;
	return 0;
}
