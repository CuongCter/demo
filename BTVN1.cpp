#include <bits/stdc++.h>
using namespace std;
void nhap(int *a, int &n){
	for(int i=0;i<n;i++){
		cin>>a[i];
		//cin>>*(a+i);
	}
}
void xuat(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	//	cout<<" "<<*(a+i);
	}
}
void tim(int *a, int n){
	int dem=0, sum = 0;
	for(int i=0;i<n;i++){
		if(a[i]<0 && abs(a[i])<8){
			cout<<a[i]<<" ";
			dem++;
			sum += a[i];
		}
	}
	if(dem>0){
		cout<<"tbc : "<<(float)sum/dem<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
}
void maxArr(int *a, int n){
	int max =a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	} 
	int min = a[0];
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min = a[i];
		}
	}
	int max2=min;
	for(int i=0;i<n;i++){
		if(max2<a[i] && a[i]<max){
			max2 = a[i];
		}
	}
	cout<<max2<<endl;
	
}
void insert(int *&a, int &n, int pos, int val){
	n++;
	a = (int *)realloc(a,n*sizeof(int));
	for(int i=n;i>=pos;i--){
		a[i]=a[i-1];
	}
	*(a+pos) = val;
}
void insertNum(int *a, int &n, int x){
	for(int i=0;i<n;i++){
		if(a[i]<x){
			insert(a,n,i+1,x);
			i++;
		}
	}
	xuat(a,n);
}
int main(){
	int n, *a;
	cin>>n;
	//a = new int [n];
	a = (int *)malloc(n*sizeof(int));
	nhap(a,n);
	xuat(a,n);
	cout<<endl;
	tim(a,n);
	maxArr(a,n);
	int x;
	cin>>x;
	insertNum(a,n,x);
}

