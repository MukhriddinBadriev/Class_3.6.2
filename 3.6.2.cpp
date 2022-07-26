﻿#include <iostream>
#include "counter.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    string answer;
    string comand;
    cout << "Вы хотите указать начальное значение счётчика? Введите yes или no: ";
    cin >> answer;
    if (answer == "yes") {
        int number = 0;
        cout << "Введите начальное значение счётчика: ";
        cin >> number;
        Counter S1(number);
        while (comand != "x") {
            cout << "Введите команду('+', '-', '=' или 'x') :";
            cin >> comand;
            if (comand == "+") {
                S1.plus();
            }
            else if (comand == "-") {
                S1.minus();
            }
            else if (comand == "=") {
                cout << S1.present_value() << endl;
            }
            else if (comand == "x") {
                cout << "До свидания!"; break;
            }
            comand = "";
        }
    }
    else if (answer == "no") {
        Counter S2;
        while (comand != "x") {
            cout << "Введите команду('+', '-', '=' или 'x') :";
            cin >> comand;
            if (comand == "+") {
                S2.plus();
            }
            else if (comand == "-") {
                S2.minus();
            }
            else if (comand == "=") {
                cout << S2.present_value() << endl;
            }
            else if (comand == "x") {
                cout << "До свидания!"; break;
            }
            comand = "";
        }
    }
    return 0;
}