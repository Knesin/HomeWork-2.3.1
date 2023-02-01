#include <iostream>

class Calculator {
public:
    double add() { return num1 + num2; }
    double multiply() { return num1 * num2; }
    double subtract_1_2() { return num1 - num2; }
    double subtract_2_1() { return num2 - num1; }
    double divide_1_2() { return num1 / num2; }
    double divide_2_1() { return num2 / num1; }
    bool set_num1(double num1);
    bool set_num2(double num2);
private:
    double num1;
    double num2;
};

bool Calculator::set_num1(double num1) {
    if (num1 == 0)
        return false;
    else {
        this->num1 = num1;
        return true;
    }
};

bool Calculator::set_num2(double num2) {
    if (num2 == 0)
        return false;
    else {
        this->num2 = num2;
        return true;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Calculator my_class;
    int tmp1 = 0;
    int tmp2 = 0;

    while (true){
        while (true){
            std::cout << "Введите num1 : ";
            std::cin >> tmp1;
            if (my_class.set_num1(tmp1))
                break;
            else
                std::cout << "Неверный ввод!" << std::endl;;
        };
        while (true) {
            std::cout << "Введите num2 : ";
            std::cin >> tmp2;
            if (my_class.set_num2(tmp2))
                break;
            else
                std::cout << "Неверный ввод!" << std::endl;;
        };
        std::cout << "num1 + num2 = " << my_class.add() << std::endl;
        std::cout << "num1 - num2 = " << my_class.subtract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << my_class.subtract_2_1() << std::endl;
        std::cout << "num1 * num2 = " << my_class.multiply() << std::endl;
        std::cout << "num1 / num2 = " << my_class.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << my_class.divide_2_1() << std::endl;
    };
}
   