#include <stdio.h>

int main(){

	int t;
	printf("Nhap so tien: ");
	scanf("%d", & t);

	if(t % 10000 != 0 || t <= 0){
		printf("Nhap lai so tien can rut");
	}

	int to500 = t / 500000;
	t = t % 500000;
	printf("So to menh gia 500k: %d\n", to500);

	int to200 = t / 200000;
	t = t % 200000;
	printf("So to menh gia 200k: %d\n", to200);

	int to100 = t / 100000;
	t = t % 100000;
	printf("So to menh gia 100k: %d\n", to100);

	int to50 = t / 50000;
	t = t % 50000;
	printf("So to menh gia 50k: %d\n", to50);

	int to20 = t / 20000;
	t = t % 20000;
	printf("So to menh gia 20k: %d\n", to20);

	int to10 = t / 10000;
	t = t % 10000;
	printf("So to menh gia 10k: %d\n", to10);

	return 0;

}