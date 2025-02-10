

#include <stdio.h>

void main()
{
  
    int a, b, c;

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
