/*
 ============================================================================
 Name        : p2-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>

#define MAX_SIZE 100

float sum(float [], int);
float input[MAX_SIZE], answer;
int i;
void main(void){
	printf("-----[�赿��] [2020039023]-----\n\n");
	for (i=0; i<MAX_SIZE; i++)
		input[i] = i;
	/*for checking call by reference*/
	  printf("address of input = %p\n", input); //input�� �ּ�

	answer = sum(input, MAX_SIZE); //list�� input�� �ּҸ� ����
	printf("The sum is: %f\n", answer);
}

float sum(float list[], int n){
	   printf("value of list = %p\n", list); //input�� �ּҰ� �������
	   printf("address of list = %p\n\n", &list); //list ������ �ּ�

	int i;
	float tempsum = 0;
	for(i=0; i<n; i++)
		tempsum += list[i];
	return tempsum; //input�� �ּҸ� ���� list�� �Լ��� ������ �� main�Լ��� tempsum ���� �Ѱ���
}
