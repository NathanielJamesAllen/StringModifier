#include <iostream>
#include <string>

using namespace std;

string Compress(string, char);
string Replace(string, char, char);

int main()
{
    string name;//name that goes into the str   
    name="Nathaniel J. Allen";
    name=Compress(name, 'n');//char associated with ch
    cout << name;//prints out compressed name
    name=Replace(name, ' ', '$');//char associated with space and $
    cout << name;//prints out new name
    
    return 0;
}

string Compress(string str, char ch)
{
    string result;//result to be returned
    char current;//internal char to be removed
    int i, pos;// loop counter variable, current position 
    result="";
    for(i=0; i<str.length(); i++){
        //goes through loop for length of string
        current=str.at(i);
        if(current != ch)
        result=result+current;//adds letter to string unless current=ch    
    }

    return(result);    
}
string Replace(string str, char ch1, char ch2){
    string result;//result to be returned
    char current;//internal char to be removed
    int i, pos;// loop counter variable, current position 
    result="";
    for(i=0; i<str.length(); i++){
        //goes through loop for length of string
        current=str.at(i);
        if(current != ch1)
        result=result+current;//adds letter to string unless current=ch
        else
        result=result+ch2;//replace letter that is ch1 with ch2
    }
    
    return(result);
}