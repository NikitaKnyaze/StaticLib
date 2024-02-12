// ClientGreet.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Greetings.h"
#include <windows.h>

int main()
{
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);

   std::string name;
   NewGreetings::Greeter Client;

    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << Client.greet(name) << "\n";
    system(" pause");
}

