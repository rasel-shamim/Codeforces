#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n],total=0;
		for(int i=0;i<n;i++){
			scanf("%d",&arr[i]);
			total += arr[i];
		}
		int prev = 0,count=0,start=0,end=n-1,first=0,second=0;
		while(total!=0){
			int pres = 0;
			if(count%2==0){
				while(pres <= prev && total!=0){
					pres += arr[start];
					total -= arr[start];
					start++;
				}
				prev = pres;
				first += pres;
			}
			else{
				while(pres<=prev && total!=0){
					pres += arr[end];
					total -= arr[end];
					end--;
				}
				prev = pres;
				second += pres;
			}
			count++;
		}

		printf("%d %d %d\n",count,first,second);
	}
	return 0;
}
