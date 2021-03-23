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
	printf("-----[김동원] [2020039023]-----\n\n");
	int **x;

	printf("sizeof(x) = %lu\n", sizeof(x)); //x에는 주소가 들어있다. 이 주소의 크기는 64bit에서는 8bytes, 32bite에서는 4bytes로 출력된다.
	printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x에는 x의 주소가 들어있으므로 위와 같은 상황이다.
	printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x는 int형으로 크기가 잡혀있으므로 4bytes이다.
}
