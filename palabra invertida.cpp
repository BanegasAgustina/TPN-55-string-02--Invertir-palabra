#include <bits/stdc++.h>
using namespace std;
string InvertirPalabra(string palabra) ;

int main(){
string word;

cout<<"ingrese una palabra=  ";
getline(cin,word);

	
cout<<InvertirPalabra(word);
return 0;
}
string InvertirPalabra(string palabra) {
	int size=palabra.length();
	string pinv;
	for(int i=size-1;i>=0;i--){
		pinv+= palabra[i];
	}
	return pinv;
}