#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n, k, sum = 0;
    cin >> n >> k;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < A.size(); i++) {
        if (A[i] >= A[k-1] && A[i] > 0) {
            sum++;
        }
    }
    
    cout << sum << endl;

    return 0;
}