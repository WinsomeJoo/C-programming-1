#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//�����ڷῡ 21-1ó��  convCase�Լ� ���� ������� �ϴµ� ���� �߻��Ͽ� �Ʒ�ó�� �ڵ常�� 
//�ð��� �� �ٽ��غ���!


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