#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream in("input.txt");
ofstream out("output.txt");

bool verifica(char n1, string s1){
	if(s1[0]==n1){
		return true;
	}else false;
}

int main(){
	char c;
	int spazza;
	string s1,s2,s3;
	
	for(int i=0; i<100; i++){
		in>>c;
		in>>spazza;
		in>>s1;
		in>>spazza;
		in>>s2;
		in>>spazza;
		in>>s3;
	
		if(verifica(c,s1))
			out<<s1+" ";
		if(verifica(c,s2))
			out<<s2+" ";
		if(verifica(c,s3))
			out<<s3;
		out<<endl;

	}
	
	return 0;
}
