/*
 ============================================================================
 Name        : ap1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main() {
	int list[5];
	int *plist[5] = {NULL, };

	plist[0] = (int *)malloc(sizeof(int));
	list[0] = 1;
	list[1] = 100;
	*plist[0] = 200;

	printf("value of list[0] = %d\n", list[0]); //list[0]의 값 (1)
	printf("address of list[0]       = %p\n", &list[0]); //
	printf("value of list            = %p\n", list);     //세 줄 모두 list가 가리키고 있는 주소
	printf("address of list (&list)  = %p\n", &list);    //

	printf("-----[김동원] [2020039023] -----\n\n");
	printf("value of list[1]   = %d\n", list[1]); //list[1]의 값 (100)
	printf("address of list[1] = %p\n", &list[1]); //list[1]의 주소
	printf("value of *(list+1) = %d\n", *(list + 1)); //list[0+1]의 값, 즉 list[1]의 값
	printf("address of list+1  = %p\n", list+1); //list[1]의 주소

	printf("-----[김동원] [2020039023] -----\n\n");
	printf("value of *plist[0] = %d\n", *plist[0]); //plist[0]이 가지고 있는 주소의 값, 즉 200
	printf("&plist[0]          = %p\n", &plist[0]); //
	printf("&plist             = %p\n", &plist);    //세 줄 모두 plist가 시작하는 위치의 주소
	printf("plist              = %p\n", plist);     //
	printf("plist[0]           = %p\n", plist[0]); //200이란 값이 들어있는 곳의 주소
	printf("plist[1]           = %p\n", plist[1]); //
	printf("plist[2]           = %p\n", plist[2]); //
	printf("plist[3]           = %p\n", plist[3]); //
	printf("plist[4]           = %p\n", plist[4]); //위 네 줄 모두 가리킬 곳이 지정되지 않음

	free(plist[0]);
}
