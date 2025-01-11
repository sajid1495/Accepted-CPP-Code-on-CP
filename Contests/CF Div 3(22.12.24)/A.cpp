#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        // Input the test case
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        long long total_sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            total_sum += a[i];
        }

        // Sort the array to enable two-pointer technique
        sort(a.begin(), a.end());

        long long interesting_pairs = 0;

        // Use two-pointer technique to find valid pairs
        for (int i = 0; i < n - 1; ++i) {
            long long target_min = total_sum - a[i] - y;
            long long target_max = total_sum - a[i] - x;

            // Find the range of valid j indices using binary search
            auto lower = lower_bound(a.begin() + i + 1, a.end(), target_min);
            auto upper = upper_bound(a.begin() + i + 1, a.end(), target_max);

            interesting_pairs += (upper - lower);
        }

        // Output the result for this test case
        cout << interesting_pairs << '\n';
    }

    return 0;
}
