
#include <stdio.h>

void main()
{
    int m, n;
    while (1)
    {
        printf("정수 M과 정수 N을 입력해주세요. (단, N이 더 커야한다.)\n --------> ");
        scanf("%d %d", &m, &n);
        if (m > n) //예외
        {
            printf("N에 M보다 더 큰 정수를 입력해주세요.\n");
            continue;
        } else {
            break;
        }
    }
    for (int i = m; i < n ; i ++) {
        int num = i;//자리수에 7이 포함되어있는지 계산하기위한 변수
        int seven_In = 0;// 0이면 7이 포함되지 않은수, 1이면 7이 포함된 수
        //각 자리수에 7이 있는지 검사
        while (1)
        {   
            int one_number = num % 10;
            num /= 10;
            
            if (one_number == 7)
            {
                seven_In = 1;
                break;
            }
            if (num / 10 == 0){
                break;
            }
        }
        if (i % 7 == 0 || seven_In == 1) 
        {
            continue;
        } else if (i % 5 == 0) {
            printf("%d ", i);
            break;
        } else {
            printf("%d ", i);    
        }
    }

}
