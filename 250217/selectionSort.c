//선택정렬 포인터
#include <stdio.h>

void main() {
	int arr1[5] = {64, 25, 12, 22, 11};
	int * p;
	p = arr1;
	
	for (int j = 0 ; j < 5; j++)
	{
		int temp_Min = 99999;
		int temp_Index;
		for (int i = j ; i < 5; i++)
		{
			if (*(p + i) < temp_Min)
			{
				temp_Min = *(p + i);
				temp_Index = i;
			}			
		}
		
		*(p + temp_Index)	= *(p + j);
		*(p + j) = temp_Min;
			
		printf("%d step : ", j + 1);
		
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", *(p + i));
		}
		printf("\n");
	}

}
