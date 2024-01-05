#include<iostream>
using namespace std;

int fact (int n)
{
    if(n<=1)
    {
     
        return 1;
    }
    else{
        return fact(n-1)*n;
    }


}

int combination(int n , int r)
{

    int t1 ,t2 , t3;
    t1 = fact(n);
    t2 = fact(r);
    t3 = fact(n-r);
    return t1/(t2*t3);
}

int main ()
{
    int p = combination( 2,8);
    cout<<p<<endl;
}