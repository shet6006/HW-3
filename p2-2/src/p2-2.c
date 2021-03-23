/*
 ============================================================================
 Name        : p2-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

void print1 (int *ptr, int rows);

int main(){
	int one[] = {0, 1, 2, 3, 4};
	printf("-----[김동원] [202020039023]-----\n\n");
	printf("one      = %p\n", one);     //
	printf("&one     = %p\n", &one);    //세 줄 모두 one의 주소
	printf("&one[0]  = %p\n", &one[0]); //
	printf("\n");

	print1(&one[0], 5); //int자료형이기 때문에 4씩 더해지는 주소와 해당되는 값이 출력됨

	return 0;
}

void print1 (int *ptr, int rows){
	/* print out a one-dimensional array using a pointer */
	int i;
	printf("Address \t Contents\n");
	for (i=0; i<rows; i++)
		printf("%p \t %5d\n", ptr + i, *(ptr + i)); //main함수에서 one[i]의 주소를 받아와 그들의 주소와 값을 출력하는 작업
	printf("\n");
}
