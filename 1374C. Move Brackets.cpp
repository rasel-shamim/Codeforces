#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <list>
#include <queue>
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
#define max            10001
 
using namespace std;
 
 
ll i,j,temp;
bitset<max> prime;
vector<int> prime_numbers;
vector<int>::iterator it;
 
int main()
{_
  
  tc(){
        int length,opening=0;
        cin>>length;
        char bracket;
        for(i=0;i<length;i++){
            cin>>bracket;
        			if(bracket=='('){
            opening++;
        }
            else if(opening>0){
            opening--;
        }
    }
        cout<<abs(opening)<<endl;
    
}
    return 0;
}
