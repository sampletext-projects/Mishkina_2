#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "Автор: Мишкина Елизавета Дмитриевна, УМЛ-111\n";

	int k;
	do
	{
		int d1, d2, d3, d4;
		cout << "Введите числа через пробел: ";
		cin >> d1 >> d2 >> d3 >> d4;

		if (d4 - d3 == d3 - d2 && d3 - d2 == d2 - d1)
		{
			cout << d1 << " " << d2 << " " << d3 << " " << d4 << " - арифметическая прогрессия.\n";
		}
		else
		{
			cout << d1 << " " << d2 << " " << d3 << " " << d4 << " - не арифметическая прогрессия.\n";
		}

		cout << "Повторить ввод (1)?: ";
		cin >> k;
	}
	while (k == 1);

	system("pause");

	return 0;
}
