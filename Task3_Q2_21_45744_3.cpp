#include<iostream>
using namespace std;
void encode(string s,int j)
{
    int r,i;
    for(i=j;i<s.size();i=i+j+1)
    {
        r=s[i];
        s[i]=(char)(r+j);
    }
    cout<<"\n---------------------------";
    cout<<"\nCoverted String     : "<<s;
    cout<<"\n---------------------------";
    cout<<endl;
}
int main()
{
  int j;
  string s;
  cout<<"Enter Sample String  : ";
  getline(cin,s);
  cout<<"Enter Sample Integer : " ;
  cin>>j;
  cout<<"\nSample String        : "<<s;
  cout<<"\nSample Integer       : "<<j;
  encode(s,j);
  return 0;
}


