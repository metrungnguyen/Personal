#include <stdio.h>

int main(){

	float n;
	printf("Enter the amount: ");
	scanf("%f", &n);

	float t;

	if(n <= 5000000){
		t = (n*5) / 100;
		printf("Total amount require: %f", t);
	}else{
		if(n > 5000000 && n <= 10000000){
			t = (n*10) / 100;
			printf("Total amount require: %f", t);
		}else{
			if(n > 10000000 && n <= 18000000){
				t = (n*15) / 100;
				printf("Total amount require: %f", t);
			}else{
				if(n > 18000000 && n <= 32000000){
					t = (n*20) / 100;
					printf("Total amount require: %f", t);
				}else{
					if(n > 32000000 && n <= 52000000){
						t = (n*25) / 100;
						printf("Total amount require: %f", t);
					}else{
						if(n > 52000000 && n <= 80000000){
							t = (n*30) / 100;
							printf("Total amount require: %f", t);
						}else{
							t = (n*35) / 100;
							printf("Total amount require: %f", t);
						}
					}
				}
			}
		}
	}
}