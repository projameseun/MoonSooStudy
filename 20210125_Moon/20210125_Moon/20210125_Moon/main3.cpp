#include <iostream>
#include <time.h>

int main()
{
	/*
	�迭 : ���� Ÿ���� ���� �������� �ѹ��� �����Ҽ� �ְ� ���ִ±���̴�.
	����Ÿ�� �迭��[����]; 
	������ �ݵ�� ����� �����Ǿ�� �Ѵ�.
	*/

	//int iNumber[100];

	//��ó���ϰԵǸ� iNumber�� 100���� ������ �Ǵ°��̴�.
	/*
	�� ��ҿ� �����ϱ� ���ؼ� ����ϴ°��� �ε���(��)�̴�.
	�ε����� 0 ~ ���� - 1 �����̴�.
	100����� 
	0 ~ 99���� �ε����� �����Ѵ�.
	*/
	//�Ʒ�ó�� �ʱ�ȭ�ϸ�  0,1,2�� �ε����� 1, 2, 3���� ���� �ȴ�.
	//�������� ��� 0���� �ʱ�ȭ �ȴ�.
	int iNumber[50] = { 1,2,3 };

	iNumber[0] = 10;
	iNumber[25] = 47;
	


	for (int i = 0; i < 50; ++i)
	{
		iNumber[i] = i + 1;
	}

	for (int i = 0; i < 50; ++i)
	{
		std::cout << "iNumber"<< i <<"����:" << iNumber[i] << std::endl;
	}

	//�ζ� ���α׷� 
	//1~45 ������ ������ ������ 6���� ���ڸ� ������ �Ѵ�.
	//���� �ߺ��� �� �ȵȴ�.

	system("cls");

	srand((unsigned int)time(0));
	rand();

	int iLotto[45] = {};	//�̷��� ���0�̵��µ� �ʱ�ȭ�� ���ذ��̴�.

	//���� ���ϴ� ������ �־�д�.
	for (int i = 0; i < 45; ++i)
	{
		iLotto[i] = i + 1;
	}

	//Shuffle ���´�. Swap
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
		std::cout << i + 1 << "��:" << iLotto[i] << std::endl;
	}
	
	
	return 0;
}