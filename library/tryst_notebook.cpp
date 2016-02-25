//----------------longest inc subsequence----------------
 
void bins(int low,int high,int n,int len[])
{
    while(high>low)
    {
        int mid=(high+low)/2;
        if(len[mid]==0 || len[mid]>=n)
        high=mid;
        else
        low=mid+1;
    }
    if(len[high]>n || len[high]==0)
    len[high]=n;
}
int lis(vector<int> arr)
{
    int n= arr.size();
    int len[n+1];
    memset(len,0,sizeof len);
    for(int i=0;i<n;i++)
    {
        bins(1,n,arr[i],len);
    }
    for(int i=n;i>0;i--)
    if(len[i]!=0)
    {
        return i;
    }
}

//---------------------------------power-------------------------

int powmod(int x, int n) 
{
    int w=1,p=x;
    while (n) 
    {
        if (n%2) w=w*p%mod;
        p=p*p%mod;
        n/=2;
    }
    return w;
}

//------------------------------struct sort---------------------------
bool sort_by_x( const data & lhs, const data & rhs )
{
   return lhs.x< rhs.x;
}

//--------------------------------prime sieve------------------------------
long long int primesieve[1000001];
vector <long long int> primes;
void makeprime()
{
    for(long long int i=0;i<=1000000;i++)
    primesieve[i]=1;
    primesieve[1]=0;
    primesieve[0]=0;
    for(long long int i=2;i<=sqrt(1000000);i++)
    {
        if(primesieve[i]==1)
            for(long long int j=i*i;j<=1000000;j=j+i)
            primesieve[j]=0;
    }
    for(long long int i=2;i<1000001;i++)
    if(primesieve[i]==1)
    primes.push_back(i);
}

//---------------------------range prime sieve-----------------------------------
vector <long long int> primes; //saved prime number upto 1000000
long long int calcpr(long long int l,long long r)
{
    long long int rps[r-l+1];
    for(long long int i=0;i<=r-l;i++)
    rps[i]=1;
    vector<long long int>::iterator it = primes.begin();
    while(it<primes.end())
    {
        long long int x=*it;
        if(x>sqrt(r)+1)
        break;
        long long int k=l/x+(l%x!=0);
        if(k==1)
        k++;
        k=k*x-l;
        for(long long int j=k;j<=r-l;j=j+x)
        rps[j]=0;
        it++;
    }
    long long int count=0;
    for(long long int i=0;i<=r-l;i++)
    if(rps[i]==1)
    {
        count++;
        //cout<<i+l<<endl;
    }
    return count-(l==1);
}

//---------------------------------dijkstras------------------------------

using namespace std;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
 
const int MAX = 1001;
const int MAXINT = 1000000000;
 
int n;
vvii G(MAX);
vi D(MAX, MAXINT);
 
void Dijkstra(int s)
{
    set<ii> Q;
    D[s] = 0;
    Q.insert(ii(0,s));
 
    while(!Q.empty())
    {
        ii top = *Q.begin();
        Q.erase(Q.begin());
        int v = top.second;
        int d = top.first;
 
        for (vii::const_iterator it = G[v].begin(); it != G[v].end(); it++)
        {
            int v2 = it->first;
            int cost = it->second;
            if (D[v2] > D[v] + cost)
            {
                if (D[v2] != 1000000000)
                {
                    Q.erase(Q.find(ii(D[v2], v2)));
                }
                D[v2] = D[v] + cost;
                Q.insert(ii(D[v2], v2));
            }
        }
    }
}
 
int main()
{
    int m, s, t = 0;
    scanf("%d %d %d %d", &n, &m, &s, &t);
 
    for (int i = 0; i < m; i++)
    {
        int a, b, w = 0;
        scanf("%d %d %d", &a, &b, &w);
        G[a - 1].push_back(ii(b - 1, w));
        G[b - 1].push_back(ii(a - 1, w));
    }
 
    Dijkstra(s - 1);
 
    printf("%d\n", D[t - 1]);
 
    return 0;
}


//--------------fast prime sieve- Sieve of Atkin--------------

using namespace std;
int main (int argc, char* argv[])
{
 //Create the various different variables required
 int limit = 1000000;
 int root = ceil(sqrt(limit));
 bool sieve[limit];
 int primes[(limit/2)+1];
 int insert = 2;
 primes[0] = 2;
 primes[1] = 3;
 for (int z = 0; z < limit; z++)
 sieve[z] = false; //Not all compilers have false as the default boolean value
 
 for (int x = 1; x <= root; x++)
 {
    for (int y = 1; y <= root; y++)
    {
    //Main part of Sieve of Atkin
    int n = (4*x*x)+(y*y);
    if (n <= limit && (n % 12 == 1 || n % 12 == 5)) sieve[n] ^= true;
    n = (3*x*x)+(y*y);
    if (n <= limit && n % 12 == 7) sieve[n] ^= true;
    n = (3*x*x)-(y*y);
    if (x > y && n <= limit && n % 12 == 11) sieve[n] ^= true;
    }
 }
 //Mark all multiples of squares as non-prime
 for (int r = 5; r <= root; r++) 
 if (sieve[r]) 
 for (int i = r*r; i < limit; i += r*r) 
 sieve[i] = false;

 //Add into prime array
 for (int a = 5; a < limit; a++)
 {
    if (sieve[a])
    {
        primes[insert] = a;
        insert++;
    }
 }
 return 0;
}

//---------------------prime factors---------------------
// Program to print all prime factors

using namespace std;
vector <int> pf;
void primeFactors(int n)
{
    while (n%2 == 0)
    {
        pf.push_back(2);
        n = n/2;
    }
 
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            pf.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
        pf.push_back(n);
}


/* this function calculates (a*b)%c taking into account that a*b might overflow */
long long mulmod(long long a,long long b,long long c){
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}

//---------------------------------BIT functions-------------------------------------//
int read(int idx){ //reads upto index idx..... note it id 1 indexed BIT
        int sum = 0;
        while (idx > 0){
                sum += tree[idx];
                idx -= (idx & -idx);
        }
        return sum;
}
//This function updates that particular index value
void update(int idx ,int val){
        while (idx <= MaxVal){
                tree[idx] += val;
                idx += (idx & -idx);
        }
}
//scaling down by factor c
void scale(int c){
        for (int i = 1 ; i <= MaxVal ; i++)
                tree[i] = tree[i] / c;
}

/// ---------------- palindrome ------------ ///
string convert(string s) 
{
  int n = s.length();
  if (n == 0) return "^$";
  string ret = "^";
  for (int i = 0; i < n; i++)
    ret += "#" + s.substr(i, 1);
 
  ret += "#$";
  return ret;
}
int main()
{
    string s;
    while(cin>>s)
    {
        string T = convert(s);
        int n = T.length();
        int P[n];
        int C = 0, R = 0;
        for (int i = 1; i < n-1; i++) 
        {
            int i_mirror = 2*C-i; // equals to i' = C - (i-C)
            
            P[i] = (R > i) ? min(R-i, P[i_mirror]) : 0;
            
            // Attempt to expand palindrome centered at i
            while (T[i + 1 + P[i]] == T[i - 1 - P[i]])
              P[i]++;
         
            // If palindrome centered at i expand past R,
            // adjust center based on expanded palindrome.
            if (i + P[i] > R)
            {
              C = i;
              R = i + P[i];
            }
        }
        int maxLen = 0;
        int centerIndex = 0;
        for(int i=n-3;i>0;i--)
        {
            //cout<<P[i]<<" ";
            if(P[i]==n-i-2)
            {
                maxLen = P[i];
                centerIndex = i;
            }
        }
        //cout<<endl;
        string rev=s.substr(0,s.length()-maxLen);
        reverse(rev.begin(),rev.end());
        cout<<s.substr(0,s.length()-maxLen)<<s.substr((centerIndex - 1 - maxLen)/2, maxLen)<<rev<<endl;
    }
} 
///- ------------------z algo----------------------//
void zalgo(int z[],string s)
{
    int r=-1,l=-1;
    for(int i=1;i<n;i++)
    {
        if(r<i)
        {
            for(int j=i;j<n;j++)
            if(s[j]==s[j-i])
                z[i]++;
            else
                break;
        }
        else
        {
            int x=i-l;
            z[i]=z[x];
            if(z[x]>=r-i+1)
            {
                z[i]=r-i+1;
                for(int j=z[i],k=r+1;k<n;j++,k++)
                {
                    if(s[j]==s[k])
                        z[i]++;
                    else
                        break;
                }
            }
        }
        if(r<i+z[i]-1)
            l=i,r=i+z[i]-1;
        //cout<<z[i]<<" "<<r<<" "<<l<<endl; 
    }
}
//------------ DSU ---------------//
int parent[100001],rank[100001];
int find(int x)
{
    if(parent[x]==x)
        return x;
    parent[x]=find(parent[x]);
    return parent[x];
}
int merge(int u,int v)
{
    int pu=find(u);
    int pv=find(v);
    if(pu==pv)
        return 0;
    if(rank[pu]>rank[pv])
    {
        parent[pv]=pu;
       
    }
    else if(rank[pu]<rank[pv])
    {
        parent[pu]=pv;
       
    }
    else
    {
        parent[pu]=pv;
       
        rank[pv]++;
    }
    return 1;
}
//------------- euler function ----------///
long long euler(long long k)
{
    long long r = k,p=2;
    while(p*p<=k)
    {

        if(k%p==0)
        r=r-r/p;
        while(k%p==0)
            k=k/p;
        p++;
    }
    if(k>1)
        r=r-r/k;
    return r;
}
//------------//
j=s[i].find("miao.");
k=s[i].rfind("lala.");

//------strongly connected components---------//

int n,m,ti,counter,value;
int cost[100001];
int visit[100001];
struct data
{
    int v,nn;
    vector <int> neb;
}node1[100001],node2[100001];

struct data1
{
    int index,tim;
}arr[100001];

bool sortbytime(const data1 & lhs,const data1 & rhs)
{
   return lhs.tim> rhs.tim;
}

void dfs(int ind)
{
    node1[ind].v=1;
    for(int i=0;i<node1[ind].nn;i++)
    if(node1[node1[ind].neb[i]].v==0)
    dfs(node1[ind].neb[i]);
    ti=ti+1;
    arr[ind].tim=ti;
}

void dfs1(int ind)
{
    node2[ind].v=1;
    if(cost[ind]<value)
    {
        value=cost[ind];
        counter=1;
    }
    else if(cost[ind]==value)
    {
        counter++;
    }
    for(int i=0;i<node2[ind].nn;i++)
    if(node2[node2[ind].neb[i]].v==0)
    dfs1(node2[ind].neb[i]);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>cost[i];
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int ui,vi;
        cin>>ui>>vi;
        ui--;
        vi--;
        node1[ui].neb.push_back(vi);
        node1[ui].nn++;
        node2[vi].neb.push_back(ui);
        node2[vi].nn++;
    }
    for(int i=0;i<n;i++)
    if(node1[i].v==0)
    dfs(i);

    for(int i=0;i<n;i++)
        arr[i].index=i;
    sort(arr,arr+n,sortbytime);
    long long ans1=0,ans2=1;
    //cout<<node2[0].nn<<" "<<node2[1].nn<<" "<<node2[2].nn<<endl;
    for(int i=0;i<n;i++)
    {
        //cout<<arr[i].index<<" "<<arr[i].tim<<endl;
        if(node2[arr[i].index].v==0)
        {
            counter=0;
            value=1000000001;
            dfs1(arr[i].index);
            //cout<<value<<" "<<counter<<endl;
            ans1=ans1+value;
            ans2=(ans2*counter)%1000000007;
        }
    }
    cout<<ans1<<" "<<ans2<<endl;

}


//------------------stable marige problem------------------//
int men[501][501];
int wom[501][501];
int ans[501];
int start[501];
int n;
vector <int> s;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(ans,-1,sizeof(ans));
        memset(start,0,sizeof(start));
        s.clear();
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x; 
            x--;
            for(int j=0;j<n;j++)
            {
                cin>>wom[x][j],wom[x][j]--;
            }
        }   
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x; 
            x--;
            for(int j=0;j<n;j++)
            {
                cin>>men[x][j],men[x][j]--;
            }
        }
        for(int i=0;i<n;i++)
            s.push_back(i);
        //cout<<"-----------"<<endl;
        while(s.size()>0)
        {
            int m=s[0];
            int w=men[m][start[m]];
            //cout<<m<<" "<<w<<endl;
            if(ans[w]==-1)
            {
                ans[w]=m;
                s.erase (s.begin());
                start[m]++;
            }
            else
            {
                int m1=ans[w];
                for(int i=0;i<n;i++)
                {
                    if(wom[w][i]==m1)
                    {
                        start[m]++;
                        break;
                    }
                    else if(wom[w][i]==m)
                    {
                        ans[w]=m;
                        s.erase (s.begin());
                        start[m]++;
                        s.push_back(m1);
                        break;
                    }
                }
            }
        }
        int final[n];
        for(int i=0;i<n;i++)
            final[ans[i]]=i;
        for(int i=0;i<n;i++)
            cout<<i+1<<" "<<final[i]+1<<endl;
    }
}

//-----------------------------------------------------------------//
///////////////////////////////////////////////////////////////////////////////////////////////////////
-----------Polygon Formulas-----------------------
(N = # of sides and S = length from center to a corner)
 
Area of a regular polygon = (1/2) N sin(360°/N) S2
Sum of the interior angles of a polygon = (N - 2) x 180°
 
The number of diagonals in a polygon = 1/2 N(N-3)
The number of triangles (when you draw all the diagonals from one vertex) in a polygon = (N - 2)
---------------Triangle formula-------------------
area =1/2*ab sinC
area = (s(s−a)(s−b)(s−c))^1/2
---------modulor ---------------------------------
 a^-1 mod p= a^p-2 mod p
(a - b) mod p = ((a mod p - b mod p) + p) mod p
(a / b) mod p = ((a mod p) * (b^(-1) mod p)) mod p
 
------------------GCD LCM--------------------------------
For integers N1, ..., Nk, k ≥ 2,
lcm(gcd(N1, M), gcd(N2, M), ..., gcd(Nk, M)) = gcd(lcm(N1, ..., Nk), M)
gcd(lcm(N1, M), lcm(N2, M), ..., lcm(Nk, M)) = lcm(gcd(N1, ..., Nk), M)
 
gcd(P·N, P·M) = P·gcd(N, M)
lcm(P·N, P·M) = P·lcm(N, M).
---------------prime test---------
 
A simple, but very inefficient primality test uses Wilson's theorem, which states that p is prime if and only if:
(p-1)(mod p) != -1(mod p)



------------basic bfs---------------------
bool bfs(int s)
{
    int i, u, v, sz;
    queue< int > Q;
    Q.push(s);
    flag[s] = 1;
    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        sz = G[u].size();
        for(i=0; i<sz; i++)
        {
            v = G[u][i];
            if(pre[u] != v && flag[v]) return false;
            else if(!flag[v])
            {
                pre[v] = u;
                flag[v] = 1;
                Q.push(v);
            }
        }
    }
    for(i=1; i<=N; i++)
        if(!flag[i])
            return false;
    return true;
}


// /**/
-----------------basic dfs ------------
#include <cstdio>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

#define MAX 10001

int N, E;
vector< int > G[MAX];
bool flag[MAX];
int pre[MAX];

bool dfs(int s)
{
    int i, u, v, sz;
    stack< int > stk;
    stk.push(s);
    flag[s] = 1;
    while(!stk.empty())
    {
        u = stk.top();
        stk.pop();
        sz = G[u].size();
        for(i=0; i<sz; i++)
        {
            v = G[u][i];
            if(pre[u] != v && flag[v]) return false;
            else if(!flag[v])
            {
                pre[v] = u;
                flag[v] = 1;
                stk.push(v);
            }
        }
    }
    for(i=1; i<=N; i++)
        if(!flag[i])
            return false;
    return true;
}

int main()
{
    int i, u, v, s;
    scanf("%d %d", &N, &E);
    for(i=0; i<E; i++)
    {
        scanf("%d %d", &u, &v); 
        //scanning two nodes which are the edges in the graph G
        s = u;
        G[u].push_back(v);
        
        G[v].push_back(u);
    }
    if(E!=N-1) //checking for the basic condition of a graph
        printf("NO\n");
    else
    {
        if(dfs(s)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
-- ----- -- 





