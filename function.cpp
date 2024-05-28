#include <iostream>
using namespace std;

void func_tion()
{
    int a[] = {1, 2, 3, 4, 5};
    int count = sizeof(a);

    cout << "a: ";
    for (int i = 4; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
   func_tion();
   
}
