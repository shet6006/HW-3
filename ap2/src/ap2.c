/*
 ============================================================================
 Name        : ap2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main(){
	int list[5];
	int *plist[5];

	list[0] = 10;
	list[1] = 11;
	plist[0] = (int*)malloc(sizeof(int));
	printf("-----[김동원] [2020039023]-----\n\n");
	printf("list[0] \t= %d\n", list[0]); //list[0]의 값, 즉 10
	printf("address of list \t=%p\n", list);         //
	printf("address of list[0] \t= %p\n", &list[0]); //세 줄 모두 list의 시작 주소
	printf("address of list + 0 \t= %p\n", list+0); //
	printf("address of list + 1 \t= %p\n", list+1); //list[1]의 주소
	printf("address of list + 2 \t= %p\n", list+2); //list[2]의 주소
	printf("address of list + 3 \t= %p\n", list+3); //list[3]의 주소
	printf("address of list + 4 \t= %p\n", list+4); //list[4]의 주소
	printf("address of list[4] \t= %p\n", &list[4]);//list[4]의 주소
	free(plist[0]);
}
