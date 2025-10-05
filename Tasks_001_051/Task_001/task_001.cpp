/*
* Требуется сложить два целых числа А и В.

 Входные данные
 В единственной строке входного файла INPUT.TXT записаны два натуральных числа через пробел.
 Значения чисел не превышают 10^9.

 Выходные данные
 В единственную строку выходного файла OUTPUT.TXT нужно вывести одно целое число — сумму чисел А и В.

 Пример
 №	INPUT.TXT	OUTPUT.TXT
 1	 2 3	    5
 */

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Указываем полные пути к файлам
    string input_path =  "D:/JetBrains/CLionProject/Cpp/Tests_Interview_cpp/acmp.ru_cpp/INPUT.TXT";
    string output_path = "D:/JetBrains/CLionProject/Cpp/Tests_Interview_cpp/acmp.ru_cpp/OUTPUT.TXT";

    ifstream input(input_path);
    ofstream output(output_path);

    if (!input.is_open()) {
        cout << "Ошибка: не удалось открыть " << input_path << endl;
        return 1;
    }

    long long a, b;
    input >> a >> b;
    output << a + b;

    cout << "Сумма " << a << " + " << b << " = " << a + b << endl;

    return 0;
}