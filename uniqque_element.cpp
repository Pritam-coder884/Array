#include<iostream>
using namespace std;
int main(){
	int a[50],i,j,n,u[50];
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements\n";
	for(i=0;i<n;i++){
		cin>>a[i];
		u[i]=1;
	}
	cout<<"Unique elements are\n";
	for(i=0;i<n;i++){
		if(u[i]==0)
		continue;
		for(j=i+1;j<n;j++){
			if(a[i]==a[j])
			u[i]=u[j]=0;
		}
		if(u[i]==1)
		cout<<a[i]<<"\t";
	}
	return 0;
}
