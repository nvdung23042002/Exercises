
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1;
	string s2;
	cin >> s1 >> s2;
	int num = 0;
	int cmp = strcmp(s1.c_str(), s2.c_str());
	if (cmp > 0)
		return 0;

	else
	{
		int s1_length = 0;
		
		for (int i = 0; i < s2.size(); i++)
		{
			if (s2[i] == s1[s1_length])
			{
				s1_length++;
				cout << s1_length << endl;
				if (s1_length + 1 == s1.size())
				{
					num++;
					s1_length = 0;
				}
			}
			else
				s1_length = 0;
		}
	}
	cout << num;
	return 0;
}
