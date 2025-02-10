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
    //printf("Hello World\nHello World");
    
    //int result = 0;
    //int a = 0;
    //int b = 0;
    
    //scanf("%d", &a);// &a 주소값
    //scanf("%d", &b);
    //result = a - b;
    //result = 10 - 5;
    
    //printf("%d", result);
    //return 0;
    /*
    char ch;
    scanf("%c", &ch);
    printf("%c", ch);
    
    float num;
    
    scanf("%f", &num);
    
    printf("결과\n");
    printf("%f", num);
    
    double dnum;
    
    scanf("%lf", &dnum);
    
    printf("결과\n");
    printf("%lf", dnum);
    */
    
    /*
    printf("%d\n", 123);
    printf("%7d\n", 123);
    printf("%07d\n", 123);
    printf("%f\n", 123.45678);
    printf("%10.2f\n", 123.45678);
    printf("%10.5f\n", 123.45678);
    printf("%s\n", "Hello World");
    printf("%7s\n", "Hello World");
    */
    /*
    printf("Hello! World\n");
    printf("Hello!\tWorld\n");
    printf("Hello!\rWorld\n");//앞덮어쓰기(?) //캐리지 리턴 열 첫번째로 커서가 돌아감 입력하면 덮어쓰기
    printf("Hello!\aWorld\n");//alert 소리남
    printf("Hello!\aWorld\n");
    printf("Hello\"!\"World\n");
    printf("\\\\\\Hello World\n");
    */
    /*
    int age = 0;
    float interestRate = 0.0;
    
    age = 30;
    interestRate = 7.5;
    
    printf("나이: %d\n", age);
    printf("이율: %f\n", interestRate);
    */
    /*
    char a, b, c;
    
    a = 'A';
    b = 'B';
    c = 'C';
    
    printf("%c, %c, %c", a, b, c);
    */
    
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