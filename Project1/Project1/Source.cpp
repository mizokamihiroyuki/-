#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	printf("�a�� �L�V\n");

	//��1�@�ő�HP��256�̎��AHP��56�̏ꍇ��HP��%���o�͂��Ȃ���
	printf("HP56=%d�p�[�Z���g\n", 56 * 100 / 256);

	//��2�@�ő�HP��2500�̎��AHP��1200�������BHP��100%�̎�����15�\������Ƃ��������݂�HP�̎����̕\�������Ȃ����B
	printf("2500��1200=%d�p�[�Z���g\n", 1200 * 100 / 2500);	//48%�ɂȂ�

	for (int i = 0; i < 0.48 * 15; i++)//48%�𐮐��ɒ�����0.48
	{
		printf("��");
	}

	//��3�@r�̒�����1�̎��Ax,y�̒��������߂Ȃ����B
	double x = cos(3.14 / 180 * 30);
	double y = sin(3.14 / 180 * 30);

	printf("x=%f", x / y);
	float abc = 0;
	abc = x / y;
	printf("%f\n", 0.5*abc);


	//��4�@�ϐ�(int)A�ɂ́A1�������Ă���B2���V�t�g���Ēl���o�͂��Ȃ����B
	int A = 1;

	printf("%d\n", A << 2);

	//��5�@�ϐ�A�ɂ�(1000)2�������Ă���E�V�t�g1���ďo�͂��Ȃ���
	int A1 = 8;
	printf("%d\n", A1 >> 1);


	_getch();
	return 0;
