#include<iostream>
#include<string>
using namespace std;
int wordlength(string sentence){
    int count=0;
for(int i=0 ; i<sentence.length() ; i++){
    if(sentence[i]==' '){
    count++;
    }
}
 count++;   
    return count;
  }
    int main(){
        string s;
        cout<<"Enter the sentence : ";
        getline(cin,s);
        cout<<"Number of words : "<<wordlength(s);
        return 0;
        }