#include <iostream>
#include <time.h>

int main()
{
	/*
	배열 : 같은 타입의 변수 여러개를 한번에 선언할수 있게 해주는기능이다.
	변수타입 배열명[개수]; 
	개수는 반드시 상수로 지정되어야 한다.
	*/

	//int iNumber[100];

	//위처럼하게되면 iNumber가 100개가 생성이 되는것이다.
	/*
	각 요소에 접근하기 위해서 사용하는것이 인덱스(방)이다.
	인덱스는 0 ~ 개수 - 1 까지이다.
	100개라면 
	0 ~ 99까지 인덱스가 존대한다.
	*/
	//아래처럼 초기화하면  0,1,2번 인덱스에 1, 2, 3값이 들어가게 된다.
	//나머지는 모두 0으로 초기화 된다.
	int iNumber[50] = { 1,2,3 };

	iNumber[0] = 10;
	iNumber[25] = 47;
	


	for (int i = 0; i < 50; ++i)
	{
		iNumber[i] = i + 1;
	}

	for (int i = 0; i < 50; ++i)
	{
		std::cout << "iNumber"<< i <<"번방:" << iNumber[i] << std::endl;
	}

	//로또 프로그램 
	//1~45 사이의 숫자중 랜덤한 6개의 숫자를 얻어오게 한다.
	//값이 중복되 면 안된다.

	system("cls");

	srand((unsigned int)time(0));
	rand();

	int iLotto[45] = {};	//이러면 모두0이들어가는데 초기화를 해준것이다.

	//먼저 원하는 값들을 넣어둔다.
	for (int i = 0; i < 45; ++i)
	{
		iLotto[i] = i + 1;
	}

	//Shuffle 섞는다. Swap
	int iTemp, idx1, idx2;
	for (int i = 0; i < 200; ++i)
	{
		idx1 = rand() % 45;
		idx2 = rand() % 45;

		iTemp = iLotto[idx1];
		iLotto[idx1] = iLotto[idx2];
		iLotto[idx2] = iTemp;
	}

	for (int i = 0; i < 45; ++i)
	{
		std::cout << iLotto[i] << std::endl;
	}

	std::cout  << std::endl;;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = i + 1; j < 6; ++j)
		{

			if (iLotto[i] < iLotto[j])
			{
				iTemp = iLotto[i];
				iLotto[i] = iLotto[j];
				iLotto[j] = iTemp;
			}
		}
	}
	
	
	//for (int i = 0; i < 45; ++i)
	//{
	//	std::cout << iLotto[i] << std::endl;
	//}

	for(int i=0; i<6; ++i)
	{
		std::cout << i + 1 << "번:" << iLotto[i] << std::endl;
	}
	
	
	return 0;
}