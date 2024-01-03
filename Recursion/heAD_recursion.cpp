#include<iostream>
using namespace std;

int fun(int n)
{
    if (n>0)
    {
        
        fun(n-1);
        cout<<n<<endl;
    }
    
}

int main()
{
    int a = 5;
    int p = fun(a);
    cout<<p<<endl;
    return 0;
}