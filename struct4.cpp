#include <bits/stdc++.h>
using namespace std;
void nhap_n(int &n){
	do{
		cout<<"Nhap so sinh vien: ";
		cin>>n;
	}while(n<1);
}
struct SinhVien{
	char ten[30];
	char que[30];
	int tuoi;
	float dtb;
};
void Nhap(SinhVien dsSV[], int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap sinh vien thu: "<<i<<endl;
		cout<<"Nhap ten: "; fflush(stdin); gets(dsSV[i].ten);
		cout<<"Que quan: "; fflush(stdin); gets(dsSV[i].que);
		cout<<"Nhap tuoi: "; cin>>dsSV[i].tuoi;
		cout<<"Nhap diem tb: "; cin>>dsSV[i].dtb;
	}
}
void Xuat(SinhVien dsSV[], int n){
	for(int i=0;i<n;i++){
		cout<<setw(15)<<dsSV[i].ten<<setw(15)<<dsSV[i].que<<setw(15)<<dsSV[i].tuoi<<setw(15)<<dsSV[i].dtb<<endl;
	}
}
void SapXep(SinhVien dsSV[], int n){
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(dsSV[i].tuoi<dsSV[j].tuoi){
				swap(dsSV[i], dsSV[j]);
			}
		}
	}
}
void Find(SinhVien dsSV[], int n){
	float max = dsSV[0].dtb;
	for(int i=0;i<n;i++){
		if(max < dsSV[i].dtb){
			max = dsSV[i].dtb;
		}
	}
	for(int i=0;i<n;i++){
		if(max==dsSV[i].dtb){
			cout<<dsSV[i].ten<<"-"<<dsSV[i].que<<"-"<<dsSV[i].tuoi<<"-"<<dsSV[i].dtb<<endl;
		}
	}
}
int main(){
	int n;
	nhap_n(n);
	SinhVien dsSV[n];
	Nhap(dsSV,n);
	Xuat(dsSV,n);
	SapXep(dsSV,n);
	cout<<"Mang sau khi sap xep: "<<endl;
	Xuat(dsSV,n);
	cout<<"Sinh vien co diem max: "<<endl;
	Find(dsSV,n);
}

