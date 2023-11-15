#include <stdio.h>
#include <windows.h>

typedef void (*PFunc)(int*);

//コールバック関数
void DispResult(int* s) {
	printf("%d秒待って実行されたよ\n", *s); 
}

void setTimeout(PFunc p, int second) {
	//コールバック関数を飛び出す
	Sleep(second * 1000);
	//macとかUnix系OSの場合
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


