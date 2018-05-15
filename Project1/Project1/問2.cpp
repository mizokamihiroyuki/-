#include <stdio.h>
#include <conio.h>
//問2	2/1と3/1を加算して出力しなさい。
//		2/1 3/1=6/3 6/2=6/5 プログラム

int sub(int a, int b, int c, int d)
{
	int x = 0;
	int y = 0;
	int z = 0;
	x = a*d;
	y = b*c;
	x += y;
	z = b*d;

	printf_s("%d/%d", x, z);
	return 0;
}

void main()
{

	sub(1, 2, 1, 3);
	_getch();
	return;
}

