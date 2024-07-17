class Solution {
public:
    long long findMinDiff(vector<long long> a, long long n, long long m) {
        // Sort the array
        sort(a.begin(), a.end());

        // Initialize the minimum difference as a large number
        long long min_diff = LLONG_MAX;

        // Iterate through the array and find the minimum difference
        for (long long i = 0; i <= n - m; i++) {
            long long diff = a[i + m - 1] - a[i];
            if (diff < min_diff) {
                min_diff = diff;
            }
        }

        // Return the minimum difference
        return min_diff;
    }
};