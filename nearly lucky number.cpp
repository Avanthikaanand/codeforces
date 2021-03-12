#include <iostream>
#include <cstring>
using namespace std;
int main()
{
         
	string s;
	cin >> s;
	int k = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '7' || s[i] == '4')
			k++;
	}
	if (k == 0) {
		cout << "NO";
		return 0;
	}
	if (k < 10) {
		if (k == 7 || k == 4) {
			cout << "YES";
		}
		else cout << "NO";
		return 0;
	}
	while (k) {
		if (k % 10 != 7 || k % 10 != 4) {
			cout << "NO";
			return 0;
		}
		k /= 10;
	}
	cout << "YES";
	return 0;
}
