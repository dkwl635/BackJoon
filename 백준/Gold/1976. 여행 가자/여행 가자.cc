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

bool IsUnion(int x, int y)
{
	x = FindParent(x);
	y = FindParent(y);
	if (x == y)
	{
		return true;
	}
	else
	{
		return false;
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

	for (int i = 1 ;i <= n; i++)
	{
		int x = i;
		for (int j = 1; j <= n; j++)
		{
			int y = j;
			
			int k;
			cin >> k;

			if (k == 1)
			{
				UnionParent(x, y);
			}
		}
	}

	int a, b;
	cin >> a;
	bool Success = true;
	for (int i = 1; i < m; i++)
	{
		
		cin >> b;
		Success = IsUnion(a, b);
		a = b;

		if (!Success) break;
	}

	if (Success) cout << "YES";
	else cout << "NO";

	return 0;
}
