#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,m,k,i,j,p;
    cin >> m;
    for(i=0;i<m;i++)
    {
        p=0;
        cin >> n >> k;
        long long arr[n];
        for(j=0;j<n;j++) cin >> arr[j];
        vector<long long int> v;
        for(j=0;j<n-1;j++)  v.push_back(abs(arr[j]-arr[j+1]));
        sort(v.begin(),v.end());
        for(j=0;j<n-k;j++) p+=v[j];
        cout << p << "\n";
    }
    return 0;
}