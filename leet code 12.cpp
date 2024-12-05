#include <iostream>
#include <string>
using namespace std;
class solution 
{
public:
	string IntToRoman(int x)
	{
		int n[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
		string s[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
		string roman = "";
		int i = 0;
		while (x > 0)
		{
			if (x>=n[i])
			{
				roman =roman+ s[i];
				x -= n[i];
			}
			else
			{
				i++;
			}
		}
		return roman;
	}
};
int main()
{
	int case1 = 3749;
	int case2 = 58;
	int case3 = 1994;
	solution sol;
	cout << sol.IntToRoman(case1) << endl << sol.IntToRoman(case2) << endl << sol.IntToRoman(case3);
	return 0;
}