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

// int dx[] = { -1 , 0 , 1 , 0};
// int dy[] = {0 , 1 , 0 , -1};

// //for chess knight move
// int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2};
// int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

int main()
{
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	fastio

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> vec(n), vecc(n);

		for (int i = 0; i < n; i++)cin >> vec[i];

		for (int i = 0; i < n; i++)cin >> vecc[i];

		sort(vec.begin(), vec.end());

		sort(vecc.begin(), vecc.end());

		for (auto p : vec) {
			cout << p << " ";
		}
		cout << "\n";
		for (auto p : vecc) {
			cout << p << " ";
		}
		cout << "\n";
	}

	return 0;
}