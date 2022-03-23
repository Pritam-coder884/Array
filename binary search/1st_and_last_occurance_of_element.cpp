#include<iostream>
using namespace std;
int first(int arr[],int n,int key){
	int s,e,m;
	s=0;e=n-1;
	m=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[m]==key){
			ans=m;
			e=m-1;
		}
		else if(arr[m]<key)
		s=m+1;
		else
		e=m-1;
		m=s+(e-s)/2;
	}
	return ans;
}
int last(int arr[],int n,int key){
	int s,e,m;
	s=0;e=n-1;
	m=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[m]==key){
			ans=m;
			s=m+1;
		}
		else if(arr[m]<key)
		s=m+1;
		else
		e=m-1;
		m=s+(e-s)/2;
	}
	return ans;
}
int main(){
	int a[50],i,n,key;
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter element you want to find the 1st and last occurance: ";
	cin>>key;
	cout<<"first element at index "<<first(a,n,key)<<endl;
	cout<<"last element at index "<<last(a,n,key)<<endl;
	return 0;
}
