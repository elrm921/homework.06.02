#include <iostream>
#include "counter.h"

int main() {
    CounterClass::Counter cnt;
    std::string use_value;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> use_value;

    if (use_value == "да") {
        int value = 0;
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> value;
        cnt = CounterClass::Counter(value);
    }
    else if (use_value == "нет") {
        std::cout << "Начальное значение счётчика: 0\n";
    }

    char cm = 0;
    while (cm != 'x') {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> cm;
        if (cm == '+') {
            cnt.inc();
        }
        else if (cm == '-') {
            cnt.dec();
        }
        else if (cm == '=') {
            std::cout << cnt.get() << "\n";
        }
        else if (cm == 'x') {
            std::cout << "До свидания!\n";
            break;
        }
        else {
            std::cout << "Неправильный ввод\n";
        }
    }

    return 0;
}