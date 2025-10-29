#include<iostream>
using namespace std;
int mat_add(int x, int y){
return x+y;
}
int main(){
int a[3][4] = {{2,5,7,1}, {1,3,6,1}, {5,4,1,3}};
int b[3][4] = {{1,9,5,0}, {7,1,5,4}, {3,4,2,8}};
    cout<<"Matrix 1 : "<<endl;
    for(int i=0 ; i<3 ; i++){
    for(int j=0 ; j<4 ; j++){
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
}
    cout<<endl;
    cout<<"Matrix 2 : "<<endl;
    for(int i=0 ; i<3 ; i++){
    for(int j=0 ; j<4 ; j++){
        cout<<b[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<endl;
cout<<"Sum Of Matrices is : "<<endl;
for(int i=0; i<3; i++){
    for(int j=0 ; j<4; j++){
        cout<<mat_add(a[i][j], b[i][j])<<"\t";
    }
    cout<<endl;
}
return 0;
}
