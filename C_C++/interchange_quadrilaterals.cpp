#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int N;
    cin >> N;
    int mat1[N][N] = {0}, mat2[N][N] = {0};
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) cin >> mat1[i][j];
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) cin >> mat2[i][j];
    for(int i = 0; i < N/2; i++) for(int j = N-1; j >= N/2; j--) swap(mat1[i][j],mat2[i][j]);
    for(int i = N/2; i < N; i++) for(int j = 0; j < N/2; j++) swap(mat1[i][j], mat2[i][j]);
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++) cout << mat1[i][j] << " ";
        cout << endl;
    }
    cout << endl;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++) cout << mat2[i][j] << " ";
        cout << endl;
    }
    
    return 0;
}
