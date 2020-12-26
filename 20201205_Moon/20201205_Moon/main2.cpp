#include <iostream>
#include <time.h>	
int main()
{
	int iKor = 0, iEng = 0, iMath = 0, iTotal = 0;
	//소수점자리가 없는 float일 경우, .f로 소수점 자리에 0을 생략할수 있다.
	float fAvg = 0.f;

	std::cout << "<========학생성적프로그램=========>" << std::endl;
	std::cout << "Kor :";
	std::cin >> iKor;

	std::cout << "Eng :";
	std::cin >> iEng;

	std::cout << "Math :";
	std::cin >> iMath;

	iTotal = iKor + iEng + iMath;

	std::cout << "Kor Score : "<< iKor << std::endl;
	std::cout << "Eng Score : " << iEng << std::endl;
	std::cout << "Math Score : " << iMath << std::endl;
	std::cout << "Total  : " << iTotal << std::endl;
	std::cout << "Avg  : " << fAvg <<  std::endl;

	
	std::cout << "<========학생성적프로그램=========>" << std::endl;

	//세과목을 입력받아서 출력나오게 해주기 
	//토탈,평균 출력나오게하기
	//90 이상 A학점 , 80~90 B 70~80 C, 그이하는 F 



	return 0;
}