#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int temp,temp1,num;
    if(s.length()>1)
    { temp =  s.at( s.length() - 1 )-'0';
     temp1 = s.at(s.length()-2)-'0';
     num = temp1*10+temp;}

    else
    {
         temp =  s.at( s.length() - 1 )-'0';
        num = temp;
    }

    num = num%4;
    if(num ==0 || num== 4 )
        cout<<"4"<<endl;
    else
        cout<<"0"<<endl;
    /*int res = 1+ ( pow(2,num) + pow(3,num) + pow(4,num) );
    cout<<res%5<<endl;*/
}
