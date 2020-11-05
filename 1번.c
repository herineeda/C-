#include <stdio.h>
#include <stdlib.h>


int main(void)

{
	float rate;

	printf("기준환율을 입력하세요: ");
	scanf_s("%f", &rate);

	printf("메뉴를 선택하세요- \n");

	int cho;

	printf("1.기준 환율 출력 \n2.원화를 달러화로 변화 \n3. 달러화를 원화로 변화\n");
	scanf_s("%d", &cho);

	if (cho == 1) {
		

		printf("오늘의 기준 환율은 1달러 %f원 입니다.\n", rate);

	}


	if (cho == 2) {


		float usd;   // 달러화

		int krw;   // 원화


		printf("원화를 입력하세요: ");

		scanf_s("%d", &krw);

		usd = krw / rate;      // 달러화로 환산

		printf(" %d원은 %f달러입니다.\n", krw, usd);

	}
	if (cho == 3) {

		int usd, krw;

		printf("달러화를 입력하세요: ");

		scanf_s("%d", &usd);

		krw = usd * rate;

		printf(" %d 달러는 %d원입니다.", usd, krw);

	}

	return 0;
}
