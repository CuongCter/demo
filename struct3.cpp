#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
	int maSV;
	char ten[30];
};
void Nhap(SinhVien dsSV[], int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap sinh vien thu: "<<i<<endl;
		cout<<"Nhap ma SV: "; cin>>dsSV[i].maSV;
		cin.ignore();
		cout<<"Nhap ten: "; fflush(stdin); gets(dsSV[i].ten);
	}
}
void Xuat(SinhVien dsSV[], int n){
	for(int i=0;i<n;i++){
		cout<<dsSV[i].maSV<<"\t"<<dsSV[i].ten<<endl;
	}
}
int main(){
	int n=3;
	SinhVien dsSV[n];
	Nhap(dsSV,n);
	Xuat(dsSV,n);
}

