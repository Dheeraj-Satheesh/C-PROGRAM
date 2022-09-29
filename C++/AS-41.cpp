#include <iostream>
using namespace std;
class matrix
{
public:
    int m,n,p[10][10];
    matrix ()
    {
        cin >>m;
        cin >>n;
    }
    void get();
    void display();
    void operator +(matrix a);
    void operator -(matrix a);
};
void matrix::get ()
{
    for (int i=0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> p[i][j];
        }
    }
}
void matrix::display ()
{
    cout << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << p[i][j] <<" ";
        }
        cout <<" ";
    }
}
void matrix::operator + (matrix a)
{
    int mat[m][n];
    for (int i=0; i<m; i++)
    {
        for (int j= 0; j<n; j++)
        {
            mat[i][j]=p[i][j]+a.p[i][j];
        }
    }
    for (int i = 0; i<m; i++)
    {
        cout <<"";
        for (int j = 0; j <n; j++)
        {
            cout << mat[i][j]<<" ";
        }
        cout <<"\n";
    }
}
void matrix::operator -(matrix a)
{
    int mat[m][n];
    for (int i = 0; i<m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            mat[i][j] = p[i][j] - a.p[i][j];
        }
    }
    for (int i = 0; i<m; i++)
    {
        cout <<"";
        for (int j = 0; j<n; j++)
        {
            cout << mat[i][j] <<" ";
        }
        cout <<"\n";
    }
}
int main()
{
    matrix A;
    A.get();
    matrix B;
    B.get();
    char opt;
    cin >>opt;
    if (opt== '+')
    {
        A+B;
    }
    else
    {
        A-B;
    }
    return 0;
}
