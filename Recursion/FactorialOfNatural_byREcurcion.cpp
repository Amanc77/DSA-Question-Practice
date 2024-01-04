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
int main()
{
    cout<< " enter the number "<<endl;
    int n;

    cin>>n;
    int ans = fact(n);
   
    cout<<"fact of n number is =  "<<ans<<endl;

    return 0;

}