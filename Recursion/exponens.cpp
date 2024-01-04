#include<iostream>
using namespace std;
int power (int m ,int n)
{
    if(n==0)
    {
     
        return 1;
    }
    else{
        return power(m,n-1)*m;
    }


}
int main()
{
    cout<< " enter the number m and n "<<endl;
    int m ,n;

    cin>>m>>n;
    int ans = power(m,n);
   
    cout<<"power of m^n  is =  "<<ans<<endl;

    return 0;

}