/*
 ============================================================================
 Name        : padding.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct student {
	char lastName[13];
	int studentId;
	short grade;
};

int main(){
	printf("-----[�赿��] [2020039023]-----\n\n");
	struct student pst;

	printf("size of student = %ld\n", sizeof(struct student)); /* 13bytes */
	/*13bytes�� lastName�� 4bytes�� ������ �Ҵ��ϰ� ���� 1byte�� 3bytes�� padding�Ͽ� 16bytes �Ҵ�
	����, 2bytes�� grade�� 2bytes�� padding�Ͽ� 4bytes �Ҵ�
	16+4+4�Ͽ� �� 24bytes�� �Ҵ�� */
	printf("size of int = %ld\n", sizeof(int)); /* 4bytes */
	printf("size of short = %ld\n", sizeof(short)); /* 2bytes */

	return 0;
}
