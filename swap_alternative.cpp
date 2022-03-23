#include<iostream>
using namespace std;
void printarray(int arr[],int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}
void alter(int arr[],int n){
	int start=0;
	int end=n-1;
	while(start<=end){
		swap(arr[start],arr[start+1]);
		start=start+2;
	}
}
int main(){
	int arr[6]={1,2,3,4,5,6};
	alter(arr,6);
	printarray(arr,6);
	return 0;
}
