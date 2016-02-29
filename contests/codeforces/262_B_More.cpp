#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
int main()
{
        ll a,b,c;
        cin >> a >> b >> c;
        int count=0;
        vector<int> vec;
        for(int i=1;i<=81;i++)
        {
                ll val = pow(i,a) * b + c;
                if(val < 1000000000 && val > 0) {
                        ll sum=0;
                        ll val2 = val;
                        while(val2/10!=0)
                        {
                                sum += val2%10;
                                val2/=10;
                        }
                        sum+=val2;

                        if(sum == i)
                        {
                                vec.push_back(val);
                                count++;
                        }
                }

        }
        cout << count << endl;
        if(vec.size() > 0) {
                sort(vec.begin(),vec.end());
                for(int i = 0 ;i< vec.size();i++)
                        cout << vec[i] << " ";
                cout << endl;
        }
        return 0;
}
