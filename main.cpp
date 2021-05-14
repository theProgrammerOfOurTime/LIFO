#include <iostream>
#include "LIFO_list.h"
#include "LIFO_mas.h"

using namespace std;

int main()
{
	LIFO_list<int> s;
	int numberOfNumbers;
	cin >> numberOfNumbers;
	for (int i = 0; i < numberOfNumbers; i++)
	{
		s.push(i);
	}
	while (!s.empty())
	{
		cout << s.pop() << " ";
	}
	cout << endl;

	LIFO_mas<int> s1;
	for (int i = 0; i < numberOfNumbers; i++)
	{
		s1.push(i);
	}
	while (!s1.empty())
	{
		cout << s1.pop() << " ";
	}

	return 0;
}