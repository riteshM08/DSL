#include<iostream>
using namespace std;
int main(){
int i;
int m=7;
int arr[m];
cout<<"enter score of player : ";
for(int i=0 ; i<m ; i++){
cin>>arr[i];
}
for(int i=0; i<m; i++){
cout<<"level : "<<i+1<<endl;
for(int j=0; j<m-i-1; j++){
if(arr[j]>arr[j+1]){
cout<<" swapping "<<arr[j]<<" with "<<arr[j+1]<<" leveling up"<<endl;
int temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
cout<<"after swaping score is:";
for(int i=0 ; i<m ; i++ ){
cout<<arr[i]<<" ";
}
return 0;
}
