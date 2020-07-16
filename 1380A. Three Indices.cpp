#include <stdio.h>

int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--){
		int n,i,j,k,temp_i,temp_j,temp_k;
		bool ok=false,possilble_1,possilble_2;

		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		
		for(i=1;i<n-1;i++){
			possilble_1 = possilble_2 = false;
			temp_j = i+1;
			for(j=0;j<i;j++){
				if(arr[j]<arr[i]){
					possilble_1 = true;
					temp_i = j+1;
					break;
				}
			}
			for(j=i+1;j<n;j++){
				if(arr[j]<arr[i]){
					possilble_2 = true;
					temp_k = j+1;
					break;
				}
			}
			if(possilble_1 && possilble_2){
				ok = true;
				break;
			}
		}
		if(ok){
			printf("YES\n%d %d %d\n",temp_i,temp_j,temp_k);
		}
		else{
			printf("NO\n");
		}
	}
		

	return 0;
}
