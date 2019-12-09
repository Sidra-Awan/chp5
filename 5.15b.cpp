#include<iostream>
#include<string>
using namespace std;
main(){
	int c=0;
	while(c<=10){
		for(int x=10; x>=c; x--){
			cout<<"*";
		}
		cout<<"\n";
		c++;
		
	}

}
