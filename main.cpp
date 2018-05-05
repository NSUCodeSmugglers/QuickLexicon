#include<iostream>
#include<string>
#include<thread>
#include<windows.h>
#include"Tree.h"

using namespace std;

void setUpConsole();
void mainMenu(Tree&);
void displayMainMenu();
void searchPage(Tree&);
void bookMarkPage();
void handleCommandLineArg(string, Tree&);

int main(int argc, char *argv[]){
    Tree dictionary;

    if(argc==2){
       string word(argv[1]);
       handleCommandLineArg(word,dictionary); 
    }
    setUpConsole();
    mainMenu(dictionary); 
}

void setUpConsole(){
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console,r.left, r.top,600,600, true);
}

void mainMenu(Tree& dictionary){
    int choice;
    displayMainMenu();
    do{
        cin>>choice;
        switch(choice){
            case 0:
                exit(1);
            case 1:
                searchPage(dictionary);
                break;
            case 2:
                bookMarkPage();
                break;
        }
    }while( !( choice==0 || choice==1 || choice==2 ));
    getchar();
}

void displayMainMenu(){
    system("cls");
    cout<<"\n\n\n\t\t\t";
    cout<<"QUICK LEXICON\n";
    cout<<"\t\t\t._._._._._._.\n\n";
    cout<<"\t\t[1] Search a word\n";
    cout<<"\t\t[2] See Bookmarked words\n";
    cout<<"\t\t[3] Exit the program\n\t\t";
}

void bookMarkPage(){
    cout<<"Leaving it to Ubuntu";
}

void searchPage(Tree& dictionary){
    cout<<"search"<<endl;
}

void handleCommandLineArg(string word, Tree& dictionary){
    int choice;
    string original, definition;
    if(dictionary.Search(word,definition,original)){
    cout<<"Meaning of "<<word<<":"<<endl;
        cout<<definition<<endl;
    }
    cout<<"\n[1]Dictionary App"<<endl;
    cout<<"[2]Exit"<<endl;
    cin>>choice;
    if(choice==2){
        exit(1);
    }
}