#include <stdio.h>

int main(void) {
	//변수
	int age, member, temp, sum;
	//연령별 인원 수 20대 4명, 30대 2명, 40대 3명
	unsigned char limit_table[3] = { 4, 2, 3 };
	//연령별 윗몸 일으키기 횟수를 저장할 배열
	unsigned char count[3][4];

	//연령별로 윗몸 일으키기 횟수를 입력 받음
	for (age = 0; age < 3; age++) {
		//각 연령의 윗몸 일으키기 횟수라고 출력
		printf("\n%d0대 연령의 윗몸 일으키기 횟수\n", age + 2);

		//해당 연령에 소속된 사람들을 순서대로 입력 받음
		for (member = 0; member < limit_table[age]; member++) {
			//#1, #2, ...라고 출력
			printf("#%d : ", member + 1);

			//윗몸 일으키기 횟수를 정수로 입력 받음
			scanf_s("%d", &temp);
			count[age][member] = (unsigned char)temp;
		}
	}

	printf("\n\n연령별 평균 윗몸 일으키기 횟수\n");

	//연령별로 입력된 횟수를 합산하여 평균 값을 출력함
	for (age = 0; age < 3; age++) {
		sum = 0;
		//20대 : 30대 : 40대 : 라고 출력
		printf("%d0대 : ", age + 2);

		//해당 연령에 소속된 사람들의 횟수를 합산
		for (member = 0; member < limit_table[age]; member++) {
			sum = sum + count[age][member];
		}

		//합산 값을 인원수로 나누어서 평균냄
		printf("%5.2f\n", (double)sum / limit_table[age]);
	}

	return 0;
}