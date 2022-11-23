#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//수업자료에 21-1처럼  convCase함수 빼서 만드려고 하는데 오류 발생하여 아래처럼 코드만듬 
//시간될 때 다시해보기!


int main()
{
	char ch;
	printf("input> ");
	const int diff = 'a' - 'A';

	while ((ch = getchar()) != '\n') {
		if (ch >= 'A' && ch <= 'Z')
			ch += diff;
		else if (ch >='a' && ch <= 'z')
			ch -= diff;
					
		
		putchar(ch);
	}
	putchar(ch);
	
}