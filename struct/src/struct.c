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
}; //st1을 선언할 때 앞에 struct를 붙여줘야 함

typedef struct {
	char lastName;
	int studentId;
	char grade;
} student2; //st2를 선언할 때 struct를 붙여주지 않아도 됨

int main(){
	struct student1 st1 = {'A', 100, 'A'};
	printf("st1.lastName = %c\n", st1.lastName);   //
	printf("st1.studentId = %d\n", st1.studentId); // struct1의 자료에 대한 값을 가지는 st1의 값들
	printf("st1.grade = %c\n", st1.grade);         //

	student2 st2 = {'B', 200, 'B'};
	printf("\nst2.lastName = %c\n", st2.lastName); //
	printf("st2.studentId = %d\n", st2.studentId); // struct2의 자료에 대한 값을 가지는 st2의 값들
	printf("st2.grade = %c\n", st2.grade);         //

	student2 st3;

	st3 = st2; //구조 치환, st3에 st2 값들을 덮어씌움

	printf("\nst3.lasteName = %c\n", st3.lastName);
	printf("st3.studentId = %d\n", st3.studentId);
	printf("st3.grade = %c\n", st3.grade);

	/*if (st3 == st2) //st3과 st2를 비교, 하지만 비교 불가 컴파일 에러
		printf("equal\n");
	else
		printf("not equal\n"); */

	return 0;
}
