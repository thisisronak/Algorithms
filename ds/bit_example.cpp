    #include <bits/stdc++.h>
    using namespace std;
    int tree[1000005];
    int maxVal;
    int read(int idx){
        int sum = 0;
        while(idx > 0){
            sum += tree[idx];
            idx -= (idx & -idx);
        }
        return sum;
    }

    void update(int idx, int val){
        while(idx <= maxVal){
            tree[idx] += val;
            idx += (idx & -idx);
        }
    }



    int main(){  

        int n,q;
        cin>>n>>q;
        maxVal=n;
        memset(tree,0,sizeof(tree));
        for(int i=0;i<q;i++){
            int a,b;
            cin>>a>>b;
            update(a,1);
            update(b+1,-1);
        }
        int arr[n+5];
        int j=0;
        for(int i=0;i<n+1;i++)
            arr[j++]=read(i);
        sort(arr,arr+j);
        printf("%d\n",arr[(n)/2  + 1]);
        return 0;
    }