/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//Hello World
/*
Hello World
*/
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
    } else
    {
        
        result = (a + b) * c - (a - b) / c;
        
        printf("result : (%d +%d) * %d - (%d - %d) / %d = %f\n", a, b, c, a, b, c, result);
    }
    /*
    사용자로부터 세 자리 정수형 숫자를 입력받아 각 자리의 합을 구하는 프로그램을
    작성하시오
    */
    
    int tnum;
    printf("세 자리 정수형 숫자를 입력하시오 : ");
    scanf("%d", &tnum);
        
    a = tnum / 100;
        
    b = tnum % 100 / 10;
        
    c = tnum % 10;
        
    int result2 = a + b + c;
    printf("자리 수의 합 : %d", result2);
    
    
    
}
