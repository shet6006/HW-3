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

	printf("value of list[0] = %d\n", list[0]); //list[0]�� �� (1)
	printf("address of list[0]       = %p\n", &list[0]); //
	printf("value of list            = %p\n", list);     //�� �� ��� list�� ����Ű�� �ִ� �ּ�
	printf("address of list (&list)  = %p\n", &list);    //

	printf("-----[�赿��] [2020039023] -----\n\n");
	printf("value of list[1]   = %d\n", list[1]); //list[1]�� �� (100)
	printf("address of list[1] = %p\n", &list[1]); //list[1]�� �ּ�
	printf("value of *(list+1) = %d\n", *(list + 1)); //list[0+1]�� ��, �� list[1]�� ��
	printf("address of list+1  = %p\n", list+1); //list[1]�� �ּ�

	printf("-----[�赿��] [2020039023] -----\n\n");
	printf("value of *plist[0] = %d\n", *plist[0]); //plist[0]�� ������ �ִ� �ּ��� ��, �� 200
	printf("&plist[0]          = %p\n", &plist[0]); //
	printf("&plist             = %p\n", &plist);    //�� �� ��� plist�� �����ϴ� ��ġ�� �ּ�
	printf("plist              = %p\n", plist);     //
	printf("plist[0]           = %p\n", plist[0]); //200�̶� ���� ����ִ� ���� �ּ�
	printf("plist[1]           = %p\n", plist[1]); //
	printf("plist[2]           = %p\n", plist[2]); //
	printf("plist[3]           = %p\n", plist[3]); //
	printf("plist[4]           = %p\n", plist[4]); //�� �� �� ��� ����ų ���� �������� ����

	free(plist[0]);
}
