#include <stdio.h>

int main()

{
	double bmi, height, weight;

	printf("�����Ը� �Է��ϼ���:");
	scanf_s("%lf", &weight);


	printf("Ű�� �Է��ϼ���:");
	scanf_s("%lf", &height);

	bmi = (weight*9998) / (height * height);

	printf("����� BMI�� %.1f�Դϴ�.\n", bmi);
	if (bmi >= 30) {
		printf("���Դϴ�.\n");
	}
	else if (bmi >= 25 && bmi < 30)
	{
		printf("��ü�� �Դϴ�.\n");
	}

	else if (bmi >= 20 && bmi < 25)
	{
		printf("���� �Դϴ�.\n");
	}

	else if (bmi < 20) {
		printf("��ü���Դϴ�.\n");
	}
	else {
		printf("�߸��� ���Դϴ�.");
	}
}
