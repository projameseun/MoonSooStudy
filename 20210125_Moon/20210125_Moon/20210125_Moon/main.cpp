#include <iostream>
#include <time.h>

#define NUM_4   4

using namespace std;

enum NUM
{
    NUM_0,
    NUM_1,
    NUM_2,
    NUM_3
};



enum class SRP2
{
    SRP_S = 1,
    SRP_R,
    SRP_P,
    SRP_Exit
};

enum SRP
{
    SRP_S = 1,
    SRP_R,
    SRP_P,
    SRP_Exit
};
int main()
{

    int iPlayer, iAI = 0;

    srand((unsigned int)time(0));
    rand();

    while (true)
    {
       system("cls");

        std::cout << "=========가위바위보게임==========" << std::endl;
        std::cout << "1.가위" << std::endl;
        std::cout << "2.바위" << std::endl;
        std::cout << "3.보" << std::endl;
        std::cout << "4. 종료" << std::endl;
        std::cout << "플레이어 선택 :" << std::endl;


        std::cin >> iPlayer;



        if (iPlayer < SRP_S && iPlayer > NUM_4)
        {
            std::cout << "잘못 되었습니다." << std::endl;
            system("pause");

            continue;     //계속 플래이 할수있게 해주는//
        }
        else if (iPlayer == SRP_Exit)
            break;

        iAI = rand() % 3 + SRP_S;  // %3 을 넣으므로써 0~4까지만 얻을수있고 + srp_p 는 3을 나타낸다.
        std::cout << "AI: 결과:" << iAI << std::endl;

        switch (iAI)

        {
        case SRP_S:
            std::cout << " 상대 : 가위 " << std::endl;
            break;
        case SRP_R:
            std::cout << " 상대 : 바위 " << std::endl;
            break;
        case SRP_P:
            std::cout << " 상대 : 보 " << std::endl;
            break;
        }

        int iWin = iPlayer - iAI;

        

        if (iWin == 1 || iWin == -2)
            std::cout << " 승리 " << std::endl;

        else if (iWin == 0)
            std::cout << " 드로우 " << std::endl;

        else
            std::cout << " 패배 " << std::endl;

        std::cout << "=========================" << std::endl;

        system("pause");



    }


    return 0;
}