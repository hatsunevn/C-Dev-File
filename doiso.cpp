#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	freopen("doiso.inp", "r", stdin);
	freopen("doiso.out", "w", stdout);
	cin >> s;
	cout << s[0];
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] == '9') cout << '0';
		else cout << s[i] - 47;
	}
	return 0;
}