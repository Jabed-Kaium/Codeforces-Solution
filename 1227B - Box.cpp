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
		int n;
		bool flag = true;
		cin >> n;
		int ans[n + 1];
		int a;
		for (int i = 1; i <= n; i++)
			ans[i] = i;
		for (int i = 1; i <= n; i++) {
			cin >> a;
			if (a < i)
				flag = false;
			if (a > i)
				swap(ans[i], ans[a]);
		}
		if (!flag) {
			cout << "-1\n";
			continue;
		}
		for (int i = 1; i <= n; i++)
			cout << ans[i] << " ";
		cout << "\n";
	}

	return 0;
}