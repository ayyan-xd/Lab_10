#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;
void rand(int N , int R , int random[]){
    srand(time(0));
    int count=0;
    for(int i=0 ; i<N ; i++){
    random[i]=rand()%R;
    count++;
    }
    cout<<"Random Numbers : ";
    for(int i=0 ; i<N ; i++){
        cout<<random[i]<<" ";
    }
}
double mean(int N , int random[]){
    double m=0.0;
for(int i=0 ; i<N ; i++){
    m=(m+random[i]);
}
    m=m/N;
return m;
}
double SD(int N , double m, int random[]){
    double temp, num=0;
for(int i=0 ; i<N ; i++){
    temp=random[i]-m;
    num+=temp*temp;
}
    double var=num/(N-1);
    double stand_dev=sqrt(var);
    return stand_dev;
}
int main(){
    int N, R, sum=0;
    double m=0.0, stand_dev=0.0;
    cout<<"Enter number of random numbers to be generated : ";
    cin>>N;
    cout<<"Enter upper bound within which numbers are to be generated : ";
    cin>>R;
    int random[100];
    rand(N , R , random);
    m=mean(N, random);
    cout<<"\nMean is : "<<m;
    stand_dev=SD(N, m, random);
    cout<<"\nStandard Deviation is : "<<stand_dev;
    return 0;
}