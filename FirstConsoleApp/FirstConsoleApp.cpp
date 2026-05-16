// FirstConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Copyright UmeshTM.All rights reserved.

#include <iostream>

int main()
{
    int num;
    std::cout << "Enter the number : " << std::endl;
    std::cin >> num;
    int rev = 0;
    int ori_Num = num;
    int dig = 0;
    while (num != 0) {
        dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;
    }
    if (num == ori_Num) {
        std::cout << "it is a pallandrom " << std::endl;
        std::cout << ori_Num << num;
    }
    else
    {
        std::cout << "Not a pallandrom :" << ori_Num;
    }

    std::cout << "Hello World!\n";
    std::cout << "This is the first edit. " << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
