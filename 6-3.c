#include <stdio.h>

int main() {
	int first_charge, time, time2, time2_d, time3, time3_d, add_charge, total_charge;

	first_charge = 1200; //�⺻���
	time = 0; // �����ð�
	time2 = 0; // 30�� �ʰ��� ��� �����ð�-30�� �� ��
	time2_d = 0;// time2�� 15�� ���� �� //�߰� 15�и���
	time3 = 0; // 1440�� �ʰ��� ��� �����ð� -1440�� �� ��
	time3_d = 0;// time3�� 15�� ���� ��
	add_charge = 0; //�߰����
	total_charge = 0; // ���� �� �ݾ�

	printf("�����ð��� �Է��ϼ���(�д���) : ");
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
		total_charge = 24000;// 1��(1440��) ��������� 24000�� 
		time3 = time - 1440;
		time3_d = time3 / 15;
		add_charge = time3_d * 600;
		if (time3 % 15 != 0)
		{
			add_charge += 600;
		}
		total_charge += add_charge;
	}

	printf("��������� %d�� �Դϴ�.\n", total_charge);

	system("pause");
	return 0;
}
