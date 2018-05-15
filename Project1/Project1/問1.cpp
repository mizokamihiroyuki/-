#include <stdio.h>
#include <conio.h>
//再帰関数
//関数の内で関数をコール(呼び出し)して再帰的に実行する。

/*void main()
{
sub(4);
}

sub(int x)
{
if(x==0)
return;
sub(x/2);
return;
}*/

//2進数表示
/*void sum(int x)
{
if (x == 0);
return;
sub(x / 2);
printf("%d",x % 2);
}*/

//再帰関数は引数をメモリに記憶するのでメモリ負担が大きい
//問1　AとBを加算する関数、AとBを減算する関数を作成
//			D=(4+5)-3
//	   Dを関数を使用して求めよ

void main()
{
	int D;
	D = genzan(kasan(4, 5), 3);

	_getch;
	return;
}

int kasan(int A, int B)
{
	return	A + B;
}

int genzan(int A, int B)
{
	return	A - B;
}

