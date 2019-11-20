//  This project uses the wordCounter function to take in a string as a parameter and returns the number of words in the string.
//  Created by Nicolas Lara on 11/19/19.

#include <iostream>
#include <cstring>

using namespace std;

int wordCounter(string);

int main()
{
    string word;
    
    getline(cin,word);
    
    cout<<"there is "<<wordCounter(word)<<" words in the string\n";
    
    return 0;
}

int wordCounter(string x)
{
    int counter = 0;
    bool space =true;
    for(int i=0; i<x.length(); i++)
    {
        if(x[i]==' ')
        {
            space=true;
        }
        else if(space)
        {
            counter++;
            space=false;
        }
        
    }
    return counter;
    
    
}
