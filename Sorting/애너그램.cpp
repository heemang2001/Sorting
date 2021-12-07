#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int T;

int main()
{
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string Answer;
		string sTemp1;
		string sTemp2;

		cin >> sTemp1 >> sTemp2;

		string sTemp3(sTemp1);
		string sTemp4(sTemp2);

		sort(sTemp1.begin(), sTemp1.end());
		sort(sTemp2.begin(), sTemp2.end());

		if (sTemp1 == sTemp2)
		{
			Answer = sTemp3 + " & " + sTemp4 + " are " + "anagrams.";
		}

		else
		{
			Answer = sTemp3 + " & " + sTemp4 + " are NOT " + "anagrams.";
		}

		cout << Answer << '\n';
	}

	return 0;
}