#include<iostream>
using namespace std;
int main(){
	int a[50],i,j,n,c=0;
		cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Duplicate elements are\n";
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				cout<<a[i]<<"\t";
				c++;
			}
		}
	}
	cout<<"\nThe number of duplicate elements is: "<<c;
	return 0;
}
