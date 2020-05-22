#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=4;
    long long a,b[4],k=0,i;
    
    while(n--)
    {
        int d=0;
        cin>>a;
        for(i=0;i<k;i++)
        {
            if(a==b[i])
            {
                d++;
            }
        }
        if(d==0)
        {
            b[k++] = a;
        }
    }
    cout<<4-k;
    return 0;
}
