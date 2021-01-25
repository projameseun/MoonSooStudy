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

        std::cout << "=========��������������==========" << std::endl;
        std::cout << "1.����" << std::endl;
        std::cout << "2.����" << std::endl;
        std::cout << "3.��" << std::endl;
        std::cout << "4. ����" << std::endl;
        std::cout << "�÷��̾� ���� :" << std::endl;


        std::cin >> iPlayer;



        if (iPlayer < SRP_S && iPlayer > NUM_4)
        {
            std::cout << "�߸� �Ǿ����ϴ�." << std::endl;
            system("pause");

            continue;     //��� �÷��� �Ҽ��ְ� ���ִ�//
        }
        else if (iPlayer == SRP_Exit)
            break;

        iAI = rand() % 3 + SRP_S;  // %3 �� �����Ƿν� 0~4������ �������ְ� + srp_p �� 3�� ��Ÿ����.
        std::cout << "AI: ���:" << iAI << std::endl;

        switch (iAI)

        {
        case SRP_S:
            std::cout << " ��� : ���� " << std::endl;
            break;
        case SRP_R:
            std::cout << " ��� : ���� " << std::endl;
            break;
        case SRP_P:
            std::cout << " ��� : �� " << std::endl;
            break;
        }

        int iWin = iPlayer - iAI;

        

        if (iWin == 1 || iWin == -2)
            std::cout << " �¸� " << std::endl;

        else if (iWin == 0)
            std::cout << " ��ο� " << std::endl;

        else
            std::cout << " �й� " << std::endl;

        std::cout << "=========================" << std::endl;

        system("pause");



    }


    return 0;
}