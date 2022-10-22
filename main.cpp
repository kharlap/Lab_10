#include <iostream>

using namespace std;

int main()
{
    int N, sum, k;
    cout << "razmer:";
    cin >> N;
    int* A = new int[N];
    cout << "elementi:" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        if (A[i] > 0)
            k = i;
    }
    sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += A[i];
    }
    cout << "Summa: " << sum << endl;
    delete[] A;
    return 0;
}
