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
	printf("-----[�赿��] [202020039023]-----\n\n");
	printf("one      = %p\n", one);     //
	printf("&one     = %p\n", &one);    //�� �� ��� one�� �ּ�
	printf("&one[0]  = %p\n", &one[0]); //
	printf("\n");

	print1(&one[0], 5); //int�ڷ����̱� ������ 4�� �������� �ּҿ� �ش�Ǵ� ���� ��µ�

	return 0;
}

void print1 (int *ptr, int rows){
	/* print out a one-dimensional array using a pointer */
	int i;
	printf("Address \t Contents\n");
	for (i=0; i<rows; i++)
		printf("%p \t %5d\n", ptr + i, *(ptr + i)); //main�Լ����� one[i]�� �ּҸ� �޾ƿ� �׵��� �ּҿ� ���� ����ϴ� �۾�
	printf("\n");
}
