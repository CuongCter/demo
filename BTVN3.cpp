#include <bits/stdc++.h>
using namespace std;
void nhap(int *a, int &n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void xuat(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];
	}
}
void SapXep(int *a, int n){
	for(int i=0;i<n;i++){
		for(int j = i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				// swap(a[i],a[j]);
			}
		}
	}
}
void deleteAll(int *a, int &n, int pos){
	for(int i=pos; i<n ;i++){
		a[i] = a[i+1];
	}
	n--;
	a = (int *)realloc(a,n*sizeof(int));
}
void Change(int *a, int &n){
	int dem = 0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			a[i] = abs(a[i]);
			dem++;
		}
	}
	SapXep(a,n);
	xuat(a,n);
	cout<<endl;
	cout<<dem<<endl;
	deleteAll(a,n,dem);
	xuat(a,n);
	cout<<endl;
}
void UCLN(int *a, int n){
	int sumC = 0 , sumL =0;
	for(int i=0;i<n;i++){
		if(i%2==0){
			sumC += a[i];
		}
		else{
			sumL += a[i];
		}
	}
	cout<<sumC<<endl;
	cout<<sumL<<endl;
	int s = sumC + sumL;
	while(sumC != sumL){
		if(sumC > sumL){
			sumC -= sumL;
		}
		else{
			sumL -= sumC;
		}
	}
	cout<<sumC<<endl;
	if(s-19*sumC > 0){
		cout<<"False"<<endl;
	}
	if(s-19*sumC < 0){
		cout<<"True"<<endl;
	}
}
int main(){
	int n , *a;
	cin>>n;
	a = new int[n];
	nhap(a,n);
	SapXep(a,n);
	xuat(a,n);
	cout<<endl;
	Change(a,n);
	UCLN(a,n);
}

