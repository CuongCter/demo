#include <bits/stdc++.h>
using namespace std;
struct Book{
	char title[30];
	char author[30];
	int pages;
	float price;
};
int main(){
	Book a;
	cout<<"Nhap ten sach: "; fflush(stdin); gets(a.title);
	cout<<"Ten tac gia: "; fflush(stdin); gets(a.author);
	cout<<"So trang: "; cin>>a.pages;
	cout<<"Gia: "; cin>>a.price;
	cout<<left<<setw(15)<<"Ten sach"<<setw(15)<<"Tac gia"<<setw(20)<<"So trang"<<setw(15)<<"gia"<<endl;
	cout<<left<<setw(15)<<a.title<<setw(15)<<a.author<<setw(20)<<a.pages<<setw(15)<<a.price<<endl;
	
}

