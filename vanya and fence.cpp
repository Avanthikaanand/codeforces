#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	int k = 0;
	int s = 0;
	cin >> n >> k;
	if (n == 0) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		(x <= k) ? s++ : s+= 2;
	}
	cout << s;
	return 0;
}
