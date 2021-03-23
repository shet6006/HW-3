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
	printf("-----[김동원] [2020039023]-----\n\n");
	for (i=0; i<MAX_SIZE; i++)
		input[i] = i;
	/*for checking call by reference*/
	  printf("address of input = %p\n", input); //input의 주소

	answer = sum(input, MAX_SIZE); //list가 input의 주소를 받음
	printf("The sum is: %f\n", answer);
}

float sum(float list[], int n){
	   printf("value of list = %p\n", list); //input의 주소가 들어있음
	   printf("address of list = %p\n\n", &list); //list 고유의 주소

	int i;
	float tempsum = 0;
	for(i=0; i<n; i++)
		tempsum += list[i];
	return tempsum; //input의 주소를 받은 list가 함수를 실행한 뒤 main함수로 tempsum 값을 넘겨줌
}
