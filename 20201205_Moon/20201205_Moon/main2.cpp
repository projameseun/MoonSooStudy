#include <iostream>
#include <time.h>	
int main()
{
	int iKor = 0, iEng = 0, iMath = 0, iTotal = 0;
	//�Ҽ����ڸ��� ���� float�� ���, .f�� �Ҽ��� �ڸ��� 0�� �����Ҽ� �ִ�.
	float fAvg = 0.f;

	std::cout << "<========�л��������α׷�=========>" << std::endl;
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

	
	std::cout << "<========�л��������α׷�=========>" << std::endl;

	//�������� �Է¹޾Ƽ� ��³����� ���ֱ� 
	//��Ż,��� ��³������ϱ�
	//90 �̻� A���� , 80~90 B 70~80 C, �����ϴ� F 



	return 0;
}