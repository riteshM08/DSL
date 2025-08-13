#include <iostream>
using namespace std;

int main(){
    int s=10;
    int ser[s];
    int r=10;
    int req[r];
    int hash[10];
    for(int z=0;z<10;z++){
		hash[z]=-1;
	}
	cout<<"enter servers:";
     for(int j=0;j<r;j++){
		 cin>>ser[j];
	}
    cout<<"enter requests:";
     for(int j=0;j<r;j++){
		 cin>>req[j];
	 }
	 
	 cout<<"\n request to server mapping:";
	 for(int k=0;k<r;k++){
	    int index=req[k]%10;
	    
	    hash[index]=req[k];
	}
	    
	     for(int a=0;a<r;a++){
		 cout<<hash[a]<<" "<<endl;
	 }
	 return 0;
 }
