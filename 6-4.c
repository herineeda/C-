#include <stdio.h>

int main() {

	double total_income;

	printf("���ռҵ� �ݾ�(������) �� �Է��ϼ���\n");

	scanf_s("%lf", &total_income);

	if (total_income <= 1200) {
		printf("�� ������ %lf���Դϴ�\n", total_income * 0.06);
	}

	else if (total_income > 1200 && total_income <= 4600) {
		printf("�� ������ %lf���Դϴ�\n", 72 + (total_income - 1200) * 0.15);
	}

	else if (total_income > 4600 && total_income <= 8800) {
		printf("�� ������ %lf���Դϴ�\n", 582 + (total_income - 4600) * 0.24);
	}

	else if (total_income > 8800 && total_income <= 15000) {
		printf("�� ������ %lf���Դϴ�\n", 1590 + (total_income - 8800) * 0.35);
	}

	else if (total_income > 15000 && total_income <= 30000) {
		printf("�� ������ %lf���Դϴ�\n", 3760 + (total_income - 15000) * 0.38);
	}
	else if (total_income > 30000 && total_income <= 50000) {
		printf("�� ������ %lf���Դϴ�\n", 9460 + (total_income - 30000) * 0.40);
	}

	else if (total_income > 50000) {

		printf("�� ������ %lf���Դϴ�\n", 17460 + (total_income - 30000) * 0.42);
	}

	return 0;
}