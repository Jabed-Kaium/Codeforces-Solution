#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define clr(a) memset(a,0,sizeof(a))
#define reset(a) memset(a,-1,sizeof(a))
#define mod 1000000007
#define pi acos(-1)
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);

// ll dx[] = { -1 , 0 , 1 , 0};
// ll dy[] = {0 , 1 , 0 , -1};

// //for chess knight move
// ll dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// ll dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	fastio

	int t;
	cin >> t;
	while (t--)
	{
		int n, flag = 0;
		cin >> n;
		vector<int> v(n + 1);
		for (int i = 1; i <= n; i++)
			cin >> v[i];
		for (int i = 1; i <= n - 1; i++)
		{
			if (abs(v[i] - v[i + 1]) >= 2)
			{
				cout << "YES\n";
				cout << i << " " << i + 1 << "\n";
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			cout << "NO\n";
	}

	return 0;
}