#include<iostream>
#include<string>
#include<windows.h>
#include<conio.h>
#include"Tree.h"

using namespace std;

void setUpConsole();
void mainMenu(Tree&);
void displayMainMenu();
void searchPage(Tree&);
void searchResult(Tree&, string);
void displaySuggestions(SortedList<string>);
void getCursorXY(int&, int&);
void curPos(int,int);
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
    char input;
    SortedList<string> suggestionList;
    string searchWord = "";
    string temp;
    system("cls");

    cout<<endl<<endl<<"\t\t";
    cout<<"Enter word to search: ";
    while(1){
        input = getche();
        switch(input){
            case 13:
                //ENTER
                searchResult(dictionary, searchWord);
                break;
            case '1':
                suggestionList.GetNextItem(temp);
                searchResult(dictionary, temp);
                break;
            case '2':
                suggestionList.GetNextItem(temp);
                suggestionList.GetNextItem(temp);
                searchResult(dictionary, temp);
                break;
            case '3':
                suggestionList.GetNextItem(temp);
                suggestionList.GetNextItem(temp);
                suggestionList.GetNextItem(temp);
                searchResult(dictionary, temp);
                break;
            case '\b':
                if(searchWord.size()>0){
                    searchWord = searchWord.substr(0, searchWord.size()-1);
                    cout<<" \b";
                }else{
                    cout<<" ";
                }
                break;
        }
        
        
        suggestionList.DeleteAll();
        if(input!='\b'){
            searchWord = searchWord+input;
        }
        dictionary.GetSuggestions(searchWord, suggestionList);

        if(searchWord.size()>=3){
            displaySuggestions(suggestionList);
        }
        
    }

}

void searchResult(Tree& dictionary, string searchWord){
    system("cls");
    int choice;
    string original, definition;
    cout<<endl<<endl;
    cout<<"Showing result for "<<searchWord<<endl;
    if( dictionary.Search(searchWord, definition, original) ){
        cout<<endl<<definition<<endl;
    }
    else{
        cout<<"No results for "<< searchWord <<endl;
    }
    cout<<endl<<"\t\t"<<"[1] Main Menu\t";
    cout<<"[0] Exit"<<endl;;
    do{
        cin>>choice;
        if(choice==1){
            mainMenu(dictionary);
        }
        if(choice==0){
            exit(1);
        }
    }while(!(choice==1 || choice==0));
}

void displaySuggestions(SortedList<string> suggestionList){
    int x,y;
    getCursorXY(x,y);

    int tempx, tempy;
    cout<<endl<<endl<<"\t\t";
    getCursorXY(tempx,tempy);
    for(int i=0; i<60; i++){
        //To clear that line
        cout<<" ";
    }
    curPos(tempx,tempy);

    for(int i=0; i<suggestionList.GetLength(); i++){
        string suggestion;
        cout<<"["<<i+1<<"] ";
        suggestionList.GetNextItem(suggestion);
        cout<<suggestion<<"\t";
    }
    suggestionList.ResetList();
    curPos(x,y);
    //cout<<p.x<<" "<<p.y<<endl;

    //Move the cursor back to the typing point

}

void getCursorXY(int &x, int&y) {
	
		CONSOLE_SCREEN_BUFFER_INFO csbi;
	
		if (GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi)) {	
			x = csbi.dwCursorPosition.X;
			y = csbi.dwCursorPosition.Y;		
		}
}

void curPos(int x,int y) {
    HANDLE hStdout;
    CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
    hStdout=GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hStdout, &csbiInfo);
    csbiInfo.dwCursorPosition.X=x;
    csbiInfo.dwCursorPosition.Y=y;
    SetConsoleCursorPosition(hStdout, csbiInfo.dwCursorPosition);
}

void handleCommandLineArg(string word, Tree& dictionary){
    int choice;
    string original, definition;
    if(dictionary.Search(word,definition,original)){
        cout<<"Meaning of "<<word<<":"<<endl;
        cout<<definition<<endl;
    }
    else{
        cout<<"No result found for "<<word<<endl;
    }
    cout<<"\n[1]Dictionary App"<<endl;
    cout<<"[2]Exit"<<endl;
    cin>>choice;
    if(choice==2){
        exit(1);
    }
}

