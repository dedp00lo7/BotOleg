#include <iostream>
#include <string>
#include <math.h>
#include <clocale>

using namespace std;

// Выбор типа функции
char choiceTypeAll()
{
	cout << "Выберите тип функции: \n1) Линейная функция\n2) Квадратичная функция\n3) Дробно-линейная функция" << endl;
	char functType = 0;
	cin >> functType;
	return functType;
}

// Линейная функция
//=================================================================================================================================

// Тип линейной функции 
char choiceTypeLinear()
{
	cout << "\nВыберите тип линейной функции:\n1) y = mx + n\n2) y = mx" << endl;
	char linearFunctType = 0;
	cin >> linearFunctType;
	return linearFunctType;
}

// Ввод и обработка введённых данных

// 1 Тип
double linearType1()
{
	cout << "Введите формулу вашей функции: ";
	char symbolY = 0, symbolEqual = 0;
	string m_x;
	char oper = 0;
	double coef_N;
	double m_num = 0.0;
	cin >> symbolY >> symbolEqual >> m_x >> oper >> coef_N;
	if (m_x.size() == 1)
	{
		m_num = 1;
	}
	else if (m_x.size() == 2 && m_x[0] == '-')
	{
		m_num = -1;
	}
	else
	{
		m_x.pop_back();
		m_num = atof(m_x.c_str());
	}
	if (oper == '-')
	{
		coef_N = -coef_N;
	}
	double m_and_n[2] = { m_num, coef_N };
}


int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Добрейшего времени суток. Я бот Олег. Я был создан для работы с математическими действиями.";
	bool start = true;

	return 0;
}