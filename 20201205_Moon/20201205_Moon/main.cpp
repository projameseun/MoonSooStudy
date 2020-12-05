
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
	std::cout << "Test\n";
	cout << "test" << std::endl;
	std::cout << "One" << std::endl;  //End Line 

	//변수 : 메모리(램)에 공간을 만들고 해당 공간에 값을 저장해서 사용할수 있게 해주는 기능.
	//용량의 최소의 단위 : bit
	//1bit는 0, 1 둘중 하나의 값을 표현할수 있다.
	//1byte = 8bit
	//1kbyte = 1024byte
	//1mbyte = 1024kybte
	//0은 false , 0이 아닌 모든수는 true

	//변수의 이름의 첫번째는 무조건 _ 아니면 알파벳으로 해야된다.
	//숫자는 변수이름의 첫번째에 올수있다.
	// = 대입연산자 오른쪽값을 왼쪽값에 대입해준다.
	// 30 , 66 이런 식으로 값을 적는것을 상수라고 한다.
	//상수는 변하지 않는수이다. 한번 정해지면 그값을 변경할수 없는 수를말한ㄷ.
	/*
		변수의타입 
		타입	|	크기	|	표현종류	|	표현범위			|	unsigned	|
		char	|	1byte	|	문자		|	-128 ~ 127			|	0 ~ 255		|
		bool	|	1byte	|	참/거짓		|	flase(0),true(1)	|	0 ~ 255		|
		short	|	2byte	|	정수		|	-32768 ~ 32767		|	0 ~ 65535	|
		int		|	4byte	|	정수		|	-2147483648 ~ 2147483647 |	0 ~ 4294967295 |
		__int64 |	8byte	|	정수		|	-9223372036854775808 ~ 9223372036854775807 
		float	|	4byte	|	실수		
		doubel	|	8byte	|	실수		|
	*/

	const int ciNumber = 50;
	//ciNumber = 70;

	int iNumber = 30;	//선언을 했다  //초기화를 했다 //정의를했다
	iNumber = 60;
	
	//INT64_MAX
	__int64	iNumber64 = 32389075892375897i64;
	//INT64_MAX
	short sNumber = 32769;
	char	cText = 'A';

	char	cLText = 76;
	char	cOText = 79;
	char	cVText = 86;
	char	cEText = 69;
	cText = 65;
	bool	bTest = false;

	//암시적인 형변환 일어나게 된다. double 타입을 //float로 넣어주게 되는상황이다.
	//float 타입으로 자동형변환을 해준다.
	float	fNumber = 3.14;

	//float 타입을 //int로 넣어주게 되는상황이다.
	//int타입으로 자동형변환을 해준다.
	//이때 실수를 정수에 넣게되면 소수점이 짤리게 되고 정수부분만 나오게된다.
	int		iNumberTest = 3.14f;
	double	dNumber = 3.14929293891;
	
	
	std::cout << "iNumber : " << iNumber << std::endl;
	std::cout << "sNumber : " << sNumber << std::endl;
	std::cout << "cText : " << cText << std::endl;

	std::cout << cLText << cOText << cVText << cEText << std::endl;

	std::cout << "bTest : " << bTest << std::endl;
	std::cout << "fNumber : " << fNumber << std::endl;
	std::cout << "iNumberTest : " << iNumberTest << std::endl;
	std::cout << "dNumber : " << dNumber << std::endl;
	
	//잠깐 다른 타입으로 인식해 준다.
	std::cout << "cText Valule : " << (int)cText << std::endl;

	std::cout << "iNumber64 : " << iNumber64 << std::endl;
	
	std::cout << "Input iNumber:";
	// cin에서 입력받은 값을 iNumber에 넣어준다.
	std::cin >> iNumber;
	std::cout << iNumber << std::endl;


	return 0;
}