#include <stdio.h>
#include <conio.h>
//�ċA�֐�
//�֐��̓��Ŋ֐����R�[��(�Ăяo��)���čċA�I�Ɏ��s����B

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

//2�i���\��
/*void sum(int x)
{
if (x == 0);
return;
sub(x / 2);
printf("%d",x % 2);
}*/

//�ċA�֐��͈������������ɋL������̂Ń��������S���傫��
//��1�@A��B�����Z����֐��AA��B�����Z����֐����쐬
//			D=(4+5)-3
//	   D���֐����g�p���ċ��߂�

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

