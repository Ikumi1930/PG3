#include <chrono>
#include <iostream>
#include <random>
#include <stdio.h>
#include <thread>
#include <functional>

std::random_device seed_Gen;
std::mt19937 mtrand(seed_Gen());

//typedef int (*Pfunc)();

//int RollingDice() { return std::uniform_int_distribution<int>(1, 6)(seed_Gen); }


void DiceResult(int diceNumber) {
	// ����
	if (diceNumber % 2 == 0) {
		printf("���ʁ@��\n");
	}
	// �
	if (diceNumber % 2 == 1) {
		printf("���ʁ@��\n");
	}
}


int WaitingTime(std::function<int()> returnValue, int second) {
	std::this_thread::sleep_for(std::chrono::seconds(second));
	return returnValue();
}


int main() {

	//Pfunc p;
	//p = RollingDice;
	std::function<int()> p = []() { return std::uniform_int_distribution<int>(1, 6)(seed_Gen); };
	int Result;
	int Answer;

	while (true) {

		printf("1:���@2:��\n");
		std::cin >> Answer;

		if (Answer == 0) {
			break;
		}

		Result = WaitingTime(p, 3);
		printf("���� : %d\n", Result);
		DiceResult(Result);

		if (Result % 2 == 0 && Answer == 2) {
			printf("����\n");
		}

		else if (Result % 2 == 1 && Answer == 1) {
			printf("����\n");
		}

		else {
			printf("�s����\n");
		}
	}

	return 0;
}