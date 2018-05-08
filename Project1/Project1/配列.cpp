/*配列
変数・・・一つの値を記憶する。
配列・・・同じ型を複数記憶できるモノ
int a[3] 型と同じ値を要素数と同じ数だけ値を代入できる
*/

/*配列とポインタの関係
int a[3]; aは[0]のアドレスが入っている。
*/
#include <stdio.h>
#include <conio.h>

int main(void)
{
	//問1  配列を宣言し、1.0f,3.0f,4.0fの値を代入し出力しなさい。
	float a[3];
	printf("a[0]=%ff\n", a[0] = 1.0f);
	printf("a[1]=%ff\n", a[1] = 3.0f);
	printf("a[2]=%ff\n", a[2] = 4.0f);

	/*答え
	float x[3];
	x[0]=1.0f;
	x[1]=3.0f;
	x[2]=4.0f;
	for(int i=0;i<3;i++)
	printf("%f",x[i]);
	*/

	//問2　配列を宣言し、3/2を記憶しなさい。
	//※2・3は整数です。

	//答え
	int b[2];
	b[0] = 2;
	b[1] = 3;
	printf("%d/%d\n", b[0], b[1]);

	//問3　配列に記憶した分数を少数で出力しなさい。

	//答え
	float d[2];
	d[0] = 2;
	d[1] = 3;
	printf("%f", (float)d[0] / (float)d[1]);


	_getch();
	return 0;
}