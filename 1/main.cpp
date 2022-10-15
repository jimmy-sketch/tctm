#include<iostream>
#include<algorithm>
using namespace std;

int a[1001];

int main()
{
	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
		a[i] = a[i - 1] + a[i];
	for (int i = 1; i <= m; i++)
	{
		int l, r;
		cin >> l >> r;
		cout << a[r] - a[l - 1] << endl;
	}
	return 0;
}