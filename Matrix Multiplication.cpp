#include <iostream>
using namespace std;

void multiplyMatrices(int (*A)[10], int (*B)[10], int (*C)[10], int m, int n, int p)
{
    // Initialize matrix C with zeros
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            C[i][j] = 0;
        }
    }

    //  multiplication
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int m, n, p;
    cout << "Enter the dimensions (m, n, p) for matrices A (m x n) and B (n x p): ";
    cin >> m >> n >> p;

    int A[10][10], B[10][10], C[10][10];

    cout << "Enter elements for matrix A:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements for matrix B:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> B[i][j];
        }
    }

    // Call the multiplyMatrices
    multiplyMatrices(A, B, C, m, n, p);

    // Output result matrix C
    cout << "Resulting matrix C:" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
