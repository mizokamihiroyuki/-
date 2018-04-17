#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	printf("溝上 広之\n");

	//問1　最大HPが256の時、HPが56の場合のHPの%を出力しなさい
	printf("HP56=%dパーセント\n", 56 * 100 / 256);

	//問2　最大HPが2500の時、HPが1200だった。HPが100%の時☆が15個表示するとした時現在のHPの時☆の表示させなさい。
	printf("2500÷1200=%dパーセント\n", 1200 * 100 / 2500);	//48%になる

	for (int i = 0; i < 0.48 * 15; i++)//48%を整数に直すと0.48
	{
		printf("☆");
	}

	//問3　rの長さが1の時、x,yの長さを求めなさい。
	double x = cos(3.14 / 180 * 30);
	double y = sin(3.14 / 180 * 30);

	printf("x=%f", x / y);
	float abc = 0;
	abc = x / y;
	printf("%f\n", 0.5*abc);


	//問4　変数(int)Aには、1が入っている。2左シフトして値を出力しなさい。
	int A = 1;

	printf("%d\n", A << 2);

	//問5　変数Aには(1000)2が入っている右シフト1して出力しなさい
	int A1 = 8;
	printf("%d\n", A1 >> 1);


	_getch();
	return 0;
