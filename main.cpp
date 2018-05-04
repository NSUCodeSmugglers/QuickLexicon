#include<iostream>
#include"Tree.h"
#include<string>

using namespace std;

int main(){
    string meaning;
    string s;
    Tree dictionary;
    dictionary.Search("abaci",meaning,s);
    //cout<<"Meaning of Cat:"<<endl;
    //cout<<meaning;
    //dictionary.PrintAll();

    SortedList<string> list(3);
    dictionary.GetSuggestions("hot", list);
    
    list.PrintAll();
    cout<<list.GetLength();
    return 0;
}