#include<iostream>
using namespace std;
int main(){
	int ival,fval,step;
	cin>>ival>>fval>>step;
	while(ival<=fval){
		int cel=(5/9.0)*(ival-32);
		cout<<ival<<" "<<cel<<endl;
		ival=ival+step;
	}
	return 0;
}