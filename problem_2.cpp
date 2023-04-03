#include <iostream>
using namespace std;
//dry run.
//n=3 
//m=2
//rec{n=3,m=2,sum = rec(3,1)}
//rec{n=3,m=1,sumOfn(3)}
//sumOfn{n=3;ans=6}
//sumOfn{n=2;ans=3}
//sumOfn{n=1,1}
int sumofn(int n){

    int ans = 0;

    if(n == 1){
        ans++;
        return ans;
    }

    ans += n + sumofn(n-1);
    return ans;
}
int rec(int n, int m) {

        if (m == 1)
        {
            return sumofn(n);
        }
        int sum = rec(n, m - 1);

        return sumofn(sum);
}
 
int main()
{
    int n,m;
    cout<<"Enter the number n and m : ";
    cin>>n;
    cin>>m;
    cout<<rec(n,m);
}