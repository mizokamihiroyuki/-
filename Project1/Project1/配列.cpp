/*�z��
�ϐ��E�E�E��̒l���L������B
�z��E�E�E�����^�𕡐��L���ł��郂�m
int a[3] �^�Ɠ����l��v�f���Ɠ����������l�����ł���
*/

/*�z��ƃ|�C���^�̊֌W
int a[3]; a��[0]�̃A�h���X�������Ă���B
*/
#include <stdio.h>
#include <conio.h>

int main(void)
{
	//��1  �z���錾���A1.0f,3.0f,4.0f�̒l�������o�͂��Ȃ����B
	float a[3];
	printf("a[0]=%ff\n", a[0] = 1.0f);
	printf("a[1]=%ff\n", a[1] = 3.0f);
	printf("a[2]=%ff\n", a[2] = 4.0f);

	/*����
	float x[3];
	x[0]=1.0f;
	x[1]=3.0f;
	x[2]=4.0f;
	for(int i=0;i<3;i++)
	printf("%f",x[i]);
	*/

	//��2�@�z���錾���A3/2���L�����Ȃ����B
	//��2�E3�͐����ł��B

	//����
	int b[2];
	b[0] = 2;
	b[1] = 3;
	printf("%d/%d\n", b[0], b[1]);

	//��3�@�z��ɋL�����������������ŏo�͂��Ȃ����B

	//����
	float d[2];
	d[0] = 2;
	d[1] = 3;
	printf("%f", (float)d[0] / (float)d[1]);


	_getch();
	return 0;
}