#include<iostream>
using namespace std;

void funA(int n)
{
    if(n>0)
    {
        
    cout<<n<<"  ";
    funA(n-1);
   
    }    
    


}

    void funB(int n)
    {
        if (n>0)
        {
            cout<<n<<" ";
            funA(n-1);
        }

    }
 main()
{

  
funA(20); 
}