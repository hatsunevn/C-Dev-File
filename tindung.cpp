#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	freopen("tindung.inp", "r", stdin);
	freopen("tindung.out", "w", stdout);
	getline(cin, s);
	int n = s.size();
	if (n < 4) { cout << s; return 0; }
	s.replace(0, n - 4, n + 4, '#');
	cout << s;
	return 0;
}