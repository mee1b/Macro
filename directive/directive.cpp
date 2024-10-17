#include <iostream>

#define MODE 1

#if MODE == 1
static void add(int one, int two)
{
    std::cout << "Результат сложения: " << one + two << std::endl;
}
#endif

int main()
{
    setlocale(LC_ALL, "rus");
    int one{}, two{};

#ifndef MODE
    std::cout << "Определите MODE!";
    return EXIT_FAILURE;
#endif

#if MODE == 0
    std::cout << "Работаю в режиме тренировки";
    return EXIT_SUCCESS;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме\n";
    std::cout << "Введите число 1: ";
    std::cin >> one;
    std::cout << "Введите число 2: ";
    std::cin >> two;
    add(one, two);
#else
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    return EXIT_FAILURE;
#endif
    return EXIT_SUCCESS;
}

