#include <stdio.h>

int main() {
	int total = 0, score, count = 0;
	int category = 0;
	char grade;

	float average;

	printf("���� �Է� (0�� ��):");

	do {
		scanf_s("%d", &score);

		while ((score > 100) || (score < 0)) //1��: �߸��� ���� �ԷµǸ� �ٽ�
		{
			printf("��ȿ�� ���ڷ� �Է����ּ���(0~100������ ����! 0�� ��):");
			scanf_s("%d", &score);
		}

		
		category = score / 10;

		switch (category) { 
		case 10:
		case 9:
			grade = 'A';

			break;

		case 8:
			grade = 'B';
			break;

		case 7:
			grade = 'C';
			break;

		case 6:
			grade = 'D';
			break;

		default:
			grade = 'F';
		}
		printf("����: %d ����: %c\n" , score, grade);
		

		if (score != 0) {
			total += score;
			count++;

		}
	} while (score != 0);

	if (count == 0)

			printf("�Է¾���.");

	else { 
			average = (float)total / count;
			printf("����: %d ", total);
			printf("���: %5.2f", average);

		}

	return 0;
}