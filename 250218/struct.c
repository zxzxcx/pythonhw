#include <stdio.h>

void main()
{
	struct student
	{
		char name[15];
		int age;
		char grade;
	};
	
	struct student s1;
	printf("Write your name : \n");
	scanf("%s", s1.name);
	printf("Write your age : \n");
	scanf("%d", &s1.age);
	
	getchar();
	printf("Write your grade : \n");
	scanf("%c", &s1.grade);
	
	printf("%s\n", s1.name);
	printf("%d\n", s1.age);
  	printf("%c\n", s1.grade);
}
