#include<iostream>
using namespace std;
bool magic(int size , int mat[][100]){
   int magicsum=0;
    for(int j=0 ; j<size ; j++){
        magicsum+=mat[0][j];
    }
    for(int i=0 ; i<size ; i++){
        int rsum=0;
      for(int j=0 ; j<size ; j++){
        rsum+=mat[i][j];
      }
      if(magicsum!=rsum){
        return false;
      }
    }
       for(int i=0 ; i<size ; i++){
       int csum=0;
       for(int j=0 ; j<size ; j++){
        csum+=mat[j][i];
       }
        if(magicsum!=csum){
        return false;
      }
    }
    int dsum1=0, dsum2=0;
    for(int i=0 ; i<size ; i++){
        dsum1+=mat[i][i];
    }
        if(magicsum!=dsum1){
            return false; 
          }
          for(int i=0 ; i<size ; i++){
          dsum2+=mat[i][size-i-1];
          }
        if(magicsum!=dsum2){
            return false;
         }
 return true;
}
int main(){
   int size;
   cout<<"Enter size of square matrix : ";\
   cin>>size;
   int mat[100][100];
   cout<<"Enter values : ";
   for(int i=0 ; i<size ; i++){
    for(int j=0 ; j<size ; j++){
        cin>>mat[i][j];
    }
   }
   cout<<"Matrix : "<<endl;
      for(int i=0 ; i<size ; i++){
    for(int j=0 ; j<size ; j++){
        cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    bool MagicSq=magic(size, mat);
    cout<<boolalpha<<"Is it a magic square?"<<" "<<MagicSq;
   return 0;
}