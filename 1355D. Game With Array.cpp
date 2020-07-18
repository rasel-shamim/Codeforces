#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <iterator>
#include <bitset>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define ll             long long
#define _              ios_base::sync_with_stdio(0);cin.tie(0);
#define loop           for(i=0;i<n;i++)
#define pb             push_back
#define tc()           int t;cin>>t;while(t--) 
#define pi             acos(-1)         
 
using namespace std;
 
ll i,j,temp;
 
int main()
{_
    
	ll S,N,x,last_x;
	cin>>N>>S;
	int arr[N];
 
	if(N==1){
		if(S==1){
			cout<<"NO"<<endl;
		}
		else if(S==2){
			cout<<"YES"<<endl;
			cout<<S<<endl;
			cout<<1<<endl;
		}
		else{
			cout<<"YES"<<endl;
			cout<<S<<endl;
			cout<<2<<endl;
		}
	}
	else{
		x = S/N;
		last_x = x + S%N;
		if(x==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			for(i=0;i<N-1;i++){
				cout<<x<<" ";
			}
			cout<<last_x<<endl;
			cout<<x-1<<endl;
		}
	}
 
return 0;
}
