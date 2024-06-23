#include <iostream>
using namespace std;

int arr[100001];
int prefixSum[100001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    for (int i = 0; i < m; ++i) {
        int k, n;
        cin >> k >> n;
        cout << prefixSum[n] - prefixSum[k - 1] << '\n';
    }
    
    return 0;
}
