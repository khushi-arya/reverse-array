#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int s,int e){
	while(s<e){
		int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
		s++;
		e--;
	}
	
}
int main(){
   int n;
   cout<<"enter the size of array:  \n";
 cin>>n;
 int arr[n];
 int i;
 cout<<"enter the elements of aray: \n";
 for(i=0;i<n;i++){
     cin>>arr[i];
 }
 cout<<"entered array is: \n";
 for(i=0;i<n;i++){
     cout<<"  "<<arr[i];
 }cout<<"\n";
 cout<<"reverse of above array: \n";
 reverse(arr,0,n-1);  
     for(i=0;i<n;i++){
        cout<<"   "<<arr[i];
    }

return 0;
}
