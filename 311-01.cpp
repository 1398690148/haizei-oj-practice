/*************************************************************************
    > File Name: 311-01.cpp
    > Author: liqiang
    > Mail: 1398690148@qq.com 
    > Created Time: 2019年08月19日 星期一 23时11分07秒
 ************************************************************************/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
typedef long long ll;
const int N=1e7+5;
int n;
bool vis[N];
int p[N],m=0;
ll s[N],ans,phi[N];
void sieve(){
    phi[1]=1;
    for(int i=2;i<=n;i++){
        if(!vis[i]){
            p[++m]=i;
            phi[i]=i-1;
        }
        for(int j=1;j<=m&&i*p[j]<=n;j++){
            vis[i*p[j]]=1;
            if(i%p[j]==0){
                phi[i*p[j]]=phi[i]*p[j];
                break;
            }
            phi[i*p[j]]=phi[i]*(p[j]-1);
        }
    }
    for(int i=1;i<=n;i++) s[i]=s[i-1]+phi[i];
}
int main(){
    scanf("%d",&n);
    sieve();
    for(int i=1;i<=m;i++) ans+=s[n/p[i]];
    printf("%lld",ans*2-m);
}
