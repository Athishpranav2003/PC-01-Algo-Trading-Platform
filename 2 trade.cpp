#include <bits/stdc++.h>

using namespace std;

int profit(vector <int> A1,vector <int> A2,int i,int j)
{
    
    if(i>=j){
        return 0;
    }
    else if(A2[i]<A2[j])
    {
        return A1[j]-A1[i];
    }
    else
    {
        return max(profit(A1,A2,i+1,j),profit(A1,A2,i,j-1));
    }
}
int main() {
    int n;
    cin>>n;
    vector <int> A,A1,A2;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        A.push_back(t);
        A1.push_back(t);
    }
    sort(A1.begin(),A1.end());
    for(int i=0; i<n;i++)
    {
        A2.push_back(find(A.begin(),A.end(),A1[i])-A.begin());
    }
    cout<<profit(A1,A2,0,n-1);
    
}
