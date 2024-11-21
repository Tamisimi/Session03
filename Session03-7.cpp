#include <stdio.h>
int main(){
	int soNguyen, chuso1, chuso2, chuso3, chuso4, tong;
	printf("nhap vao so co bon chu so");
	scanf("%d",&soNguyen);
	if (soNguyen < 1000 || soNguyen > 9999 ) {
		printf ("so nhap vao khong hop yeu cau");
		return 1;
	}
	chuso1 = soNguyen / 1000;
	chuso2 = (soNguyen / 100) % 10;
	chuso3 = (soNguyen / 10) % 10;
	chuso4 = soNguyen % 10;
	printf("tong bon chu so trong so la: %d%d%d%d", chuso4, chuso3, chuso2, chuso1);
	return 0;
}
