#include<iostream>
using namespace std;
void transpose(int row, int col, int mat[][100], int trans[][100]){
    for(int i=0 ; i<row ; i++){
        for(int j=0 ; j<col ; j++){
            trans[j][i]=mat[i][j];
        }
    }
    cout<<"Transpose : "<<endl;
 for(int i=0 ; i<col ; i++){
        for(int j=0 ; j<row ; j++){
            cout<<trans[i][j]<<" ";
        }
    cout<<endl;
    }
}
int main(){
    int row, col;
    cout<<"Enter number of rows and columns : ";
    cin>>row>>col;
int mat[100][100];
int trans[100][100];
cout<<"Input : "<<endl;
for(int i=0 ; i<row ; i++){
    for(int j=0 ; j<col ; j++){
    cin>>mat[i][j];
    }
}
    transpose(row, col, mat, trans);
return 0;
}