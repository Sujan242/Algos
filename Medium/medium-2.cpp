#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> a;
    vector <int> b;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        a.push_back(num);
    }
    for(int i=0;i<m;i++)
    {
        int num;
        cin>>num;
        b.push_back(num);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int sa=0;
    int sb=0;
    int mi=abs(a[0]-b[0]);
    while(sa<n && sb<m)
    {
        int diff=a[sa]-b[sb];
        mi=min(mi,abs(diff));
        if(diff>0)
        {
            sb++;
        }
        else if(diff<0)
        {
            sa++;
        }
        else
        {
            break;
        }
    }
    cout<<mi<<endl;
    return 0;
}