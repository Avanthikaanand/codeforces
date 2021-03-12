#include <iostream>
using namespace std;
bool distinctDigits(int n) {
	int a = n % 10;
	n /= 10;
	int b = n % 10;
	n /= 10;
	int c = n % 10;
	n /= 10;
	int d = n;
	if(a == b || a == c || a == d || b == c || b == d || c == d)
		return false;
	return true;
}
 
void beautiful_Year() {
	int x;
	cin >> x;
	for (int i = x + 1; i <= 10000; i++) {
		if (distinctDigits(i)) {
			cout << i;
			return;
		}
	}
	return;
}
int main()
{
beautiful_Year();
return 0;
}
