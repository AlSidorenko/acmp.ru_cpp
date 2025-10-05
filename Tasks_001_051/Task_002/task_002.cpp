/*
* Требуется посчитать сумму целых чисел, расположенных между числами 1 и N включительно.

 Входные данные
 В единственной строке входного файла INPUT.TXT записано единственное целое число N,
 не превышающее по абсолютной величине 10^4.

 Выходные данные
 В единственную строку выходного файла OUTPUT.TXT нужно вывести одно целое число — сумму чисел,
 расположенных между 1 и N включительно.

 Пример
 №	INPUT.TXT	OUTPUT.TXT
 1	5	        15
 */

#include <fstream>
using namespace std;

int main() {
    ifstream input("D:/JetBrains/CLionProject/Cpp/Tests_Interview_cpp/acmp.ru_cpp/Tasks_001_051/Task_002/INPUT.TXT");
    ofstream output("D:/JetBrains/CLionProject/Cpp/Tests_Interview_cpp/acmp.ru_cpp/Tasks_001_051/Task_002/OUTPUT.TXT");

    int n;
    input >> n;

    // Используем формулу арифметической прогрессии
    // Сумма чисел от 1 до n: n*(n+1)/2
    // Но учитываем, что n может быть отрицательным

    int sum;
    if (n >= 1) {
        // Если n положительное, сумма от 1 до n
        sum = n * (n + 1) / 2;
    } else {
        // Если n отрицательное, сумма от n до 1
        // что эквивалентно сумме от 1 до |n| с противоположным знаком
        sum = n * (n - 1) / (-2) + 1;
        // Альтернативный способ:
        // sum = 1 + n * (1 - n) / 2;
    }

    output << sum;

    return 0;
}