#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, so = 0;
    cout << "nhap n = "; cin >> n;
    do
    {
        if (n % i == 0)  so++; i++;
    } while (i <= n);
    if (so == 2) cout << "la so nguyen to";
    else cout << "khong la so nguyen to";
}