//  VowelCounter
//  Created by Nicolas Lara on 11/25/19.


#include <iostream>
#include <string>
using namespace std;

int vowelCounter(string);
bool isVowel(char);

int main()
{
    string sentence;
    
    getline(cin,sentence);
    
    cout<<"There is "<<vowelCounter(sentence)<<" vowels in this sentence\n";
    
    return 0;
}

int vowelCounter(string x)
{
    int VC=0;
    
    for(int i=0; i < x.length(); i++)
    {
        if(isVowel(x[i]))
           {
               VC++;
           }
    }
    
    return VC;
}

bool isVowel(char z)
{
    z= toupper(z);
    
    if(z=='A' || z=='E' || z=='I' || z=='O' || z=='U')
    {
        return true;
    }
    
    return false;
    
}
