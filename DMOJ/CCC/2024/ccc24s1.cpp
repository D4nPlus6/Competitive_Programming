// CCC '24 S1 - Hat Circle
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define endl '\n'
#define PRIMLOOP(N) for (int i = 1; i <= N; i++)


int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int N; cin >> N;
    int dist = N/2;
    vi table(N+1); PRIMLOOP(N) cin >> table[i];

    int res = 0;
    PRIMLOOP(N) {
        int target = (i+dist);
        if (table[i] == table[(target <= N) ? target : target%N]) res++;
    }

    cout << res << endl;

    return 0;
}
