#include<iostream>
using namespace std;
int taylor (int x ,int n)
{
    static int p=1,f=1;
    int r;
    if(n==0)
    {
     
        return 1;
    }
    else{
        r=taylor(x,n-1);
        p = p*x;
        f= f*n;
        return r+p/f;
    }


}
int main()
{
    cout<< " enter the number x and n "<<endl;
    int m ,n;

    cin>>m>>n;
    int ans = taylor(m,n);
   
    cout<<"taylor of x^n  is =  "<<ans<<endl;

    return 0;

}