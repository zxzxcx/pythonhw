//선택정렬
#include <stdio.h>

void main() {
	int arr1[5] = {64, 25, 12, 22, 11};
	
	for (int j = 0 ; j < 5; j++)
	{
		int temp_Min = 99999;
		int temp_Index;
		for (int i = j ; i < 5; i++)
		{
			if (arr1[i] < temp_Min)
			{
				temp_Min = arr1[i];
				temp_Index = i;
			}			
		}
		
		arr1[temp_Index]	= arr1[j];
		arr1[j] = temp_Min;
			
		printf("%d step : ", j + 1);
		
		for (int i = 0; i < 5; i++)
		{
			printf("%d ", arr1[i]);
		}
		printf("\n");
	}

}


