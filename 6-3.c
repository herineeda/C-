#include <stdio.h>

int main() {
	int first_charge, time, time2, time2_d, time3, time3_d, add_charge, total_charge;

	first_charge = 1200; //기본요금
	time = 0; // 주차시간
	time2 = 0; // 30분 초과일 경우 주차시간-30분 한 것
	time2_d = 0;// time2를 15로 나눈 값 //추가 15분마다
	time3 = 0; // 1440분 초과일 경우 주차시간 -1440분 한 것
	time3_d = 0;// time3를 15로 나눈 값
	add_charge = 0; //추가요금
	total_charge = 0; // 주차 총 금액

	printf("주차시간을 입력하세요(분단위) : ");
	scanf_s("%d", &time);

	if (time <= 30)
	{
		total_charge = 1200;
	}
	else if (time > 30 && time <= 120)
	{
		time2 = time - 30;//
		time2_d = time2 / 15;
		add_charge = time2_d * 600;
		if (time2 % 15 != 0)
		{
			add_charge += 600;
		}
		total_charge = first_charge + add_charge;
	}
	else if (time > 1440)
	{
		total_charge = 24000;// 1일(1440분) 주차요금은 24000원 
		time3 = time - 1440;
		time3_d = time3 / 15;
		add_charge = time3_d * 600;
		if (time3 % 15 != 0)
		{
			add_charge += 600;
		}
		total_charge += add_charge;
	}

	printf("주차요금은 %d원 입니다.\n", total_charge);

	system("pause");
	return 0;
}
