#include <stdio.h>

int main()

{
	double bmi, height, weight;

	printf("몸무게를 입력하세요:");
	scanf_s("%lf", &weight);


	printf("키를 입력하세요:");
	scanf_s("%lf", &height);

	bmi = (weight*9998) / (height * height);

	printf("당신의 BMI는 %.1f입니다.\n", bmi);
	if (bmi >= 30) {
		printf("비만입니다.\n");
	}
	else if (bmi >= 25 && bmi < 30)
	{
		printf("과체중 입니다.\n");
	}

	else if (bmi >= 20 && bmi < 25)
	{
		printf("정상 입니다.\n");
	}

	else if (bmi < 20) {
		printf("저체중입니다.\n");
	}
	else {
		printf("잘못된 값입니다.");
	}
}
