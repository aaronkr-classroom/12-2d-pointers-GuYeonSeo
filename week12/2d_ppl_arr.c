#include <stdio.h>

int main(void) {
	//����
	int age, member, temp, sum;
	//���ɺ� �ο� �� 20�� 4��, 30�� 2��, 40�� 3��
	unsigned char limit_table[3] = { 4, 2, 3 };
	//���ɺ� ���� ����Ű�� Ƚ���� ������ �迭
	unsigned char count[3][4];

	//���ɺ��� ���� ����Ű�� Ƚ���� �Է� ����
	for (age = 0; age < 3; age++) {
		//�� ������ ���� ����Ű�� Ƚ����� ���
		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);

		//�ش� ���ɿ� �Ҽӵ� ������� ������� �Է� ����
		for (member = 0; member < limit_table[age]; member++) {
			//#1, #2, ...��� ���
			printf("#%d : ", member + 1);

			//���� ����Ű�� Ƚ���� ������ �Է� ����
			scanf_s("%d", &temp);
			count[age][member] = (unsigned char)temp;
		}
	}

	printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��\n");

	//���ɺ��� �Էµ� Ƚ���� �ջ��Ͽ� ��� ���� �����
	for (age = 0; age < 3; age++) {
		sum = 0;
		//20�� : 30�� : 40�� : ��� ���
		printf("%d0�� : ", age + 2);

		//�ش� ���ɿ� �Ҽӵ� ������� Ƚ���� �ջ�
		for (member = 0; member < limit_table[age]; member++) {
			sum = sum + count[age][member];
		}

		//�ջ� ���� �ο����� ����� ��ճ�
		printf("%5.2f\n", (double)sum / limit_table[age]);
	}

	return 0;
}