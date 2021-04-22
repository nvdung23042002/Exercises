// test pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>

using namespace std;

int dice(vector <int> &mem1,vector <int> &mem2)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	srand(time(0));
	while (sum1 <= 100 and sum2 <= 100)
	{
		int num1 = rand() % 6 + 1;
		mem1.push_back(num1);
		sum1 = sum1 + num1;

		int num2 = rand() % 6 + 1;
		mem2.push_back(num2);
		sum2 = sum2 + num2;
	}
	cout << sum1 << endl;
	cout << sum2 << endl;
	if (sum1 >= 100)
		return mem1.size();
	if (sum2 >= 100)
		return mem2.size();

}
int main()
{
	vector <int> mem1;
	vector <int> mem2;
	int n = dice(mem1, mem2);
	cout << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << mem1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << mem2[i] << " ";
	}
}

