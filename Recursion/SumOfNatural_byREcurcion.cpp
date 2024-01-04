#include<iostream>
using namespace std;
int sum (int n)
{
    if(n==0)
    {
     
        return 0;
    }
    else{
        return sum(n-1)+n;
    }


}
int main()
{
    cout<< " enter the number "<<endl;
    int n;

    cin>>n;
    int ans = sum(n);
   
    cout<<"sum of n number is =  "<<ans<<endl;

    return 0;

}