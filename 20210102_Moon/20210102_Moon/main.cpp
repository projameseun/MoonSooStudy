#include <iostream>
#include <time.h>
//time.h : �ð��� ���õ� ����� �������ִ� ������� �̴�.

/*
	����ü: ���ڿ� �̸��� �ο��� �ִ� ����̴�.
	�������� ������ ���ڿ� �̸��� �ٿ��ٶ� ���ϰ� ����Ҽ� �ִ�.
	enum ����ü��
	{
	};
	�� ���·� �����ȴ�.
	�ڵ�� �ȿ� ���ϴ� �̸����� �����ָ� �ȴ�.
*/

enum JOB
{
	JOB_KNIGHT =1, //�⺻������ 0���� ���� �ο��ȴ�. �ٵ� ����ó�� 1�� �����صξ 1���� ���ʷ� ���� �����Ѵ�.
	JOB_ARCHER,
	JOB_MAGICION
};

enum JOB2
{
	JOB2_KNIGHT = 10,	
	JOB2_ARCHER,
	JOB2_MAGICION = 400,
	JOB2_THIFF
};

enum class JOB3	// enum class�� �Ҽ��� Ȯ���� �˷��ٶ� ����Ѵ�.
{
	KNIGHT = 1,
	ARCHER,
	MAGICION
};

int main()
{
	//srand�� �̿��ؼ� ���ϴ� ���� ���̺��� ������ �Ѵ�.
	//time(0) �� ���ָ� 1979�� 1�� 1�� ���� �帥 �ʰ� ������ �ȴ�.
	
	srand((unsigned int)time(0));
	rand();

	//rand()�� �̿��ؼ� ������ ������ ���´�.
	std::cout << rand() << std::endl;
	std::cout << rand() << std::endl;

	//0 ~ 99 ������ ������ ���� ���´�.
	//19192 % 100 = 92
	//����� 100���� ���������� ���ü� �ִ� �������� 0 ~ 99 ���̰� �ȴ�.
	//����� 2�� ���������� �������� 0�̵Ǹ� ¦���̴�.
	
	int iRand = rand() % 100;
	std::cout << "Rand :" << iRand << std::endl;

	//100 ~ 199 ������ ������ ���� ���Ѵ� .
	std::cout << rand() % 100 + 100 << std::endl;

	//150 ~ 1000 �����Ǹ� ���ض� 
	//�ּҰ��ݷ� �ִ� ���ݷ� ������ ���ݷ��� ���Ѵ�.
	int iMin = 150;
	int iMax = 1000;

	//1000 - 150 + 1 = 851
	//0 ~ 850 ���� ������ �ȴ�.
	//rand % 851 == (iMax - iMain + 1 )
	// 0 ~ 850  + 150 = 150 ~ 1000 �� �ȴ�.
	std::cout << rand() % (iMax - iMin + 1) + iMin << std::endl;
	

	float fRand = rand() % 10000 / 100.f;
	//std::cout << "fRand :" << fRand << 

	
	if (fRand < 50.f)
		std::cout << "Gold ȹ��" << std::endl;
	else if (fRand < 50.1f)
		std::cout << "���� ������ ȹ�� " << std::endl;
	else if (fRand < 60.1f)
		std::cout << "����ũ ������ ȹ�� " << std::endl;
	else if (fRand < 70.1f)
		std::cout << "���� ������ ȹ��" << std::endl;
	else
		std::cout << "�Ϲ� ������ ȹ��" << std::endl;

	
	/*
	switch �� : �б⹮�� �� �����̴�.
	switch(����)
	{
		case üũ�Ұ�:
		���ϴ� �ڵ�;
		break;	break�� ������ switch���� ����������.
		case üũ�Ұ�:
		���ϴ� �ڵ�;
		break;
		.
		.
		.
		.
		default:		//case���� üũ ���ϴ� �������� else�� ������Ȱ
		break;
	}
	*/

	int iNumber = 2;
	
	switch (iNumber)
	{
	case 0: //case���� ������ ����� ���´�. ������ ������.
		std::cout << "0�� �Դϴ�." << std::endl;
		break;
	case 1: //case���� ������ ����� ���´�. ������ ������.
		std::cout << "1�� �Դϴ�." << std::endl;
		break;
	case 2: //case���� ������ ����� ���´�. ������ ������.
		std::cout << "2�� �Դϴ�." << std::endl;
		break;
	case 3: //case���� ������ ����� ���´�. ������ ������.
		std::cout << "3�� �Դϴ�." << std::endl;
		break;
	default:
		std::cout << "�׿� �Դϴ�." << std::endl;
		break;

	}

	//Player �� ������ ���� �ɷ�ġ�� �����Ѵ�.
	int iAttack = 0, iArmor = 0, iHP = 0, iMP = 0;
	int iJob = 0;
	//:: ������ ������ - �Ҽ��� �˷��ִ¾ִ�.
	std::cout << "1.���" << std::endl;
	std::cout << "2.�ü�" << std::endl;
	std::cout << "3.������" << std::endl;
	std::cout << "������ �������ּ��� :" << std::endl;
	std::cin >> iJob;

	switch (iJob)
	{
	case JOB_KNIGHT:
		iAttack = 20;
		iArmor = 10;
		iHP = 10;
		iMP = 10;
		break;
	case JOB_ARCHER:
		iAttack = 10;
		iArmor = 10;
		iHP = 5;
		iMP = 5;
		break;
	case JOB_MAGICION:
		iAttack = 5;
		iArmor = 5;
		iHP = 20;
		iMP = 50;
		break;
	}
	//Switch �ڵ� Tab���ϰ� ���� �� enum class�� ������ ctrl + Enter�� �ϸ� �ڵ��ϼ��̵ȴ�.
	
	switch ((JOB3)iJob)
	{
	case JOB3::KNIGHT:
		iAttack = 20;
		iArmor = 10;
		iHP = 10;
		iMP = 10;
		break;
	case JOB3::ARCHER:
		iAttack = 10;
		iArmor = 10;
		iHP = 5;
		iMP = 5;
		break;
	case JOB3::MAGICION:
		iAttack = 5;
		iArmor = 5;
		iHP = 20;
		iMP = 50;
		break;

	}


	if (iJob == (int)JOB3::KNIGHT)
		std::cout << "����� ������ ���� �Դϴ�" << std::endl;
	else if (iJob == (int)JOB3::ARCHER)
		std::cout << "����� ������ �ü� �Դϴ�" << std::endl;
	else if (iJob == (int)JOB3::MAGICION)
		std::cout << "����� ������ �ü��Դϴ�" << std::endl;
	
	//std::cout << "����� ������:" << iJob << std::endl;
	std::cout << "Attack:" << iAttack<<std::endl;
	std::cout << "Armor:" << iArmor << std::endl;
	std::cout << "HP:" << iHP << std::endl;
	std::cout << "MP:" << iMP << std::endl;
   
	return 0;
}