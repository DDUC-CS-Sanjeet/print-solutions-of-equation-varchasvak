#include <iostream>
using namespace std;
void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    cout << "\n";
}
int sum(int *a, int n)
{
    int i = 0;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
void solve(int *a, int size, int c, int start)
{
    int i = 0;
    if (start < size - 1)
    {
        while (i <= c)
        {
            a[start] = i;
            solve(a, size, c, start + 1);
            i++;
        }
    }
    else
    {
        int i = 0;
        while (i <= c)
        {
            a[start] = i;
            if (sum(a, size) == c)
            {
                print(a, size);
            }
            i++;
        }
    }
}
int main()
{
    int n, c;
    cout << "Enter the value of number of terms(n): ";
    cin >> n;
    cout << "Enter the sum(c): ";
    cin >> c;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    cout<<"The possible solutions are "<<endl;
    solve(arr, n, c, 0);
    return 0;
}
