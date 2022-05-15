#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector <int> A;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        A.push_back(t);
    }
    int buy=0;
    float profit=0;
    int sell=0;
    int day=0;
    while(day<n)
    {
      if(day==n-1 && buy!=0)
      {
	      sell=A[day];
	      profit+=sell-buy-(sell+buy)*(float)x/100
      }
      else if(day==n-1 && buy==0) break;
      else if(A[day+1]>A[day] and buy==0) buy=A[day];
      else if(A[day+1]<A[day] and buy!=0)
      {
	      sell=A[day];	      
	      profit+=sell-buy-(sell+buy)*(float)x/100;
              sell=0;
              buy=0;        
      }
      day++;       
    }
  cout<<profit<<endl;
}
