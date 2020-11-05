#include  <stdio.h>
#include  <math.h>

int  main(void)

{
    double  a, b, c, d, e; //d: 판별식

    printf("이차방정식 ax^2+bx+c=0\n");

    printf("a: ");
    scanf_s("%lf", &a);

    printf("b: ");
    scanf_s("%lf", &b);

    printf("c: ");
    scanf_s("%lf", &c);

    if (a == 0){

        printf("x = %f \n", -c / b);
    }

    else{

        d = b * b - 4.0 * a * c; //판별식

        if (d > 0){

            e = sqrt(d);
            printf("두 개의 근: %f, %f \n", (-b - e) / (2.0 * a), (-b + e) / (2.0 * a));
        }

        else{

            if (d == 0){

                printf("한 개의 근: %f \n", (-b) / (2.0 * a));

            }

            else{
                printf("근이 없음.\n");
            }
        }
    }
    return  0;
}
