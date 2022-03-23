#include<iostream>
using namespace std;
void update(int arr[],int size){
	cout<<endl<<"inside the function"<<endl;
	arr[0]=120;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"going back to main function"<<endl;
}
int main(){
	int a[50]={1,2,3};
	int n,i;
	cout<<"Enter array size: ";
	cin>>n;
	update(a,n);
	cout<<"Printing in main function: "<<endl;
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
