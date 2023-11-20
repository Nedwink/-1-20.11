#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(0, "");

    const int size = 10;
    int i = 0, j = 0;

    for (i = 1; i <= size; i++)
    {
        cout << endl << setw(7);
        for (j = 1; j <= size; j++)
            cout << setw(3) << i * j << " ";
        cout << endl;
    }

    cout << endl;

    cout << "Введите чилса которые нужно умножить" << endl;

    int num, num1;
    cin >> num >> num1;

    int res;
    cout << "Введите правильный ответ: " << endl;
    cin >> res;
    if (res == num * num1) {
        cout << "Ответ правильный";
    }
    else
    {
        cout << "Ответ неправильный" << endl; 
        cout << "Правильный ответ: " << num * num1 <<endl;
    }

	return 0;
}


