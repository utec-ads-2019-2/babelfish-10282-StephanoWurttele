#include <iostream>
#include <string>
#include <sstream>
#include <map>

using namespace std;

int main(){
	map<string,string> diccionario;
	string n;
	string a;
	getline(cin,n);
	while(n!=""){
		stringstream string(n);
		string>>n>>a;
		diccionario[a]=n;
		getline(cin,n);
	}
	while(cin>>n){
		if(!diccionario[n].empty())
			cout<<diccionario[n]<<endl;
		else
			cout<<"eh"<<endl;
	}
	return 0;
}
