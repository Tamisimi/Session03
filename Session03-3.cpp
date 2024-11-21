#include <stdio.h>
int main () {
   float diemtoan, diemvan, diemanh, tong, tb;
   printf("moi nhap diem toan\n");
   scanf("%f",&diemtoan);
   getchar();
   printf("moi nhap diem van\n");
   scanf("%f",&diemvan);
   getchar(); 
   printf("moi nhap diem anh \n");
   scanf("%f",&diemanh);
   getchar(); 
   tong = diemtoan + diemvan + diemanh;
   tb = tong / 3;
   printf("tong diem ba mon la %.2f \n", tong);
   printf("diem tb ba mon la %.2f", tb); 
    
	return 0;
}
