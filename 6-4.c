#include <stdio.h>

int main() {

	double total_income;

	printf("종합소득 금액(만단위) 을 입력하세요\n");

	scanf_s("%lf", &total_income);

	if (total_income <= 1200) {
		printf("총 세금은 %lf원입니다\n", total_income * 0.06);
	}

	else if (total_income > 1200 && total_income <= 4600) {
		printf("총 세금은 %lf원입니다\n", 72 + (total_income - 1200) * 0.15);
	}

	else if (total_income > 4600 && total_income <= 8800) {
		printf("총 세금은 %lf원입니다\n", 582 + (total_income - 4600) * 0.24);
	}

	else if (total_income > 8800 && total_income <= 15000) {
		printf("총 세금은 %lf원입니다\n", 1590 + (total_income - 8800) * 0.35);
	}

	else if (total_income > 15000 && total_income <= 30000) {
		printf("총 세금은 %lf원입니다\n", 3760 + (total_income - 15000) * 0.38);
	}
	else if (total_income > 30000 && total_income <= 50000) {
		printf("총 세금은 %lf원입니다\n", 9460 + (total_income - 30000) * 0.40);
	}

	else if (total_income > 50000) {

		printf("총 세금은 %lf원입니다\n", 17460 + (total_income - 30000) * 0.42);
	}

	return 0;
}