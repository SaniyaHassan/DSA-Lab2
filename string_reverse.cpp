#include <iostream>
#include <cstring>
using namespace std;
int main(){
    /*We create a string as a buffer here so when we allocate the memory 
    dynamically,memory gets allocated on heap as per the string user entered*/
    string input;
    cout<<"Enter a string of any length:"<<endl;
    getline(cin,input);
    //Now we dynamically allocate the memory for the input string
    //We allocate one byte extra for the NULL terminator
    char *str=new char[input.length()+1];
    /*Now we copy the contents of the string (input) into our
     dynamically allocated char array (str) so we can modify it*/
    strcpy(str, input.c_str());
    int len=strlen(str);
    //String reversal logic using two pointers
    char *start=str;
    char *end=str+len-1;
    while(start<end){
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    cout<<"Reversed string is:"<<endl<<str<<endl;
    
    delete[] str;
    return 0;
}