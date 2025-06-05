 #include <stdio.h>

int main(){

	int DD;
	printf("Enter date: ");
	scanf("%02d", &DD);

	int MM;
	printf("Enter month: ");
	scanf("%02d", &MM);

	int YY;
	printf("Enter year: ");
	scanf("%04d", &YY);

	int NextDate;
	NextDate = DD + 1;

	int NextMonth;
	NextMonth = MM + 1;

	int NextYear;
	NextYear = YY + 1;

	if(DD > 0){
		if(DD <= 31){
			if(MM > 0){
				if(MM < 13){
					if(YY > 0){
						if(DD + 1 <= 31 && MM <= 12){
							printf("The next day: %02d/%02d/%04d\n", NextDate, MM, YY);
							return 0;
						}else{
							if(DD + 1 > 31 && MM <= 12){
								printf("The next day: %02d/%02d/%04d\n", DD = 1, NextMonth, YY);
								return 0;
							}else{
								if(DD + 1 == 32 && MM == 12 && YY == 12){
									printf("The next day: %02d/%02d/%04d\n", DD == 1, MM == 1, YY + 1);
									return 0; 
								}else{
									if(MM == 4 || MM == 6 || MM == 9 || MM == 11){
										if(DD + 1 <= 30){
											printf("The next day: %02d/%02d/%04d\n", NextDate, MM, YY);
											return 0;
										}else{
											if(DD + 1 > 30){
												printf("The next day: %02d/%02d/%04d\n", DD = 1, NextMonth, YY);
												return 0;
											}
										}
									}else{
										if(MM == 2){
											if(DD + 1 <= 28){
												printf("The next day: %02d/%02d/%04d\n", NextDate, MM, YY);
												return 0;
											}else{
												if(DD + 1 > 28){
													printf("The next day: %02d/%02d/%04d\n", DD = 1, NextMonth, YY);
													return 0;
												}
											}
										}else{
											return 0;
										}
									}
								}
							}
						}
					}else{
						printf("Invalid year");
						return 0;
					}
				}else{
					printf("Invalid month");
					return 0;
				}
			}else{
				printf("Invalid month");
				return 0;
			}
		}else{
			printf("Invalid date");
			return 0;
		}
	}else{
		printf("Invalid date");
		return 0;
	}

	if(MM > 12){
		MM = 1;
		YY = YY + 1;
	}	
}