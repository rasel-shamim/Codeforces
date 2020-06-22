#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <list>
#include <set>
#include <queue>
#include <iterator>
#include <bitset>
#include <map>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
 
 
#define ll             long long
#define _              ios_base::sync_with_stdio(0);cin.tie(0);
#define loop           for(i=0;i<n;i++)
#define pb             push_back
#define tc()           int t;cin>>t;while(t--) 
#define pi             acos(-1) 
#define array_sorted   sort(arr,arr+n)        
 
using namespace std;
 
ll i,j,temp,k,a,b,c,l;
 
int main()
{_
 
	tc(){
		int n,x,begin=0,end=0,total=0;
		bool flag = true;
		cin>>n>>x;
		int arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
			total+=arr[i];
		}
		if(total%x!=0){
			cout<<n<<endl;
		}
		else{
			temp=0;
			for(i=0;i<n;i++){
				temp+=arr[i];
				begin++;
				if(temp%x!=0){
					flag=false;
					break;
				}
			}
			temp=0;
			for(i=n-1;i>=0;i--){
				temp+=arr[i];
				end++;
				if(temp%x!=0){
					flag = false;
					break;
				}
			}
			if(flag){
				cout<<-1<<endl;
			}
			else if((n-begin)>(n-end)){
				cout<<n-begin<<endl;
			}
			else{
				cout<<n-end<<endl;
			}
		}
 
	}
 
return 0;
}
