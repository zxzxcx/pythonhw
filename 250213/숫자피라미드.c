
#include <stdio.h>

void main()
{
    int n_Height; //피라미드 높이 설정
    printf("숫자 피라미드의 높이를 정수로 적어주세요 : ");
    scanf("%d",&n_Height);
    
    for ( int i = 0; i < n_Height + 1; i ++)
    {
        //j만큼 공백을 발생하는 for문
        for (int j = n_Height - i; j > 0; j --)
        {
            printf(" ");
        }
        //i번 숫자 출력 for문문
        for (int j = 0; j < i; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }
}
