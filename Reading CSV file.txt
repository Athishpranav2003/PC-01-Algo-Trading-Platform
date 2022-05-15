#include <bits/stdc++.h>
using namespace std;
int main()
{
    fstream csv;
    csv.open("April 22 NIFTY.csv");
    string l,val;
    vector <float> arr3,arr5;
    getline(csv,l);
    float d5sum;
    float d3sum;
    int days=0;
    while(getline(csv,l))
    { 
      if(days%3==0) d3sum=0;
      if(days%5==0) d5sum=0;
      days++;
      int rc=0; 
      stringstream str(l);
      while(getline(str, val, ','))
        {
          if(rc==4)
          {
            float num=0.00;
            for(int i=5;i<13;i++)
              {
                if(i<=9)num+=pow(10,9-i)*((int)val[i]-48);
                else if(i>10) num+=pow(10,10-i)*(float)((int)val[i]-48);
              }
            d5sum+=num;           
            d3sum+=num;  
            if(days%3==0)arr3.push_back(d3sum/3);
            else if(days==19)arr3.push_back(d3sum);
            if(days%5==0)arr5.push_back(d5sum/5);
            else if(days==19)arr5.push_back(d5sum/4);
          }
          rc++;          
        }      
    } 
    cout<<"Simple Moving Average for window of 3 days\n";
    for(auto i:arr3) cout<<setprecision(7)<<i<<endl;
    cout<<"Simple Moving Average for window of 5 days\n";
    for(auto i:arr5) cout<<setprecision(7)<<i<<endl;
    return 0;
}
