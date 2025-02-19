#include <stdio.h>
#include <string.h>

void main()
{
    enum car
    {
        SEDAN = 1,
        SUV,
        TRUCK,
        VAN
    };

    enum car c;
    char car_str[20];

    printf("Write car type (SEDAN, SUV, TRUCK, VAN), (AVANTE, SANTAFE, POTER, DAMAS): \n");
    scanf("%s", car_str);

    // 문자열에 맞는 차종을 선택
    if (strcmp(car_str, "SEDAN") == 0 || strcmp(car_str, "AVANTE") == 0)
    {
        printf("SEDAN\n");
        c = SEDAN;
        printf("Enum value: %d\n", c);
    }
    else if (strcmp(car_str, "SUV") == 0 || strcmp(car_str, "SANTAFE") == 0)
    {
        printf("SUV\n");
        c = SUV;
        printf("Enum value: %d\n", c);
    }
    else if (strcmp(car_str, "TRUCK") == 0 || strcmp(car_str, "POTER") == 0)
    {
        printf("TRUCK\n");
        c = TRUCK;
        printf("Enum value: %d\n", c);
    }
    else if (strcmp(car_str, "VAN") == 0 || strcmp(car_str, "DAMAS") == 0)
    {
        printf("VAN\n");
        c = VAN;
        printf("Enum value: %d\n", c);
    }
    else
    {
        printf("Error.\n");
    }
}
