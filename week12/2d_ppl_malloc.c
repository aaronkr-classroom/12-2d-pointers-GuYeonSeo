#include <stdio.h>
#include <malloc.h>

int main(void) {
	//����
	int age, member, temp, sum;
	unsigned char limit_table[3];
	//���ɺ� ���� ����Ű�� Ƚ���� ������ �迭
	unsigned char *p[3];

	//���ɺ��� ���� ����Ű�� Ƚ���� �Է� ����
	for (age = 0; age < 3; age++) {
		//�� ������ ���� ����Ű�� Ƚ����� ���
		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
		printf("�� ���ɴ�� �� ���Դϱ�? ");

		scanf_s("%d", &temp);
		limit_table[age] = (unsigned char)temp;

		//�Է� ���� �ο�����ŭ �޸𸮸� �Ҵ�
		p[age] = (unsigned char*)malloc(limit_table[age]);

		//�ش� ���ɿ� �Ҽӵ� ������� ������� �Է� ����
		for (member = 0; member < limit_table[age]; member++) {
			//#1, #2, ...��� ���
			printf("#%d : ", member + 1);

			//���� ����Ű�� Ƚ���� ������ �Է� ����
			scanf_s("%d", &temp);
			*(p[age] + member) = (unsigned char)temp;
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
			sum = sum + *(p[age] + member);
		}

		//�ջ� ���� �ο����� ����� ��ճ�
		printf("%5.2f\n", (double)sum / limit_table[age]);

		free(p[age]);
	}

	return 0;
}