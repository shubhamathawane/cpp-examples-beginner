#include<iostream>
#include<fstream>

using namespace std;

int main(){
    
    
    // 1. Use Ofstream = ofstream newFile("C:\\Users\\HP\\Desktop\\text.txt");
    // for creating files and
    // 2. use ifstream = ifstream newFile("C:\\Users\\HP\\Desktop\\text.txt");
    // for reading/accessing files 


    string str;
    ifstream newFile("C:\\Users\\HP\\Desktop\\text.txt");

    while(getline(newFile,str))
    {
        cout<<str<<endl; 
    }



    newFile.close();

    return 0;
}