#include <stdio.h>

void main()
{
	enum car
	{
		
		SEDAN = 1,
		SUV,
		TRUCK,
		VAN
	};
	
	enum car c;
	int car_int;
	printf("1.SEDAN 2.SUV 3.TRUCK 4.VAN \n");
	printf("Write car_type in integer : \n");
	scanf("%d", &car_int);
	if (car_int == 1 )
	{
		printf("SEDAN\n");
		c = SEDAN;
		printf("%d\n", SEDAN);
	} else if (car_int == 2) {
		printf("SUV\n");
		c = SUV;
	} else if (car_int == 3) {
		printf("TRUCK\n");
		c = TRUCK;
	} else if (car_int == 4) {
		printf("VAN\n");
		c = VAN;
	}	
}
