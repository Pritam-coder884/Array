#include<iostream>
using namespace std;
int arraymax(int arr[],int size){
	int max,i;
	max=INT_MIN;
	for(i=0;i<size;i++){
		if(arr[i]>max)
		max=arr[i];
	}
	return max;
}
int arraymin(int arr[],int size){
	int min,i;
	min=INT_MAX;
	for(i=0;i<size;i++){
		if(arr[i]<min)
		min=arr[i];
	}
	return min;
}
int main(){
	int a[50],i,n;
	cout<<"Enter array size: ";
	cin>>n;
	cout<<"Enter array elements:\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"The max element in the array is: "<<arraymax(a,n)<<endl;
	cout<<"The min element in the array is: "<<arraymin(a,n);
	return 0;
}
