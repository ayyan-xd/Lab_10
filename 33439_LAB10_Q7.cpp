#include<iostream>
using namespace std;
void chain(int size , int arr[]){
int count=1, num=0, tempcount=1;
    for(int i=0 ; i<size-1 ;i++){
    if(arr[i]==arr[i+1]){
    tempcount++;
    }
    else tempcount=1;
    if(tempcount>count){
        num=arr[i];
        count=tempcount;
    }       
}
    cout<<"Longest run : "<<count<<" Consecutive "<<num<<"s.";
}
int main(){
    int size;
    cout<<"Enter number of values : ";
    cin>>size;
    int arr[100];
    cout<<"Enter values : ";
    for(int i=0 ; i<size  ; i++){
        cin>>arr[i];
    }
    chain(size, arr);
    return 0;

}
