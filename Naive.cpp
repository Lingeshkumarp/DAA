#include <iostream>
#include<string>
using namespace std;
void Naive(string text,string pattern){
    int j;
    int n=text.length();
    int m=pattern.length();
    for(int i=0;i<n-m;i++){
        for(j=0;j<m;j++){
            if(text[i+j]!=pattern[j]){
                break;
            }
        }
        if(j==m){
            cout<<"Patter found at index"<<i<<endl;
        }
        else{
            cout<<"Pattern Not founded at this index"<<i<<endl;
        }
    }
}
int main() {
    string text,pattern;
    cout<<"Enter the text string : ";
    cin>>text;
    cout<<"Enter the pattern string : ";
    cin>>pattern;
    Naive(text,pattern);
    
    return 0;
}