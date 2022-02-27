#include <bits/stdc++.h>
using namespace std;
struct DiaChi{
	char tenDuong[30];
	char soNha[30];
};
struct SinhVien{
	char maSV[30];
	char tenSV[30];
	int tuoi;
	float dtb;
	bool gioiTinh;
	DiaChi diaChiNha;
}cuong;
int main(){
	strcpy(cuong.maSV,"2020xxx");
	strcpy(cuong.tenSV, "Pham Van Cuong");
	cuong.gioiTinh= false;
	cout<<"Ma sv: "<<cuong.maSV<<endl;
	cout<<"Ten sv: "<<cuong.tenSV<<endl;
	cout<<"Gioi tinh: "<<(cuong.gioiTinh==true ? "Nu" : "Nam")<<endl;
	SinhVien a;
	strcpy(a.tenSV, "Diep Thi Linh");
	cout<<"Ten sv a: "<<a.tenSV<<endl;
	strcpy(cuong.diaChiNha.tenDuong, "Duong Tran Duy Hung");
	cout<<"Dia chi chi nha cua Cuong: "<<cuong.diaChiNha.tenDuong<<endl;
	
}

