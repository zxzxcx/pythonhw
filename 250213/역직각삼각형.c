
#include <stdio.h>

void main()
{
    int n_Height; //피라미드 높이 설정
    printf("역직각삼각형 높이를 정수로 적어주세요 : ");
    scanf("%d",&n_Height);
    
    for ( int i = 0; i < n_Height + 1; i ++)
    {
        for (int j = n_Height - i; j > 0; j --)
        {
            printf("*");
        }
        printf("\n");
    }
}
