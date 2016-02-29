#include <bits/stdc++.h>
using namespace std;
#define d(n) cout<<#n<<" "<<n<<endl


struct node
{
  node(const int c = -1, const string& n = string()): cnt(c), Name(n) { }
  int cnt;
  string Name;
};

int n, m;

node Taxi, Pizza, Girl;

void detail(node& ll, const node& rr);

int main()
{
  // freopen("input.txt","r",stdin);
 
  cin >> n;

  string name;
  while(n--)
  {
    cin >> m >> name;
    int taxi=0, pizza=0, girl=0;
    string tel;
    while(m--)
    {
      cin >> tel;
      if (tel[0] == tel[1] && tel[1] == tel[3] && tel[3] == tel[4] && tel[4] == tel[6] && tel[6] == tel[7])
        taxi++;
      else if (tel[0] > tel[1] && tel[1] > tel[3] && tel[3] > tel[4] && tel[4] > tel[6] && tel[6] > tel[7])
        pizza++;
      else
        girl++;
    }
    detail(Taxi, node(taxi, name));
    detail(Pizza, node(pizza, name));
    detail(Girl, node(girl, name));
  }
  cout << "If you want to call a taxi, you should call: " << Taxi.Name << '.' << endl<< "If you want to order a pizza, you should call: " << Pizza.Name << '.' << endl<< "If you want to go to a cafe with a wonderful girl, you should call: " << Girl.Name << '.';
}

void detail(node& ll, const node& rr)
{
  if (rr.cnt >= ll.cnt)
  {
    if (rr.cnt == ll.cnt)
      ll.Name += ", "+rr.Name;
    else
      ll.Name = rr.Name;
    ll.cnt = rr.cnt;
  }
}