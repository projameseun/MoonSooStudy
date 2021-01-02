#include <iostream>
#include <time.h>
//time.h : 시간에 관련된 기능을 제공해주는 헤더파일 이다.

/*
	열거체: 숫자에 이름을 부여해 주는 기능이다.
	연속으로 나열된 숫자에 이름을 붙여줄때 편하게 사용할수 있다.
	enum 열거체명
	{
	};
	의 형태로 구성된다.
	코드블럭 안에 원하는 이름들을 적어주면 된다.
*/

enum JOB
{
	JOB_KNIGHT =1, //기본적으로 0부터 값이 부여된다. 근데 지금처럼 1로 지정해두어서 1부터 차례로 값이 증가한다.
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

enum class JOB3	// enum class는 소속을 확실히 알려줄때 사용한다.
{
	KNIGHT = 1,
	ARCHER,
	MAGICION
};

int main()
{
	//srand를 이용해서 원하는 난수 테이블을 얻어오게 한다.
	//time(0) 을 해주면 1979년 1월 1일 이후 흐른 초가 나오게 된다.
	
	srand((unsigned int)time(0));
	rand();

	//rand()를 이용해서 랜덤한 난수를 얻어온다.
	std::cout << rand() << std::endl;
	std::cout << rand() << std::endl;

	//0 ~ 99 사이의 랜던함 값을 얻어온다.
	//19192 % 100 = 92
	//어떤수를 100으로 나누었을대 나올수 있는 나머지는 0 ~ 99 사이가 된다.
	//어떤수를 2로 나누었을때 나머지가 0이되면 짝수이다.
	
	int iRand = rand() % 100;
	std::cout << "Rand :" << iRand << std::endl;

	//100 ~ 199 사이의 랜던함 수를 구한다 .
	std::cout << rand() % 100 + 100 << std::endl;

	//150 ~ 1000 사이의를 구해라 
	//최소공격력 최대 공격력 사이의 공격력을 구한다.
	int iMin = 150;
	int iMax = 1000;

	//1000 - 150 + 1 = 851
	//0 ~ 850 값이 나오게 된다.
	//rand % 851 == (iMax - iMain + 1 )
	// 0 ~ 850  + 150 = 150 ~ 1000 이 된다.
	std::cout << rand() % (iMax - iMin + 1) + iMin << std::endl;
	

	float fRand = rand() % 10000 / 100.f;
	//std::cout << "fRand :" << fRand << 

	
	if (fRand < 50.f)
		std::cout << "Gold 획득" << std::endl;
	else if (fRand < 50.1f)
		std::cout << "에픽 아이템 획득 " << std::endl;
	else if (fRand < 60.1f)
		std::cout << "유니크 아이템 획득 " << std::endl;
	else if (fRand < 70.1f)
		std::cout << "매직 아이템 획득" << std::endl;
	else
		std::cout << "일반 아이템 획득" << std::endl;

	
	/*
	switch 문 : 분기문의 한 종류이다.
	switch(변수)
	{
		case 체크할값:
		원하는 코드;
		break;	break를 만나면 switch문을 빠져나간다.
		case 체크할값:
		원하는 코드;
		break;
		.
		.
		.
		.
		default:		//case에서 체크 안하는 나머지값 else와 같은역활
		break;
	}
	*/

	int iNumber = 2;
	
	switch (iNumber)
	{
	case 0: //case에는 무조건 상수만 들어온다. 변수는 못들어간다.
		std::cout << "0번 입니다." << std::endl;
		break;
	case 1: //case에는 무조건 상수만 들어온다. 변수는 못들어간다.
		std::cout << "1번 입니다." << std::endl;
		break;
	case 2: //case에는 무조건 상수만 들어온다. 변수는 못들어간다.
		std::cout << "2번 입니다." << std::endl;
		break;
	case 3: //case에는 무조건 상수만 들어온다. 변수는 못들어간다.
		std::cout << "3번 입니다." << std::endl;
		break;
	default:
		std::cout << "그외 입니다." << std::endl;
		break;

	}

	//Player 의 직업에 따라 능력치를 설정한다.
	int iAttack = 0, iArmor = 0, iHP = 0, iMP = 0;
	int iJob = 0;
	//:: 스코프 연산자 - 소속을 알려주는애다.
	std::cout << "1.기사" << std::endl;
	std::cout << "2.궁수" << std::endl;
	std::cout << "3.마법사" << std::endl;
	std::cout << "직업을 선택해주세요 :" << std::endl;
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
	//Switch 자동 Tab을하고 내가 쓸 enum class를 쓴다음 ctrl + Enter를 하면 자동완성이된다.
	
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
		std::cout << "당신의 직업은 전사 입니다" << std::endl;
	else if (iJob == (int)JOB3::ARCHER)
		std::cout << "당신의 직업은 궁수 입니다" << std::endl;
	else if (iJob == (int)JOB3::MAGICION)
		std::cout << "당신의 직업은 궁수입니다" << std::endl;
	
	//std::cout << "당신의 직업은:" << iJob << std::endl;
	std::cout << "Attack:" << iAttack<<std::endl;
	std::cout << "Armor:" << iArmor << std::endl;
	std::cout << "HP:" << iHP << std::endl;
	std::cout << "MP:" << iMP << std::endl;
   
	return 0;
}