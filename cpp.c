#include <iostream>
using namespace std;
void solve()
{
    int n;
    int c;
    int res=1;
    int a[n];
    cin>>n;
    cin>>c;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            res++;
        }
    }
    cout<<res*c<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
}