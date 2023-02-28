#include <stdio.h>
#include<conio.h>

struct ngay
{
	int ngay;
	int thang;
	int nam;
	
};
typedef struct ngay NGAY;
struct hopsua
{
	char nhanhieu[50];
	float trongluong;
	NGAY hansudung;
};
typedef struct hopsua HOPSUA;

void Nhapngay(NGAY &n)
{
 printf("nhap ngay");
 scanf("%d",&n.ngay);
 printf("nhap thang");
 scanf("%d",&n.thang);
 printf("nhap nam");
 scanf("%d",&n.nam);
  
  
}
void Nhaphopsua(HOPSUA &h)
{
 printf("nhap nhan hieu ");
 scanf("%c",&h.nhanhieu);
  printf("nhap trong luong ");
 scanf("%f",&h.trongluong);
  printf("nhap hansudung ");
 scanf("%ngay",&h.hansudung);
}
 void Xuathopsua(HOPSUA h)
{
 printf("nhap nhan hieu %s\n",h.nhanhieu);
  printf("nhap trong luong %d\n",h.trongluong);
  printf("nhap hansudung %NGAY\n",h.hansudung);
}
int main()
{
	ngay (t1);
	hopsua (t2);
	Nhapngay(t1);
	Nhaphopsua(t2);
	Xuathopsua(t2);
	return 0;
}