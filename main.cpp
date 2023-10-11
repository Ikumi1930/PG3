#include <stdio.h>

template<typename T>
T Min(T a, T b) { 
	if (a < b) {
		return a;
	}
	else if (b < a) {
		return b;
	}
}

template<>
char Min<char>(char a, char b) {
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");
	return 0;
}


int main(void) { 
	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(11.4f, 51.4f));
	printf("%lf\n", Min<double>(111, 5));
	Min<char>('a', 'b');
	return 0;
}






