#include<iostream>
using namespace std;
int first(int arr[],int n,int key){
	int s=0,e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]<key)
		s=mid+1;
		else
		e=mid-1;
		mid=s+(e-s)/2;
	}
	return ans;
}
int last(int arr[],int n,int key){
	int s=0,e=n-1;
	int mid=s+(e-s)/2;
	int ans=-1;
	while(s<=e){
		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(arr[mid]<key)
		s=mid+1;
		else
		e=mid-1;
		mid=s+(e-s)/2;
	}
	return ans;
}
int main(){
	int key,f,l,num;
	int a[11]={1,2,3,3,3,3,3,3,3,7,9};
	cout<<"enter the element: ";
	cin>>key;
	f=first(a,11,key);
	l=last(a,11,key);
	cout<<"first occurance of the element at index: "<<f<<endl;
	cout<<"last occurance of the element at index: "<<l<<endl;
	num=l-f+1;
	cout<<"number of occurance of the element: "<<num;
	return 0;
}
