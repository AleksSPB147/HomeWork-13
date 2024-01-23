#include <iostream>
#include <iomanip>

using namespace std;








int main()
{
	setlocale(LC_ALL, "RU");
	int task = 0;
	cout << "Введите номер задания: " << endl;
	cin >> task;
	switch (task)
	{
	case 1:

	{ /*Напишите программу, которая  будет запрашивать ввод числа
		в десятичной системе счисления и выводить введенное число
		в восьмеричной и шестнадцатеричной системе счисления, в разных строках.
		Для организации ввода, вывода используйте операторы(cin, cout)*/

		cout << "Задание № 1" << endl;
		cout << "Введите число" << endl;
		int n = 5;
		
		//cin >> n;
		cout << "10: " << n << endl
			<< "8: " << oct << n << endl
			<< "16: " << hex << n << endl;



	    
	
	break;
	}
	case 2:
	{   cout << "Задание № 2" << endl;

	
	break;
	}

	case 3:
	{
		cout << "Задание № 3" << endl;
		
		break;
	}


	default:
		cout << "Нет такого задания!";
		break;
	}

	return 0;
}
