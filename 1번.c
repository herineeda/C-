#include <stdio.h>
#include <stdlib.h>


int main(void)

{
	float rate;

	printf("����ȯ���� �Է��ϼ���: ");
	scanf_s("%f", &rate);

	printf("�޴��� �����ϼ���- \n");

	int cho;

	printf("1.���� ȯ�� ��� \n2.��ȭ�� �޷�ȭ�� ��ȭ \n3. �޷�ȭ�� ��ȭ�� ��ȭ\n");
	scanf_s("%d", &cho);

	if (cho == 1) {
		

		printf("������ ���� ȯ���� 1�޷� %f�� �Դϴ�.\n", rate);

	}


	if (cho == 2) {


		float usd;   // �޷�ȭ

		int krw;   // ��ȭ


		printf("��ȭ�� �Է��ϼ���: ");

		scanf_s("%d", &krw);

		usd = krw / rate;      // �޷�ȭ�� ȯ��

		printf(" %d���� %f�޷��Դϴ�.\n", krw, usd);

	}
	if (cho == 3) {

		int usd, krw;

		printf("�޷�ȭ�� �Է��ϼ���: ");

		scanf_s("%d", &usd);

		krw = usd * rate;

		printf(" %d �޷��� %d���Դϴ�.", usd, krw);

	}

	return 0;
}
