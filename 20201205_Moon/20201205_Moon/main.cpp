
/*
c++로 작성한 프로그램이 실제 실행파일로 만들어지는 과정
컴파일 : c++ 같은 사람이 알아보기 편한 고수준 언어를 컴퓨터 친화적인 저수준 언어로 번역하는 일을 의미한다.
프로그래머가 작성한 코드를 컴퓨터가 알아들을수 있게 번역하는 과정.

컴파일러: 컴파일 작업을 해주는 프로그램을 말한다.

실행파일이 만들어지는 과정: 컴파일 -> 빌드 -> 링크(링커) -> 실행파일생성 //중요

컴파일러가 컴파일 작업을 해서 저수준 언어로 번역된 언어를 빌드해주면서 .obj 라는 파일(목적파일) 을 cpp마다 생성해 준다.
그런 후에 각 .obj 파일들끼리 기능을 끌어다 사용하는게 있다면 링크를 걸어서 사용할수 있게 해준 후에 최종적으로 기계어(0,1 로 구성된 언어)
로 만들어서 실행파일을 구성해준다.

ctrl + b 를 이용해서 컴파일을 하고 빌드를 해준다.
ctrl + F5를 눌러서 만들어진 실행파일을 실행시켜준다.
*/

// 한줄주석 
/*
	include : 원하는 헤더파일을 여기에 포함시켜 해당 헤더파일에서 제공되는 기능을 사용할수 있게해준다.
	아래에서 포함함 iostream 헤더파일은 c++의 표준 입,출력 기능을 제공하고 있다.
	#전처리기 
	F12를 누르면 정의로 이동이 가능핟.
*/

using namespace std;
#include <iostream> //헤더파일
/*
	 c++에서는 반드시 진입점 함수가 필요하다. 
	 main으로 이름이 정해져 있어서 반드시 여기에 main함수를 만들어 주어야한다.
	 이 진입점 함수 안에 작성된 코드들만 프로그램 실행시 영향을 주게 된다.
*/

int main()
{
	/*
		c++에서 제공되는 표준 기능들은 보통 std라는 namespace안에 구현되어 있다.
		c++은 이름이 같은경우에 구분이 불가능하다. 그렇게 때문에 이름이 충돌되는 상황을 최대한 막아주어야 한다.
		namespace는 이름이 충돌될 경우를 대비하여 소속을 지정해주는 기능으로 만들어져 있다.

		예를들어 그냥 A와 1그룹에 포함된 A는 구분이 가능한것처럼
		namespace안에 원하는 기능들을 구현하면 해당 namespace안의 기능과 바깥에 동일한 이름의 기능은 서로 소속으로 구분이 가능해지게 되는것이다.

		cout : 콘솔창에 출력해준 기능
		cout은 std namespace안에 만들어져 있는 기능이기 때문에 std::를 붙여서 사용해야 한다.
		::(범위지정연산자)
		//한줄의 끝은 ; 으로 한다.
		\n : 한줄 개행을 해준다.	c언어
		//endl 한줄개행 해준다.		c++
	*/
	//cout : 
	//std::cout << "Test\n";
	//cout << "test" << std::endl;
	//std::cout << "One" << std::endl;  //End Line 

	////변수 : 메모리(램)에 공간을 만들고 해당 공간에 값을 저장해서 사용할수 있게 해주는 기능.
	////용량의 최소의 단위 : bit
	////1bit는 0, 1 둘중 하나의 값을 표현할수 있다.
	////1byte = 8bit
	////1kbyte = 1024byte
	////1mbyte = 1024kybte
	////0은 false , 0이 아닌 모든수는 true

	////변수의 이름의 첫번째는 무조건 _ 아니면 알파벳으로 해야된다.
	////숫자는 변수이름의 첫번째에 올수있다.
	//// = 대입연산자 오른쪽값을 왼쪽값에 대입해준다.
	//// 30 , 66 이런 식으로 값을 적는것을 상수라고 한다.
	////상수는 변하지 않는수이다. 한번 정해지면 그값을 변경할수 없는 수를말한ㄷ.
	///*
	//	변수의타입
	//	타입	|	크기	|	표현종류	|	표현범위			|	unsigned	|
	//	char	|	1byte	|	문자		|	-128 ~ 127			|	0 ~ 255		|
	//	bool	|	1byte	|	참/거짓		|	flase(0),true(1)	|	0 ~ 255		|
	//	short	|	2byte	|	정수		|	-32768 ~ 32767		|	0 ~ 65535	|
	//	int		|	4byte	|	정수		|	-2147483648 ~ 2147483647 |	0 ~ 4294967295 |
	//	__int64 |	8byte	|	정수		|	-9223372036854775808 ~ 9223372036854775807
	//	float	|	4byte	|	실수
	//	doubel	|	8byte	|	실수		|
	//*/

	//const int ciNumber = 50;
	////ciNumber = 70;

	//int iNumber = 30;	//선언을 했다  //초기화를 했다 //정의를했다
	//iNumber = 60;

	////INT64_MAX
	//__int64	iNumber64 = 32389075892375897i64;
	////INT64_MAX
	//short sNumber = 32769;
	//char	cText = 'A';

	//char	cLText = 76;
	//char	cOText = 79;
	//char	cVText = 86;
	//char	cEText = 69;
	//cText = 65;
	//bool	bTest = false;

	////암시적인 형변환 일어나게 된다. double 타입을 //float로 넣어주게 되는상황이다.
	////float 타입으로 자동형변환을 해준다.
	//float	fNumber = 3.14;

	////float 타입을 //int로 넣어주게 되는상황이다.
	////int타입으로 자동형변환을 해준다.
	////이때 실수를 정수에 넣게되면 소수점이 짤리게 되고 정수부분만 나오게된다.
	//int		iNumberTest = 3.14f;
	//double	dNumber = 3.14929293891;


	//std::cout << "iNumber : " << iNumber << std::endl;
	//std::cout << "sNumber : " << sNumber << std::endl;
	//std::cout << "cText : " << cText << std::endl;

	//std::cout << cLText << cOText << cVText << cEText << std::endl;

	//std::cout << "bTest : " << bTest << std::endl;
	//std::cout << "fNumber : " << fNumber << std::endl;
	//std::cout << "iNumberTest : " << iNumberTest << std::endl;
	//std::cout << "dNumber : " << dNumber << std::endl;

	////잠깐 다른 타입으로 인식해 준다.
	//std::cout << "cText Valule : " << (int)cText << std::endl;

	//std::cout << "iNumber64 : " << iNumber64 << std::endl;

	//std::cout << "Input iNumber:";
	//// cin에서 입력받은 값을 iNumber에 넣어준다.
	//std::cin >> iNumber;
	//std::cout << iNumber << std::endl;


/*
	진수 : 2진수, 8진수, 10진수, 16진수 4가지가 있다.
	2진수 : 0, 1 둘중 하나로 표현되는 수이다.
	8진수 : 0 ~ 7 중 하나로 표현되는 수이다.
	10진수 : 0 ~ 9 중 하나로 표현되는 수이다.
	16진수 : 0 ~ 15 중 하나로 표현되는 수이다.
	16진수는 10 ~ 15를 a ~ f로 표현한다.
	110 은 1 10 인지 11 0 인지 아니면 1 1 0 인지 구분이 애매하다.
	그러므로 10 ~ 15는 알파벳으로 표현하여 확실하게 처리해주어야 한다.
	16진수는 앞에 0x를 붙여서 표현한다.
	0x110	1 1 0 이다.
	0x1a	1 10
	0xb0	11 0

	10진수 87을 2진수, 16진수로 변환해보자.
	2진수로 변환할때는 더이상 나눌 수 없을때까지 2로 계속 나누어준다.
	그러면서 나머지 값들을 적어둔다.
	87 / 2 = 43 -- 1
	43 / 2 = 21 -- 1
	21 / 2 = 10 -- 1
	10 / 2 = 5 --- 0
	5 / 2 = 2 ---- 1
	2 / 2 = 1 ---- 0

	몫이 1이 나오면 더이상 2로 나눌 수 없으므로 멈춰준다.
	마지막 몫 1부터 반대로 읽어준다.
	1010111 이 된다.

	2진수를 10진수로 변환할때는 가장 오른쪽부터 1, 2, 4, 8... 이런식으로 2의 배수로 증가하여
	값을 부여해둔다.
	1  0  1  0 1 1 1
	64 32 16 8 4 2 1
	1인 부분의 값을 모두 더해준다.
	64 + 16 + 4 + 2 + 1 = 87

	16진수로 변환을 할때는 2진수로 변환을 한 상태에서 변환하는것이 편하다.
	1010111 을 16진수로 변환해보자.
	먼저 오른쪽 끝부터 4자리씩 끊어준다.
	2진수 4자리가 16진수 1자리가 된다.
	101 / 0111 이 된다.
	오른쪽 끝부터 1, 2, 4, 8 의 값을 부여해준다.
	1 0 1 / 0 1 1 1
	4 2 1 / 8 4 2 1

	1인 부분의 값을 모두 더해준다.
	0x57 이 된다.

	16진수를 2진수로 바꿀때는 16진수 각 자리별로 2로 나누어서 더이상 나눌 수 없을때까지 나눈다.
	5 / 2 = 2 -- 1
	2 / 2 = 1 -- 0
	101

	7 / 2 = 3 -- 1
	3 / 2 = 1 -- 1
	0111이 된다.

	1010111 이 된다.

	115를 2진수, 16진수로 변환해보자.
	1110011
	0x73

	비트단위 논리연산자 : AND(&), OR(|), NOT(~), XOR(^)
	값 대 값을 연산하여 결과로 값이 나오게 된다.
	연산을할때 먼저 값을 2진수로 변환한 후에 연산을 진행하게 된다.
	2진수 각 자리별로 논리연산을 수행한다.
	87 & 115 =
	  1010111
	& 1110011
	  1010011

	  83이 된다.

	  1010111
	| 1110011
	  1110111
	  64 + 32 + 16 + 4 + 2 + 1 = 119

	A		B		XOR
	false	false	false
	false	true	true
	true	false	true
	true	true	false

	XOR는 두개가 같으면 false 다르면 true가 나온다.

	  1010111
	^ 1110011
	  0100100
	  36이 된다.
	*/
	std::cout << "87 & 115 = " << (87 & 115) << std::endl;
	std::cout << "87 | 115 = " << (87 | 115) << std::endl;
	std::cout << "87 ^ 115 = " << (87 ^ 115) << std::endl;

	// 변수 타입 앞에 const를 붙이면 상수가 된다.
	// 상수는 변하지 않는 수이다.
	// 상수는 선언과 동시에 값을 무조건 지정해주어야 하고 그 이후에는 값을 변경할 수 없다.
	const int	iAttack = 0x1;		//     1
	const int	iArmor = 0x2;		//    10
	const int	iHP = 0x4;			//   100
	const int	iMP = 0x8;			//  1000
	const int	iCritical = 0x10;	// 10000

	int	iBuf = 0;

	// 0 | 1 = 1
	iBuf = iBuf | iAttack;

	// 001 | 100 = 101
	iBuf = iBuf | iHP;

	// 00101 | 10000 = 10101
	iBuf = iBuf | iCritical;

	// 10101 ^ 00100 = 10001
	iBuf = iBuf ^ iHP;

	// 10001 ^ 00100 = 10101
	iBuf = iBuf ^ iHP;

	std::cout << "Attack = " << (iBuf & iAttack) << std::endl;
	std::cout << "Armor = " << (iBuf & iArmor) << std::endl;
	std::cout << "HP = " << (iBuf & iHP) << std::endl;
	std::cout << "MP = " << (iBuf & iMP) << std::endl;
	std::cout << "Critical = " << (iBuf & iCritical) << std::endl;

	// 결론 : OR연산으로 추가하고 AND연산으로 확인한다.
	// XOR연산으로 버프가 없을경우 추가하고 있을 경우 제거할수도 있다.

	/*
	쉬프트연산자 : <<, >> 2가지가 있다.
	값 대 값을 연산하여 결과로 값이 나오게 된다.
	30 << 2 =
	먼저 20을 2진수로 변환한다.
	11110
	위 연산은 뒤에 0을 2개 붙이라는 것이다.
	1111000 이 된다.
	120이 된다.

	30 << 3 =
	11110000 이 된다.
	16 + 32 + 64 + 128 = 240

	30 << 2 를 했을때 결과는 120이 나오는데 이는 30 * 2의 2승의 결과와 같다.
	30 << 3 을 했을때 결과는 240이 나오는데 이는 30 * 2의 3승의 결과와 같다.
	<< 방향의 쉬프트 연산자는 2의 n승을 곱해주는 결과가 된다.
	그래서 빠른 곱하기 라고도 부른다.

	30 >> 2
	11110
	오른쪽 2개를 지우는것과 같다.
	111 이 된다.
	7이다.

	30 >> 3
	오른쪽 3개를 지우는것과 같다.
	11 이 된다.
	3이다.

	30 / 4 = 7 이 된다. 2의 2승으로 나눈것과 같다.
	30 / 8 = 3 이 된다. 2의 3승으로 나눈것과 같다.
	그래서 빠른 나누기라고도 부른다.
	*/
	std::cout << "30 << 2 = " << (30 << 2) << std::endl;
	std::cout << "30 << 3 = " << (30 << 3) << std::endl;
	std::cout << "30 >> 2 = " << (30 >> 2) << std::endl;
	std::cout << "30 >> 3 = " << (30 >> 3) << std::endl;

	// 32bit Color를 사용하면 a, r, g, b 로 구성이 된다.
	// a, r, g, b는 각각 1byte를 차지하게 되며 0 ~ 255 사이의 값으로 표현이 된다.
	// a, r, g, b를 합쳐서 4바이트 변수 하나에 픽셀의 색상을 표현하게 된다.
	// 변수 타입 앞에 unsigned를 붙여주면 부호가 없는 변수가 된다.
	// 즉, -값을 +값으로 변환하게 되는것이다.
	unsigned int	iColor = 0;
	unsigned char	a = 200;
	unsigned char	r = 150;
	unsigned char	g = 97;
	unsigned char	b = 210;

	iColor = a;
	//iColor = iColor << 8;
	iColor <<= 8;

	iColor = iColor | r;
	iColor = iColor << 8;

	iColor = iColor | g;
	iColor = iColor << 8;

	iColor = iColor | b;

	std::cout << "Color : " << iColor << std::endl;

	// f : 15기 때문에 2진수로 1111 이 나오게된다. 11111111과 & 연산을 하는것이다.
	std::cout << "b : " << (iColor & 0x000000ff) << std::endl;
	std::cout << "g : " << (iColor >> 8 & 0x000000ff) << std::endl;
	std::cout << "r : " << (iColor >> 16 & 0x000000ff) << std::endl;
	std::cout << "a : " << (iColor >> 24 & 0x000000ff) << std::endl;

	/*
	증감연산자 : ++, -- 2가지가 있다.
	++는 1 증가시켜준다.
	--는 1 감소시켜준다.

	증감연산자는 연산자를 변수의 앞에 붙여주느냐 뒤에 붙여주느냐에 따라 전치, 후치 연산으로
	나뉘게 된다.
	*/
	int	iNumber = 100;
	++iNumber;

	std::cout << iNumber << std::endl;
	std::cout << ++iNumber << std::endl;

	// 아래에서 후치연산을 하게되면 먼저 iNumber의 값을 출력한 후에 값을 증가시킨다.
	std::cout << iNumber++ << std::endl;
	std::cout << iNumber << std::endl;

	--iNumber;
	std::cout << iNumber << std::endl;
	std::cout << --iNumber << std::endl;
	std::cout << iNumber-- << std::endl;
	std::cout << iNumber << std::endl;

	/*
	연산자 축약형 : +=, -= 등 모든 연산자들은 줄여서 사용이 가능하다.
	int		iNumber = 100;
	iNumber += 10; 을 하게 될 경우
	iNumber = iNumber + 10; 이 된다.
	즉, iNumber의 값을 10 증가시켜주는 것이다.
	*/

	/*
	if문 : 조건을 체크할때 사용하는 기능이다.
	if(조건식)
	{
	

	}(코드블럭)의 형태로 구성이 된다.

	조건식이 true일 경우 코드블럭 사이의 코드가 동작이 되고 false일 경우 무시된다.
	*/

	//if문 안의 코드가 1줄일 경우 코드블럭을 생략할수 있다.
	if (false)	
		std::cout << "if문의 조건이 true 입니다." << std::endl;
	
	

	if ((iBuf & iAttack) == iAttack)
		std::cout << "Attack 버프 활성화 " << std::endl;
	

	if ((iBuf & iArmor) == iArmor)
	{
		std::cout << "Armor 버프 활성화 " << std::endl;
	}

	if ((iBuf & iHP) == iHP)
	{
		std::cout << "HP 버프 활성화 " << std::endl;
	}

	if ((iBuf & iMP) == iMP)
	{
		std::cout << "MP 버프 활성화 " << std::endl;
	}

	if ((iBuf & iCritical) == iCritical)
	{
		std::cout << "Critical 버프 활성화 " << std::endl;

	}

	int Num = 0;

	Num = 20;

	if (Num == 15)
	{
		std::cout << "Num은 15입니다." << std::endl;
	}
	else
		std::cout << "Num은 15가 아닙니다" << std::endl;
	
	/*
	else : if문과 쌍으로 사용 할수 있다.
	if 문 1개당 1개의 else문이 올수 있다.
	else는 독립적으로 사용이 불가능하다.

	else 
	{
	}의 형태로 구성이된다.
	else는 조건식이 없다. 그말은 조건식을 체크할 필요가 없다는 것이다.
	else는 if문의 조건이 false일 경우만 동작이 되는 구문이다.
	*/
	
	if (true)
		std::cout << "if  true" << std::endl;

	else
		std::cout << "if  false" << std::endl;

	/*
	else if : if문에 아래에 올수 있다. else와는 다르게 몇개든 만들어서 사용이 가능하다.
	else if도 독립적으로 사용 불가능하다.
	else if(조건식)
	{
	}의 형태로 구성이 된다.
	*/

	if (Num == 0)
	{
		std::cout << "0 입니다." << std::endl;
	}
	else if (Num == 1)
	{
		std::cout << "1 입니다." << std::endl;
	}
	else if (Num == 2)
	{
		std::cout << "2 입니다." << std::endl;

	}
	else if (Num == 5)
	{
		std::cout << "5 입니다." << std::endl;
	}
	else
	{
		std::cout << "Num는 20 입니다." << std::endl;
	}




	return 0;
}