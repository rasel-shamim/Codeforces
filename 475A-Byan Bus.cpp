#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int member[4][11];
	int x,i,j,cnt =0,res=0,full_line=0;
	cin>>x;
	for(i=0;i<4;i++){
		for(j=0;j<11;j++){
			member[i][j] = 0;//Taking all seats empty as default
		}
	}
	if(x<=4){
		for(i=0;i<x;i++){
			member[i][0] = 1;
		}
	}
	if(x>4){
		res = x-4;
		full_line = res/3;
		res = res % 3;
		for(i=0;i<4;i++){
			member[i][0] = 1;
		}
		for(i=0;i<4;i++){
			for(j=1;j<=full_line;j++){
				if(i==2) continue;
				else member[i][j] = 1;
			}
		}
		for(i=0;i<res;i++){
			
			if(i==2) continue;
			else member[i][j] = 1;
		}
	}

	cout<<"+------------------------+"<<endl;
	for(i=0;i<4;i++){
		cout<<"|";
		for(j=0;j<11;j++){
			if(i==2){
				if(member[i][j] ==1){
					cout<<"O.";
				}
				else if(i ==2 && j==0) cout<<"#.";
				else cout<<"..";
			}
			else{
				if(member[i][j] == 1) cout<<"O.";
				else cout<<"#.";
			}
				
		}
		if(i==0) cout<<"|D|)"<<endl;
		if(i==1) cout<<"|.|"<<endl;
		if(i==2) cout<<"..|"<<endl;
		if(i==3) cout<<"|.|)"<<endl;
	}
	cout<<"+------------------------+"<<endl;
	return 0;
}
