#include <stdio.h>

void main()
{
	union student
	{
		int intVal;
		float floatVal;
		char charVal;
	};
	
	union student u;
	printf("Write intval : \n");
	scanf("%d", &u.intVal);
	printf("value : %d addres : %p\n", u.intVal, &u.intVal);
	printf("Write floatVal : \n");
	scanf("%f", &u.floatVal);
	printf("value : %f addres : %p\n", u.floatVal, &u.floatVal);
	getchar();
	printf("Write charVal : \n");
	scanf("%c", &u.charVal);
	printf("value : %c addres : %p\n", u.charVal, &u.charVal);
	
}
