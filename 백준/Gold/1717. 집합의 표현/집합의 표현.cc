#include <iostream>
#include <vector>

using namespace std;

vector<int> parent, rankArr;
int FindParent(int x)
{
	if (parent[x] == x) return x;

	return parent[x] = FindParent(parent[x]);
}

void UnionParent(int x , int y)
{
	x = FindParent(x);
	y = FindParent(y);

	if (x == y) return;

	if (x > y)
	{
		parent[x] = y;
	}
	else
	{
		parent[y] = x;
	}
}

void IsUnion(int x, int y)
{
	x = FindParent(x);
	y = FindParent(y);
	if (x == y)
	{
		cout << "yes\n";
	}
	else
	{
		cout << "no\n";
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m;
	cin >> n >> m;
	
	parent = vector<int>(n + 1);
	for (int i = 0; i < parent.size(); i++) { parent[i] = i; }

	int k, a, b;
	for (int i = 0; i < m; i++)
	{
		cin >> k >> a >> b;
	
		if (k == 0)
		{
			UnionParent(a, b);
		}
		else if (k == 1)
		{
			IsUnion(a, b);
		}

	}


	return 0;
}
