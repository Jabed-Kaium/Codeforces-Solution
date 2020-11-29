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
		int n, k1, k2;
		cin >> n >> k1 >> k2;
		priority_queue<int> pq, pqq;
		for (int i = 0; i < k1; i++) {
			int x;
			cin >> x;
			pq.push(x);
		}
		for (int i = 0; i < k2; i++) {
			int x;
			cin >> x;
			pqq.push(x);
		}
		while (!pq.empty() && !pqq.empty()) {
			int x = pq.top();
			int y = pqq.top();
			pq.pop();
			pqq.pop();
			if (x > y) {
				pq.push(y);
			}
			else {
				pqq.push(x);
			}
		}

		if (!pq.empty()) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}

	return 0;
}