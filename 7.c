#include <stdio.h>

int main() {
	int total = 0, score, count = 0;
	int category = 0;
	char grade;

	float average;

	printf("점수 입력 (0은 끝):");

	do {
		scanf_s("%d", &score);

		while ((score > 100) || (score < 0)) //1번: 잘못된 점수 입력되면 다시
		{
			printf("유효한 숫자로 입력해주세요(0~100사이의 숫자! 0은 끝):");
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
		printf("점수: %d 학점: %c\n" , score, grade);
		

		if (score != 0) {
			total += score;
			count++;

		}
	} while (score != 0);

	if (count == 0)

			printf("입력없음.");

	else { 
			average = (float)total / count;
			printf("총점: %d ", total);
			printf("평균: %5.2f", average);

		}

	return 0;
}