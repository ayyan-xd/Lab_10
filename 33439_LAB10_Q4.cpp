#include<iostream>
using namespace std;
int sum_col(int mat[3][3] , int col_num){
    int j=col_num-1, sum=0;
   for(int i=0 ; i<3 ; i++){
        sum+=mat[i][j];
    }
    return sum;
}
int main(){
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Matrix : "<<endl;
    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
int col_num;
cout<<"Enter a column : ";
cin>>col_num;
cout<<"\nSum of  column "<<col_num<<" is :"<<sum_col(mat , col_num)<<endl;
return 0;
}