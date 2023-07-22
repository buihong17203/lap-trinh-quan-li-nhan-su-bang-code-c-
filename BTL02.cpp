#include"iostream"
#include"conio.h"
#include"string.h"
#include"iomanip"
#include"string.h"

using namespace std;

 
struct nhanvien
{
	int Manv;
	string hoten,gioitinh,phongban,thidua;
	double ngaycong,luong,phucap,luongdclinh;
};
nhanvien nv[10];
//ham nhap thong tin nhan vien,.....
void nhap(nhanvien nv[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\n Nhan vien thu: "<<i+1<<""<<endl;
		cout<<"\n Ma nhan vien "<<i+1<<": ";cin>>nv[i].Manv;
		fflush(stdin); //xoa bo ho dem
		cout<<"\n Ho ten nhan vien: ";getline(std::cin,nv[i].hoten);
		cout<<"\n Gioi tinh Nam/Nu: ";getline(std::cin,nv[i].gioitinh);
		fflush(stdin);
		cout<<"\n Ngay cong: ";cin>>nv[i].ngaycong;
		cout<<"\n Phong ban: ";cin>>nv[i].phongban;
		cout<<"\n Luong: ";cin>>nv[i].luong;
		cout<<"\n Phu cap: ";cin>>nv[i].phucap;
		cout<<"\n thi dua: ";cin>>nv[i].thidua;
		nv[i].luongdclinh = (nv[i].luong + nv[i].phucap);
		cout<<"\n luong duoc linh: ";cin>>nv[i].luongdclinh;
	}
}
//xuat thong tin nhan vien ,...... 
void xuat(nhanvien nv[],int n)
{
	cout<<"\nManhanvien:";
	cout<<setw(20)<<"Hotennhanvien"<<setw(10)<<"Gioitinh";
	cout<<setw(10)<<"Ngaycong"<<setw(10)<<"Phongban";
	cout<<setw(10)<<"Luong"<<setw(10)<<"Phucap";
	cout<<setw(10)<<"Thidua"<<setw(10)<<"Luongdclinh";
	
	for(int i=0;i<n;i++)
	{
		cout<<""<<setw(10)<<nv[i].Manv<<setw(20)<<nv[i].hoten;
		cout<<""<<setw(10)<<nv[i].gioitinh<<setw(20)<<nv[i].ngaycong;
		cout<<""<<setw(10)<<nv[i].phongban<<setw(20)<<nv[i].ngaycong;
		cout<<""<<setw(10)<<nv[i].phucap<<setw(20)<<nv[i].thidua<<setw(10)<<nv[i].luongdclinh<<endl;
	}
}
//xay dung phuong thuc thi dua
void Thidua(nhanvien nv[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(nv[i].ngaycong>=26)
		{
			cout<<setw(10)<<nv[i].thidua<<"\n Ngay cong >= 26 loai xuat xac."<<endl;	
		}
		else if(nv[i].ngaycong>=23) 
		{
			cout<<setw(10)<<nv[i].thidua<<"\n Ngay cong >= 23 loai xuat tot."<<endl;
		}
		else (nv[i].ngaycong<23);  //có the co loi an//
		{
			cout<<setw(10)<<nv[i].thidua<<"\n Ngay cong >= 23 khong dat."<<endl;
		}
	} 
}
//phu cap thap nhat va cao nhat
void phucapMinMax (nhanvien nv[],int n)
{
	float Min = nv[0].phucap;
	float Max = nv[0].phucap;
	
		for(int i=0;i<n;i++)
		{
			if(nv[i].phucap<Min)
			{
				Min = nv[i].phucap;
			}
		}
		cout<<"\n phu cap thap nhat la: "<<Min<<endl;
		 
		for(int i=0;i<n;i++)
		{
			if(nv[i].phucap>Max)
			{
				Max = nv[i].phucap;
			}
		}
		cout<<"\n phu cap cao nhat la: "<<Max<<endl;
}

//luong cao nhat
void luongmax(nhanvien nv[],int n)
{
	float max = 0;
	for(int i=0;i<n;i++)
	{
		if(nv[i].luong>max)
		{
			max = nv[i].luong;
		}
	}
	cout<<"\n nhan vien co luong cao nhat: "<<max<<endl;
}

//xap xep danh sach nhan vien
void xapxep(nhanvien nv[],int n)
{
	nhanvien tg;
	for (int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(nv[i].phucap<nv[j].phucap)
			{
				tg = nv[i];
				nv[i] = nv[j];
				nv[j] = tg;	
			}		
		}
	}
	cout<<"\n sau khi xap xep la: ";
	for(int i=0;i<n;i++)
	{
		cout<<"\nMaNhanVien";
		cout<<setw(50)<<"HoTenNhanVien"<<setw(10)<<"\nGioiTinh";
		cout<<setw(50) <<"NgayCong"<<setw(50)<<"PhongBan";
		cout<<setw(50)<<"Luong"<<setw(50)<<"PhuCap";
		cout<<setw(50)<<"ThiDua"<<setw(10)<<"ThucLinh";
		cout<<""<<setw(10)<<nv[i].Manv<<setw(20)<<nv[i].hoten;
		cout<<""<<setw(10)<<nv[i].gioitinh<<setw(20)<<nv[i].ngaycong;
		cout<<""<<setw(10)<<nv[i].phongban<<setw(20)<<nv[i].luong;
		cout<<""<<setw(10)<<nv[i].phucap<<setw(20)<<nv[i].thidua<<setw(10)<<nv[i].luongdclinh<<endl;
	}
}

// luong nhan vien duoc linh 
void nv587tr(nhanvien nv[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(nv[i].luongdclinh>58788)
		{
			cout<<""<<setw(10)<<nv[i].Manv<<setw(20)<<nv[i].hoten;
			cout<<""<<setw(10)<<nv[i].gioitinh<<setw(20)<<nv[i].ngaycong;
			cout<<""<<setw(10)<<nv[i].phongban<<setw(20)<<nv[i].luong;
			cout<<""<<setw(10)<<nv[i].phucap<<setw(20)<<nv[i].thidua<<setw(10)<<nv[i].luongdclinh<<endl;	
		} 
	}
} 

//Tim kiem nhan vien
void search(nhanvien nv[],int n)
{
	int z;
	cout<<"\Nhap ma sinh vien can: ";cin>>z;
	for(int i=0;i<n;i++)
	{
		if(nv[i].Manv==z)
		{
			cout<<""<<setw(10)<<nv[i].Manv<<setw(20)<<nv[i].hoten;
			cout<<""<<setw(10)<<nv[i].gioitinh<<setw(20)<<nv[i].ngaycong;
			cout<<""<<setw(10)<<nv[i].phongban<<setw(20)<<nv[i].luong;
			cout<<""<<setw(10)<<nv[i].phucap<<setw(20)<<nv[i].thidua<<setw(10)<<nv[i].luongdclinh<<endl;	
		}
	}
}


int main()
{
	int option,n;
	cout<<"\n Nhap so luong nhan vien: ";
	cin>>n;
	while(n>0)
	{
		cout<<"=================CHUONG TRINH QUAN LY NHAN VIEN.=============\n";
		cout<<"====							MENU							\n"<<endl;
		cout<<"=============================================================\n";
		cout<<"====			1.Nhap thong tin nhan vien.						\n";
		cout<<"====			2.In ra danh sach nhan vien.					\n";
		cout<<"====			3.Xep loai nhan vien.							\n";
		cout<<"====			4.Danh sach phu cap Max , Min.					\n";
		cout<<"====			5.Nhan vien co luong Max.						\n";
		cout<<"====			6. Xap xep danh sach nhan vien.					\n";
		cout<<"====			7.Danh sach nhan vien co phu cap tren 10 trieu. \n";
		cout<<"====			8.Tim kiem nhan vien bang Ma Nhan Vien.			\n";
		cout<<"====			9.EXIT.											\n";
		cout<<"=============================================================\n";
		
		cout<<"\n Hay nhap tuy tron cua ban: ";
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"* Moi nhap thong tin nhan vien: \n";
				nhap(nv,n);
				cout<<"Bam phim bat ki de tiep tuc: ";
				system("pause");
				break;
			case 2:
				if(n>0)
				cout<<"Danh sach nhan vien la: \n";
				xuat(nv,n);
				cout<<"Bam phim bat ki de tiep tuc: ";
				system("pause");
				break;
			case 3:
				if(n>0)
				cout<<"Xep loai nhan vien: \n";
				Thidua(nv,n);
				cout<<"Bam phim bat ki de tiep tuc: ";
				system("pause");
				break;
			case 4:
				if(n>0)
				cout<<"Danh sach phu cap : \n";
				phucapMinMax(nv,n);
				cout<<"Bam phim bat ki de tiep tuc: ";
				system("pause");
				break;
			case 5:
				if(n>0)
				cout<<"Danh sach luong cao nhat: \n";
				luongmax(nv,n);
				cout<<"Bam phim bat ki de tiep tuc: ";
				system("pause");
				break;
			case 6:
				if(n>0)
				cout<<"xap xep nhan vien: \n";
				xapxep(nv,n);
				cout<<"Bam phim bat ki de tiep tuc: ";
				system("pause");
				break;
			case 7:
				if(n>0)
				cout<<"danh sach nhan vien co luong duoc linh tren 10tr \n";
				nv587tr(nv,n);
				cout<<"Bam phim bat ki de tiep tuc: ";
				system("pause");
				break;
			case 8:
				if(n>0)
				search(nv,n);
				cout<<"Bam phim bat ki de tiep tuc: ";
				system("pause");
				break;
/*			case 9:
				if(n>0)
				cout<<"* Moi nhap thong tin nhan vien: \n";
				nhap(nv,n);
				cout<<"Bam phim bat ki de tiep tuc: ";
				system("pause");
				break;
*/
			default:
			return 0;
		}
	}
}
