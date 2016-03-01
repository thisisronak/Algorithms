#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>a)
        printf("0");
    else if(a==b)
        printf("infinity");
    else
        {
        int c=a-b;
        int ans=0;
        for(int i=1;i<=sqrt(c);++i){
            if(c%i==0){
                if(i>b)
                    ++ans;
                if(c/i>b)
                    ++ans;
                if(c/i==i && i>b)
                    --ans;
            }
        }
        printf("%d\n",ans);
    }
}