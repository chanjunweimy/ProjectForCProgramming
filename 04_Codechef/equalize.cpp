//https://www.codechef.com/SNCKFL16/problems/EQUALIZE

#include <bits/stdc++.h>

using namespace std;

const int N = 1005;
int sum[N][N], a[N][N], n, m, q;

bool check(int lim, int r, int c) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            sum[i + 1][j + 1] = (a[i][j] >= lim) +  sum[i + 1][j] + sum[i][j + 1] - sum[i][j];
    for (int i = 0; i <= n - r; ++i)
        for (int j = 0; j <= m - c; ++j) {
            int val = sum[i + r][j + c] - sum[i][j + c] - sum[i + r][j] + sum[i][j];
            if (val > (r * c) / 2)
                return 1;
        }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin >> n >> m >> q;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    while (q--) {
        int r, c;
        cin >> r >> c;
        int bl = -1, br = 1e7 + 7;
        while (bl < br - 1) {
            int bm = bl + br >> 1;
            if (check(bm, r, c))
                bl = bm;
            else
                br = bm;
        }
        cout << bl << '\n';
    }

}
