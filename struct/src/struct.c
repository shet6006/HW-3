/*
 ============================================================================
 Name        : struct.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

struct student1 {
	char lastName;
	int studentId;
	char grade;
}; //st1�� ������ �� �տ� struct�� �ٿ���� ��

typedef struct {
	char lastName;
	int studentId;
	char grade;
} student2; //st2�� ������ �� struct�� �ٿ����� �ʾƵ� ��

int main(){
	struct student1 st1 = {'A', 100, 'A'};
	printf("st1.lastName = %c\n", st1.lastName);   //
	printf("st1.studentId = %d\n", st1.studentId); // struct1�� �ڷῡ ���� ���� ������ st1�� ����
	printf("st1.grade = %c\n", st1.grade);         //

	student2 st2 = {'B', 200, 'B'};
	printf("\nst2.lastName = %c\n", st2.lastName); //
	printf("st2.studentId = %d\n", st2.studentId); // struct2�� �ڷῡ ���� ���� ������ st2�� ����
	printf("st2.grade = %c\n", st2.grade);         //

	student2 st3;

	st3 = st2; //���� ġȯ, st3�� st2 ������ �����

	printf("\nst3.lasteName = %c\n", st3.lastName);
	printf("st3.studentId = %d\n", st3.studentId);
	printf("st3.grade = %c\n", st3.grade);

	/*if (st3 == st2) //st3�� st2�� ��, ������ �� �Ұ� ������ ����
		printf("equal\n");
	else
		printf("not equal\n"); */

	return 0;
}
