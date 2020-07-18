#include <stdio.h>
#include <string.h>
 
int main()
{
	int tc;
	scanf("%d",&tc);
	while(tc--){
		long long x,y,z,temp1,a,b,c,temp2,temp3=1;
		bool possible;
		scanf("%lld %lld %lld",&x,&y,&z);
		if(x==y || x==z || y==z){
			if(x==y && z<=x){
				temp1 = x;
				temp2 = z;
				possible = true;
			}
			else if(y==z && x<=y){
				temp1 = y;
				temp2 = x;
				possible = true;
			}
			else if(z==x && y<=z){
				temp1 = z;
				temp2 = y;
				possible = true;
			}
			else{
				possible = false;
			}
		}
		else{
			possible = false;
		}
		if(possible){
			printf("YES\n%lld %lld %lld\n",temp1,temp2,temp3);
		}
		else{
			printf("NO\n");
		}
 
	}
	return 0;
}
