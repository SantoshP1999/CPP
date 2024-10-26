// Create 3d Array

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n, m;

    int L, B, H;
    int ***ptr = new int **[L];

    // create 2d array
    for (int i = 0; i < L; i++)
    {
        ptr[i] = new int *[B];
        for (int j = 0; j < B; j++)
        {
            ptr[i][j] = new int[H];
        }
    }

    // Fill the values in Array
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                ptr[i][j][k] == i + j + k;
            }
        }
    }

    // print the values
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                cout << ptr[i][j][k] << " ";
            }
        }
    }

    // Release memory
    //  for (int i = 0; i < n;i++)
    //  {
    //      delete [][] ptr[i][j];
    //  }
    //  delete[] ptr;

    // return 0;
}