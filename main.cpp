#include <stdio.h>
#include <windows.h>

typedef void (*PFunc)(int*);

//�R�[���o�b�N�֐�
void DispResult(int* s) {
	printf("%d�b�҂��Ď��s���ꂽ��\n", *s); 
}

void setTimeout(PFunc p, int second) {
	//�R�[���o�b�N�֐����яo��
	Sleep(second * 1000);
	//mac�Ƃ�Unix�nOS�̏ꍇ
	//sleep(second);
	p(&second);
}

int main() {
	printf("start\n");

	PFunc p;
	p = DispResult;
	setTimeout(p, 3);
	return 0;
}


