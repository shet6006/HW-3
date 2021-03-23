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
	printf("-----[김동원] [2020039023]-----\n\n");
	struct student pst;

	printf("size of student = %ld\n", sizeof(struct student)); /* 13bytes */
	/*13bytes의 lastName을 4bytes씩 공간을 할당하고 남은 1byte에 3bytes를 padding하여 16bytes 할당
	또한, 2bytes의 grade와 2bytes를 padding하여 4bytes 할당
	16+4+4하여 총 24bytes가 할당됨 */
	printf("size of int = %ld\n", sizeof(int)); /* 4bytes */
	printf("size of short = %ld\n", sizeof(short)); /* 2bytes */

	return 0;
}
