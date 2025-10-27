#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void rand(int N , int R , int random[]){
    srand(time(0));
    for(int i=0 ; i<N ; i++){
    random[i]=rand()%R;
    }
    cout<<"Random Numbers : "<<endl;
    for(int i=0 ; i<N ; i++){
        cout<<random[i]<<" ";
    }
}
int main(){
    int N, R;
    cout<<"Enter number of random numbers to be generated : ";
    cin>>N;
    cout<<"Enter upper bound within which numbers are to be generated : ";
    cin>>R;
    int random[100];
    rand(N , R , random);
    return 0;
}