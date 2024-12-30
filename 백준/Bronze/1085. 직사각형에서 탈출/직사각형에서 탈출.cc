#include <iostream>

using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int minW = w - x < x ? w - x : x;
	int minH = h - y < y ? h - y : y;

	cout << (minW < minH ? minW : minH) ;
}

