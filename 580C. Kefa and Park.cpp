//=======================ALLAH is ALMIGHTY=====================\\
 
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>

 
#define LL                  long long
#define tc()                int tc;scanf("%d",&tc);while(tc--)
#define fast                ios::sync_with_stdio();cin.tie(0)
#define endl                "\n"
#define FLOAT_COM(a,b)      if(abs(a-b)==1e-9)
#define LOOP(a,b)           for(i=a;i<b;i++)
#define VI                  vector<int>
#define VLL                 vector<long long>
#define PB                  push_back
#define MP                  make_pair
#define SLL                 set<long long>
#define MII                 map<int,int>
#define MSI                 map<string,int>
#define FILE                

// typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> indexed_set;
using namespace std;
using namespace __gnu_pbds;
bitset<1000001> prime;
void shomoy(){
    #ifndef ONLINE_JUDGE
        cerr<<"---------END OF OUTPUT---------------\n";
        cerr<<"---------Time  :"<<1.0*clock()/CLOCKS_PER_SEC<<"s------------\n";
    #endif
}

vector<int> arr[100005];
int cat[100005];
int n,k,ans=0;
bool vis[100005] = {false};
void dfs(int temp,int catcount){
    vis[temp] = true;
    if(cat[temp])catcount++;else catcount=0;
    if(catcount>k) return;
    if(arr[temp].size()==1 && temp!=1){
        ans++;
    }
    for(int i=0;i<arr[temp].size();i++){
        if(vis[arr[temp][i]]==false){
            dfs(arr[temp][i],catcount);
        }
    }

}
                //////Here Starts The code/////
int main(){
    fast;
    scanf("%d%d",&n,&k);
    int catcount=0;
    for(int i=1;i<=n;i++){
        cin>>cat[i];
    }
    int a,b;
    for(int i=1;i<n;i++){
        scanf("%d%d",&a,&b);
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    dfs(1,catcount);
    cout<<ans<<endl;
    
shomoy();
return 0;
}
