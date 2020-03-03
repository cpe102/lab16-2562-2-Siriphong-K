#include<iostream>
using namespace std;

//Write the definition of myString() here

void myString(char * &g,int N){
	g=new char [N];
	for(int i=0;i<N;i++){
		g[i]='A'+i;
	}
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
