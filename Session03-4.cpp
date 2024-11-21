#include <stdio.h>
int main () {
  float diemtoan, diemvan, diemanh, tong, tb;
	
	printf("nhap vao diem toan ");
	scanf("%f",&diemtoan);
	getchar();
	printf("nhap vao diem van ");
	scanf("%f",&diemvan);
	getchar();
	printf("nhap vao diem anh ");
	scanf("%f",&diemanh);
	getchar();
	
	tong = diemtoan + diemvan + diemanh;
	tb = tong / 3;
	
	printf("tong diem cua ban la %.2f \n",tong);
	printf("diem tb cua ban la %.2f" ,tb); 
	return 0;
}
