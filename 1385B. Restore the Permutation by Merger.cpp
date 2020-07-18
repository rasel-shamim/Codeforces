#include <stdio.h>
#include <string.h>
 
bool achenaki(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x)
			return true;
	}
	return false;
}
 
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n,i;
		scanf("%d",&n);
		int arr[n+n];
		scanf("%d",&arr[0]);
		printf("%d",arr[0]);
		for(i=1;i<n+n;i++){
			scanf("%d",&arr[i]);
			if(achenaki(arr,i,arr[i])==false){
				printf(" %d",arr[i]);
			}
 
		}
		printf("\n");
 
	}
	return 0;
}
