//삽입정렬
#include <stdio.h>

void main() {
	int arr1[5] = {8, 3, 5, 2, 7};
	
	printf("%d Step : ", 0);
	for (int i = 0; i < 5 ; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	for (int i = 1; i < 5; i++)
	{
		int temp_key = arr1[i];//키 밸류 지정
		int j = i - 1;//비교 시작 인덱스
		
		//키 밸류랑 앞배열 들을 비교 (앞 배열은 정렬 되어 있으므로 키 값 바로 전 값이 더 작으면 나머지는 당연히 더 작음)
		for (j ; j >= 0 && arr1[j] > temp_key ; j--) //키 밸류보다 크고 j>=0 이면  오른쪽으로 이동
		{	
			arr1[j + 1] = arr1[j];
		}
		arr1[j + 1] = temp_key;//j--를 하고 반복문을 종료 했으므로 마지막 j에 넣을려면 j + 1
		
		//각 단계후 출력
		printf("%d Step : ", i);
		for (int i = 0; i < 5 ; i++)
		{
			printf("%d", arr1[i]);
		}
		printf("\n");
	}
}
