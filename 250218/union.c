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
	printf("int value : %d addres : %p\n", u.intVal, &u.intVal);
	printf("Write floatVal : \n");
	scanf("%f", &u.floatVal);
	printf("int value : %d addres : %p\n", u.intVal, &u.intVal);
	printf("float value : %f addres : %p\n", u.floatVal, &u.floatVal);
	getchar();
	printf("Write charVal : \n");
	scanf("%c", &u.charVal);
	printf("int value : %d addres : %p\n", u.intVal, &u.intVal);
	printf("float value : %f addres : %p\n", u.floatVal, &u.floatVal);
	printf("char value : %c addres : %p\n", u.charVal, &u.charVal);

	
}
