
#include <stdio.h>

void main()
{
    int n_Value; //1부터 N까지 출력하기 N
    printf("숫자 N을 정수로 적어주세요 : ");
    scanf("%d",&n_Value);
    int i = 0;
    while(i < n_Value)
    {
        printf("%d ", i + 1);
        i++;
    }

}
