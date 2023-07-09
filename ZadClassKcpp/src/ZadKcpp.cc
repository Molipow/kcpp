#include <iostream>
#include "../include/ZadKcpp.h"
#include "../include/ZadFunc.h"
#include "../include/ZadIO.h"

void ZadKcpp::menu()
{   
    Functions fun = Functions();
    Inpout io = Inpout();
    int choice;
    do
    {
        std::cout << "1 - Dzial 2. Zwracanie przez funkcje" << std::endl;
        std::cout << "2 - Dzial 4. Operacje wejscia/wyjscia" << std::endl;
        std::cout << "0 - Wyjscie" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "1 - 2.1 ZadZwracanie" << std::endl;
            std::cout << "2 - 2.2 ZadPrzekazywanieTablic" << std::endl;

            std::cin >> choice;
            if(choice == 1) fun.first();
            else if (choice == 2) fun.second();
            else std::cout << "Zly wybor, sprobuj ponownie" << std::endl;
            break;
        case 2:
            std::cout << "1 - 4.0 LStringStream" << std::endl;
            std::cout << "2 - 4.1 LManipulacjaStrumieniemCout" << std::endl;
            std::cout << "3 - 4.2 ZadCinCoutFile" << std::endl;

            std::cin >> choice;
            if(choice == 1) io.first();
            else if (choice == 2) io.second();
            else if (choice == 3) io.third();
            else std::cout << "Zly wybor, sprobuj ponownie" << std::endl;
            break;
        case 0:
            std::cout << "Wyjscie z programu" << std::endl;
            break;
        default:
            std::cout << "Zly wybor, sprobuj ponownie" << std::endl;
            break;
        }
    } while (choice != 0);
    
}