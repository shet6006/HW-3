/*
 ============================================================================
 Name        : size.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main(){
	printf("-----[�赿��] [2020039023]-----\n\n");
	int **x;

	printf("sizeof(x) = %lu\n", sizeof(x)); //x���� �ּҰ� ����ִ�. �� �ּ��� ũ��� 64bit������ 8bytes, 32bite������ 4bytes�� ��µȴ�.
	printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x���� x�� �ּҰ� ��������Ƿ� ���� ���� ��Ȳ�̴�.
	printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x�� int������ ũ�Ⱑ ���������Ƿ� 4bytes�̴�.
}
