#include <iostream>
#include <time.h>

enum class SRP
{
	S =1,	//가위
	R,		//바위	
	P,		//보
	Exit
};

int main()
{
	/*
	반복문 :  동일한 코드를 반복해서 동작시켜줄때 활용 하는 기능이다.
	for, while ,  do while 3가지가 있다.

	for 문 : 반복문의 한 종류이다.

	for(초기값; 조건식; 증감값)
	{
		원하는코드;
	}
	의 형태로 구성이 된다.
	초기값은 이 for문이 시작될때 1번만 동작이된다.
	조건식은 매번 반복할때마다 체크하게 되고 조건식이 true일때
	{}(코드블럭) 안의 코드가 동작되고 false라면 for문을 빠져나가게 된다.

	증감값은 코드가 1번실행되면 증감값이 동작되고 그 후에 조건이 체크된다.

	for문의 실행순서
	초기값 -> 조건식 -> 코드실행 -> 증감값 -> 조건식 -> 코드실행 -> 증감값 -> 조건식 -> 코드실행 ....false일때 for문종료.

	모든 반복문 공통으로 break를 사용하면 반복문을 빠져나오게 된다.
	continue를 사용하면 반복문의 시작점으로 돌아가게 된다.

	초기값에서 아래처럼 변수를 새로 생성하면서 초기화를 하면
	해당 변수(i)는 이 for문 안에서만 사용이 가능하다.
	먼저 i를 0으로 초기화 한다.
	0 < 10 true이므로 0을 출력하고 ++i가 실행되어 i 는 1이 된다.
	1 < 10 true이므로 1을 출력하고 ++i가 실행되어 i 는 2가된다.
	.
	.
	.
	.
	9 < 10 true이므로 9를 출력하 ++i가 실행되어 i는 10이 된다.
	10<10 false이므로 for문이 종료된다.
	*/

	for (int i = 0; i < 10; ++i)
	{
		std::cout << i << std::endl;
	}

	//i = i+2   //  i+=2;
	for (int i = 0; i < 100; i += 2)
	{
		std::cout << i << std::endl;
	}

	//콘솔창을 지워주는 역할을 한다.
	system("cls");

	for (int i = 0; i < 100; ++i)
	{
		// 0 ~ 99  사이의 숫자중 3의 배수만 출력하는 if문을 작성해 보자.
		if (i % 3 == 0)
			std::cout << i << std::endl;
	}

	//for문을 이용해서 구구단을 만들어 보자.
	//구구단 2단을 출력해보자\
	//2 * 1 = 2
	//2 * 2 = 4 
	//2 * 3 = 6
	//.
	//.
	//2 * 9 = 18
	//종료 

	for (int i = 1; i <= 9; ++i)
	{
		std::cout << "2 * " << i << "=" << i * 2 << std::endl;
	}

	//3단 , 8단구구단을만들어보자 

	std::cout << "3단" << std::endl;
	for (int i = 1; i <= 9; ++i)
	{
		std::cout << "3 * " << i << "=" << i * 3 << std::endl;
	}

	std::cout << "8단" << std::endl;
	for (int i = 1; i <= 9; ++i)
	{
		std::cout << "8 * " << i << "=" << i * 8 << std::endl;
	}
	system("cls");
	//1~ 9단 을한번에 출력 
	//이중 for문 : for문 안에 또다른 for문이 들어가는 형태이다.
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			std::cout << "i : " << i << " j :" << j << std::endl;
		}
	}

	//구구단 2~9단 까지 이중 for문을 이용해서 출력해보자.
	//2 * 1 = 2 
	//2 * 2 = 4
	//.
	//.
	//.
	//.
	//9 * 9 = 81

	for (int i = 2; i < 10; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			std::cout << i << "*" << j << " = " << i * j << std::endl;
		}
	}

	system("cls");

	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			//break 자신이 소속이 되어있는 for문을 빠져나간다
			//
			if (j == 5)
				break;

			std::cout << "i :" << i << " j : " << j << std::endl;
		}
	}


	system("cls");

	for (int i = 0; i < 10; ++i)
	{
		if (i == 5)
			continue;

		for (int j = 0; j < 10; ++j)
		{

			//자신이 소속되어 있는 for의 시작점으로 가게 된다.
			//j for문의 시작점으로 가게 된다.
	/*		if (j == 5)
				continue;*/

			std::cout << "i :" << i << " j : " << j << std::endl;
		}
	}

	/*
	while문: 반복문의 한 종류이다.
	while(조건식)
	{
	}
	조건식이 true일때 계속 반복한다 false되면 반복문이 종료된다.
	주로 무한루프를 돌릴때 많이 활용한다.
	while(true)
	{
	}

	do while문 : 반복문의 한 종류이다.
	do
	{
	}while(조건식);
	의 형태로 구성된다.
	처음 한번은 무조건 동작이되고 그후에 조건식을 체크하여 false가되면 빠져나간다.

	*/

	srand((unsigned int)time(0));
	rand();

	//s r p 가위 바위 보
	//가위바위보 게임을 만든다.
	while (true)
	{
		system("cls");
		std::cout << "<======가위바위보게임=====>"<<std::endl;
		std::cout << "1. 가위" << std::endl;
		std::cout << "2. 바위" << std::endl;
		std::cout << "3. 보" << std::endl;
		std::cout << "999. 종료" << std::endl;
		std::cout << "플레이어 선택 : " << std::endl;

		int iPlayer = 0;
		std::cin >> iPlayer;

		//플레이어가 1,2,3,999를 정한다 만약에 다른 숫자나 다른 입력을 할경우 다시 반복시킨다 . 또는 잘못된 입력입니다 라고 출력을시킨다.
		//999를 입력할경우 게임을 종료시킨다.
		
		//인공지능이 가위 바위 보 사이를 랜덤하게 선택한다.
		
		//결과 : 플레이어가 이겼을경우 플레이어승리 , 플레이어가 졌을경우 AI 승리 
		//Money = 1000이 기본적으로 있다 . 이겼을경우 Money가 100 + / 졌을경우 50 -  // 만약에 근데 Money 가 다 소비가 됬을때 마이너스가 됬을때 게임종료
		
		//문수가 쓸 코드들 

		//문수가 쓸 코드들 


		//아무키나 누를때까지 일시정지 시켜준다.
		system("pause");

	}

	return 0;
}