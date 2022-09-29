#include <iostream>
#include <numeric>
using namespace std;
bool checkSum(int sumLeft[], int k)
{
    int r = true;
    for (int i = 0; i < k; i++)
    {
        if (sumLeft[i] != 0) {
            r = false;
        }
    }
    return r;
}
bool subsetSum(int S[], int n, int sumLeft[], int A[], int k)
{
    if (checkSum(sumLeft, k)) {
        return true;
    }
    if (n < 0) {
        return false;
    }
    bool result = false;
    for (int i = 0; i < k; i++)
    {
        if (!result && (sumLeft[i] - S[n]) >= 0)
        {
            A[n] = i + 1;
            sumLeft[i] = sumLeft[i] - S[n];
            result = subsetSum(S, n - 1, sumLeft, A, k);
            sumLeft[i] = sumLeft[i] + S[n];
        }
    }
    return result;
}
void partition(int S[], int n, int k)
{
    if (n < k)
    {
        cout << "k-partition of set S is not possible";
        return;
    }
    int sum = accumulate(S, S + n, 0);
    int A[n], sumLeft[k];
    for (int i = 0; i < k; i++) {
        sumLeft[i] = sum/k;
    }
    bool result = !(sum % k) && subsetSum(S, n - 1, sumLeft, A, k);
    if (!result)
    {
        cout << "k-partition of set S is not possible";
        return;
    }
    for (int i = 0; i < k; i++)
    {
        cout << "Partition " << i+1 << " is ";
        for (int j = 0; j < n; j++)
        {
            if (A[j] == i + 1) {
                cout << S[j] << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int S[] = { 7, 3, 5, 12, 2, 1, 5, 3, 8, 4, 6, 4 };
    int n = sizeof(S) / sizeof(S[0]);
    int k = 6;
    partition(S, n, k);
    return 0;
}
