#include<iostream>
using namespace std;
void f(int n)
{



    if(n<=0)
    {
        cout<<n<<" ";
        return ;
    }

    cout<<n<<" ";

    f(n-5);

    cout<<n<<" ";

    
}
int main()
{
    int n = 16;

    f(n);
    return 0;

}