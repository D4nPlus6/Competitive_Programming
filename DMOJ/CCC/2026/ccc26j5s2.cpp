// Problem J5/S2: Beams of Light
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef pair<int,int> pi;
typedef set<pi> sii;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);

    int N, L, Q; cin >> N >> L >> Q;
    vi markedRanges(N+2);
    vb illuminated(N+2,false);
    int l,r;
    for (int _ = 0; _ < L; _++) {
        cin >> l >> r;
        int left = max(1,l-r);
        markedRanges[left]++;

        int right = min(N+1,l+r+1);
        markedRanges[right]--;
    }

    int ct = 0;
    for (int i = 1; i <= N; i++) {
        ct += markedRanges[i];
        if (ct > 0) illuminated[i] = true;
    }
    
    int q;
    for (int _ = 0; _ < Q; _++) {
        cin >> q;
        if (illuminated[q]) cout << "Y\n";
        else cout << "N\n";
    }


    // vc markedRanges(N+2);
    // vb illuminated(N+2,false);
    // int l,r;
    // for (int _ = 0; _ < L; _++) {
    //     cin >> l >> r;
    //     if (r) {
    //     // left placement
    //     int left = max(1,l-r);
    //         if (markedRanges[left] != 'r') markedRanges[left] = 'l';
    //         if (markedRanges[left] == 'r') markedRanges[left] = 0;
    //         else markedRanges[left] = 'l';
            

    //     // right placement
    //     int right = min(N+1,l+r+1);
    //         if (markedRanges[right] != 'l') markedRanges[right] = 'r';
    //         if (markedRanges[right] == 'l') markedRanges[right] = 0;
    //         else markedRanges[right] = 'r';
    //     } else {
    //         if (markedRanges[l] != 'r' && markedRanges[l] != 'l') markedRanges[l];
    //     }
    // }

    // int ct = 0;
    // bool active = false;
    // for (int i = 1; i <= N; i++) {
    //     if (!active) {
    //         if (markedRanges[i] < 0) {active = true; illuminated[i] = true;}
    //         ct += markedRanges[i];
    //     } else {
            
    //         // if (markedRanges[i] == 'l') ignoreCnt++;
    //         // else if (markedRanges[i] == 'r' && ignoreCnt) ignoreCnt--;
    //         // else if (markedRanges[i] == 'r' && !ignoreCnt) active = false;
    //         illuminated[i] = true;
    //     }
    // }

    // int q;
    // for (int _ = 0; _ < Q; _++) {
    //     cin >> q;
    //     if (illuminated[q]) cout << "Y\n";
    //     else cout << "N\n";
    // }



    // vb illuminated(N+1,false);
    // int l,r;
    // for (int _ = 0; _ < L; _++) {
    //     cin >> l >> r;
    //     for (int i = max(0,l-r); i <= min(N,l+r); i++) illuminated[i] = true;
    // }

    // int q;
    // for (int _ = 0; _ < Q; _++) {
    //     cin >> q;
    //     if (illuminated[q]) cout << "Y\n";
    //     else cout << "N\n";
    // }



    // sii illuminated;
    // int light,range;
    // for (int _ = 0; _ < L; _++) {
    //     cin >> light >> range;
    //     illuminated.emplace(pi({light-range,light+range}));
    // }

    // int l;
    // for (int _ = 0; _ < Q; _++) {
    //     cin >> l;
    //     bool found = false;
    //     for (auto p: illuminated) {
    //         if (p.first <= l && l <= p.second) {cout << "Y" << endl; found = true; break;}
    //     }
    //     if (!found) cout << "N" << endl;
    // }

    
    return 0;
}


