#include <stdio.h>
#include<Windows.h>

int main()
{
	int i = 0;
	while (i <= 50)
	{
		printf("%d�� ���...\n", i);
		Sleep(1000);
		i = i + 10;
	}
}