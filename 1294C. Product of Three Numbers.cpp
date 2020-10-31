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
vector<int > p_number;
void shomoy(){
    #ifndef ONLINE_JUDGE
        cerr<<"---------END OF OUTPUT---------------\n";
        cerr<<"---------Time  :"<<1.0*clock()/CLOCKS_PER_SEC<<"s------------\n";
    #endif
}
void seive(){
    // 0 prime
    // 1 not prime
    for(int i=1;i<1000009;i++){
        prime[i] = 0;
    }
    prime[1] = 1;
    prime[2] = 0;
    for(int i=4;i<1000009;i+=2){
        prime[i] = 1;
    }
    for(int i=3;i*i<1000009;i+=2){
        if(prime[i]==0){
            for(int j=i+i;j<1000009;j+=i){
                prime[j] = 1;
            }
        }
    }
    for(int i=2;i<=1000007;i++){
        
        if(!prime[i]){
            // cout<<i<<endl;
            p_number.push_back(i);
        }
    }
}
 
LL npr(LL n,LL r){
    LL mul=1;
    LL temp =0;
    for(LL i=0;i<r;i++){
        mul *= (n-i);
    }
    return mul;
}
 
long long fact(long long n){
    long long mul = 1;
    for(int i=1;i<=n;i++){
        mul *= i;
        mul %= 1000000007;
    }
    return mul;
}
int gcd(int a,int b){
    a = abs(a);
    b = abs(b);
    int sml,lrg;
    a>b?sml=b,lrg=a:sml=a,lrg=b;
    while(lrg%sml){
        int temp = sml;
        sml = lrg%sml;
        lrg = temp;
    }
    return sml;
}
bool isPrime(long long n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}
               //////Here Starts The code/////
int main(){
    fast;
    tc(){
        long long n,a,b,c,temp;
        cin>>n;
        bool ok = false;
        for(int i=2;i<1002;i++){
            if(n%i==0){
                temp = n/i;
                vector<int> first;
                vector<int> second;
                int count=0;
                if(isPrime(temp)==false){
                    for(int k=2;k<sqrt(temp);k++){
                        if(temp%k==0){
                            first.push_back(k);
                            second.push_back(temp/k);
                            count++;
                        }
                    }
                }
                for(int k=0;k<count;k++){
                    if(i!=first[k] && i!=second[k] && first[k]!=1 && second[k]!=1){
                        ok = true;
                        a = i;
                        b = first[k];
                        c = second[k];
                        break;
                    }
                }
            }
        }
        
        ok?cout<<"YES"<<endl,cout<<a<<" "<<b<<" "<<c<<endl:cout<<"NO"<<endl;
    }
shomoy();
return 0;
}
