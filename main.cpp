#include <iostream>
using namespace std;
//slave
int main()
{
    setlocale(0,"");
    int N, sum, k;
    cout << "������ �������: ";
    cin >> N;
    int* A = new int[N];
    cout << "�������� �������: " << endl;
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
    cout << "�����: " << sum << endl;
    delete[] A;
    return 0;
}
