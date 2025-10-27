#include<iostream>
#include<climits>
using namespace std;
int max(int x, int y){
    if(x>y) return x;
    else return y;
}
int min(int x,int y){
    if(x<y) return x;
    else return y;
}
using namespace std;
int main(){
    int size;
    cout<<"Enter number of values : ";
    cin>>size;
    int values[size];
    cout<<"\nEnter values : ";
    for(int i=0 ; i<size ; i++){
        cin>>values[i];
    }
    int maxval=INT_MIN;
    int minval=INT_MAX;
    for(int i=0 ; i<size ; i++){
        minval=min(minval, values[i]);
        maxval=max(maxval, values[i]);
        }
    cout<<"Max Values is : "<<maxval;
    cout<<"\nMin value is : "<<minval;
    return 0;

}