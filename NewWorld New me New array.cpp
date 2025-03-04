#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>
using namespace std;

vector<int> min_operations_to_sum(int t, const vector<tuple<int, int, int>>& test_cases) {
    vector<int> results;

    for (size_t i = 0; i < test_cases.size(); ++i) {
        int n, k, p;
        tie(n, k, p) = test_cases[i];

        int min_sum = n * (-p);
        int max_sum = n * p;

        if (k < min_sum || k > max_sum) {
            results.push_back(-1);
            continue;
        }


        int min_ops = (abs(k) + p - 1) / p;
        results.push_back(min_ops);
    }

    return results;
}

int main() {
    int t;
    cin >> t;
    vector<tuple<int, int, int>> test_cases;

    for (int i = 0; i < t; ++i) {
        int n, k, p;
        cin >> n >> k >> p;
        test_cases.emplace_back(n, k, p);
    }

    vector<int> results = min_operations_to_sum(t, test_cases);

    for (int res : results) {
        cout << res << endl;
    }

    return 0;
}
