
#include <stdio.h>

void main()
{
    /*
    문제 1 사용자로부터 한 줄로 정수 세 개를 입력 받아 아래와 같은 연산을 수행하는 프로그램을
    작성하시오. (0으로 나누는 경우에 대한 예외처리 필수)
    결과 = (a +b) x c - (a - b) / c
    */
    
    int a, b, c;
    float result;
    
    printf("숫자를 입력하세요(띄어쓰기로 구분) : ");
    scanf("%d %d %d", &a, &b, &c);
    //scanf("%d", &b);
    //scanf("%d", &c);
    if (c == 0)
    {
        printf("오류발생 : 0으로 나눌 수 없습니다 세 번째 정수는 0이 아닌 정수로 넣어주세요\n");
    } else {  
        result = (a + b) * c - (a - b) / (float)c;     
        printf("result : (%d + %d) * %d - (%d - %d) / %d = %f\n", a, b, c, a, b, c, result);
    }

    
}
