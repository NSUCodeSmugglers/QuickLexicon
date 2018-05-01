#include "Tree.h"
#include <ctype.h>

Tree::Tree()
{
    Fetch();
}

void Tree::AddWord(string Word,string Def)
{
    string Original = Word;
    transform(Word.begin(), Word.end(), Word.begin(),(int (*)(int))tolower); // Converting word to lowercase string

    TreeNode *nodePtr = root;

    for(int i = 0; Word[i] != '\0'; i++){
        if(Word[i] == 'a'){
            if(nodePtr->a == NULL){
                nodePtr->a = new TreeNode;
                nodePtr = nodePtr->a;
            } else {
                nodePtr = nodePtr->a;
            }
        }

        if(Word[i] == 'b'){
            if(nodePtr->b == NULL){
                nodePtr->b = new TreeNode;
                nodePtr = nodePtr->b;
            } else {
                nodePtr = nodePtr->b;
            }
        }

        if(Word[i] == 'c'){
            if(nodePtr->c == NULL){
                nodePtr->c = new TreeNode;
                nodePtr = nodePtr->c;
            } else {
                nodePtr = nodePtr->c;
            }
        }

        if(Word[i] == 'd'){
            if(nodePtr->d == NULL){
                nodePtr->d = new TreeNode;
                nodePtr = nodePtr->d;
            } else {
                nodePtr = nodePtr->d;
            }
        }

        if(Word[i] == 'e'){
            if(nodePtr->e == NULL){
                nodePtr->e = new TreeNode;
                nodePtr = nodePtr->e;
            } else {
                nodePtr = nodePtr->e;
            }
        }

        if(Word[i] == 'f'){
            if(nodePtr->f == NULL){
                nodePtr->f = new TreeNode;
                nodePtr = nodePtr->f;
            } else {
                nodePtr = nodePtr->f;
            }
        }

        if(Word[i] == 'g'){
            if(nodePtr->g == NULL){
                nodePtr->g = new TreeNode;
                nodePtr = nodePtr->g;
            } else {
                nodePtr = nodePtr->g;
            }
        }

        if(Word[i] == 'h'){
            if(nodePtr->h == NULL){
                nodePtr->h = new TreeNode;
                nodePtr = nodePtr->h;
            } else {
                nodePtr = nodePtr->h;
            }
        }

        if(Word[i] == 'i'){
            if(nodePtr->i == NULL){
                nodePtr->i = new TreeNode;
                nodePtr = nodePtr->i;
            } else {
                nodePtr = nodePtr->i;
            }
        }

        if(Word[i] == 'j'){
            if(nodePtr->j == NULL){
                nodePtr->j = new TreeNode;
                nodePtr = nodePtr->j;
            } else {
                nodePtr = nodePtr->j;
            }
        }

        if(Word[i] == 'k'){
            if(nodePtr->k == NULL){
                nodePtr->k = new TreeNode;
                nodePtr = nodePtr->k;
            } else {
                nodePtr = nodePtr->k;
            }
        }

        if(Word[i] == 'l'){
            if(nodePtr->l == NULL){
                nodePtr->l = new TreeNode;
                nodePtr = nodePtr->l;
            } else {
                nodePtr = nodePtr->l;
            }
        }

        if(Word[i] == 'm'){
            if(nodePtr->m == NULL){
                nodePtr->m = new TreeNode;
                nodePtr = nodePtr->m;
            } else {
                nodePtr = nodePtr->m;
            }
        }

        if(Word[i] == 'n'){
            if(nodePtr->n == NULL){
                nodePtr->n = new TreeNode;
                nodePtr = nodePtr->n;
            } else {
                nodePtr = nodePtr->n;
            }
        }

        if(Word[i] == 'o'){
            if(nodePtr->o == NULL){
                nodePtr->o = new TreeNode;
                nodePtr = nodePtr->o;
            } else {
                nodePtr = nodePtr->o;
            }
        }

        if(Word[i] == 'p'){
            if(nodePtr->p == NULL){
                nodePtr->p = new TreeNode;
                nodePtr = nodePtr->p;
            } else {
                nodePtr = nodePtr->p;
            }
        }

        if(Word[i] == 'q'){
            if(nodePtr->q == NULL){
                nodePtr->q = new TreeNode;
                nodePtr = nodePtr->q;
            } else {
                nodePtr = nodePtr->q;
            }
        }

        if(Word[i] == 'r'){
            if(nodePtr->r == NULL){
                nodePtr->r = new TreeNode;
                nodePtr = nodePtr->r;
            } else {
                nodePtr = nodePtr->r;
            }
        }

        if(Word[i] == 's'){
            if(nodePtr->s == NULL){
                nodePtr->s = new TreeNode;
                nodePtr = nodePtr->s;
            } else {
                nodePtr = nodePtr->s;
            }
        }

        if(Word[i] == 't'){
            if(nodePtr->t == NULL){
                nodePtr->t = new TreeNode;
                nodePtr = nodePtr->t;
            } else {
                nodePtr = nodePtr->t;
            }
        }

        if(Word[i] == 'u'){
            if(nodePtr->u == NULL){
                nodePtr->u = new TreeNode;
                nodePtr = nodePtr->u;
            } else {
                nodePtr = nodePtr->u;
            }
        }

        if(Word[i] == 'v'){
            if(nodePtr->v == NULL){
                nodePtr->v = new TreeNode;
                nodePtr = nodePtr->v;
            } else {
                nodePtr = nodePtr->v;
            }
        }

        if(Word[i] == 'w'){
            if(nodePtr->w == NULL){
                nodePtr->w = new TreeNode;
                nodePtr = nodePtr->w;
            } else {
                nodePtr = nodePtr->w;
            }
        }

        if(Word[i] == 'x'){
            if(nodePtr->x == NULL){
                nodePtr->x = new TreeNode;
                nodePtr = nodePtr->x;
            } else {
                nodePtr = nodePtr->x;
            }
        }

        if(Word[i] == 'y'){
            if(nodePtr->y == NULL){
                nodePtr->y = new TreeNode;
                nodePtr = nodePtr->y;
            } else {
                nodePtr = nodePtr->y;
            }
        }

        if(Word[i] == 'z'){
            if(nodePtr->z == NULL){
                nodePtr->z = new TreeNode;
                nodePtr = nodePtr->z;
            } else {
                nodePtr = nodePtr->z;
            }
        }
    }

    nodePtr->definition = Def;
    nodePtr->word = Original;
}

bool Tree::Search(string Word, string& Def, string& original)
{
    transform(Word.begin(), Word.end(), Word.begin(),(int (*)(int))tolower); // Converting word to lowercase string

    TreeNode *nodePtr = root;

    Def = "";

    for(int i = 0; Word[i] != '\0'; i++){
        if(nodePtr == NULL){
            return false;
        }

        if(Word[i] == 'a'){
            if(nodePtr->a == NULL){
                return false;
            } else {
                nodePtr = nodePtr->a;
            }
        }


        if(Word[i] == 'b'){
            if(nodePtr->b == NULL){
                return false;
            } else {
                nodePtr = nodePtr->b;
            }
        }


        if(Word[i] == 'c'){
            if(nodePtr->c == NULL){
                return false;
            } else {
                nodePtr = nodePtr->c;
            }
        }


        if(Word[i] == 'd'){
            if(nodePtr->d == NULL){
                return false;
            } else {
                nodePtr = nodePtr->d;
            }
        }


        if(Word[i] == 'e'){
            if(nodePtr->e == NULL){
                return false;
            } else {
                nodePtr = nodePtr->e;
            }
        }


        if(Word[i] == 'f'){
            if(nodePtr->f == NULL){
                return false;
            } else {
                nodePtr = nodePtr->f;
            }
        }


        if(Word[i] == 'g'){
            if(nodePtr->g == NULL){
                return false;
            } else {
                nodePtr = nodePtr->g;
            }
        }


        if(Word[i] == 'h'){
            if(nodePtr->h == NULL){
                return false;
            } else {
                nodePtr = nodePtr->h;
            }
        }


        if(Word[i] == 'i'){
            if(nodePtr->i == NULL){
                return false;
            } else {
                nodePtr = nodePtr->i;
            }
        }


        if(Word[i] == 'j'){
            if(nodePtr->j == NULL){
                return false;
            } else {
                nodePtr = nodePtr->j;
            }
        }


        if(Word[i] == 'k'){
            if(nodePtr->k == NULL){
                return false;
            } else {
                nodePtr = nodePtr->k;
            }
        }


        if(Word[i] == 'l'){
            if(nodePtr->l == NULL){
                return false;
            } else {
                nodePtr = nodePtr->l;
            }
        }


        if(Word[i] == 'm'){
            if(nodePtr->m == NULL){
                return false;
            } else {
                nodePtr = nodePtr->m;
            }
        }


        if(Word[i] == 'n'){
            if(nodePtr->n == NULL){
                return false;
            } else {
                nodePtr = nodePtr->n;
            }
        }


        if(Word[i] == 'o'){
            if(nodePtr->o == NULL){
                return false;
            } else {
                nodePtr = nodePtr->o;
            }
        }


        if(Word[i] == 'p'){
            if(nodePtr->p == NULL){
                return false;
            } else {
                nodePtr = nodePtr->p;
            }
        }


        if(Word[i] == 'q'){
            if(nodePtr->q == NULL){
                return false;
            } else {
                nodePtr = nodePtr->q;
            }
        }


        if(Word[i] == 'r'){
            if(nodePtr->r == NULL){
                return false;
            } else {
                nodePtr = nodePtr->r;
            }
        }


        if(Word[i] == 's'){
            if(nodePtr->s == NULL){
                return false;
            } else {
                nodePtr = nodePtr->s;
            }
        }


        if(Word[i] == 't'){
            if(nodePtr->t == NULL){
                return false;
            } else {
                nodePtr = nodePtr->t;
            }
        }


        if(Word[i] == 'u'){
            if(nodePtr->u == NULL){
                return false;
            } else {
                nodePtr = nodePtr->u;
            }
        }


        if(Word[i] == 'v'){
            if(nodePtr->v == NULL){
                return false;
            } else {
                nodePtr = nodePtr->v;
            }
        }


        if(Word[i] == 'w'){
            if(nodePtr->w == NULL){
                return false;
            } else {
                nodePtr = nodePtr->w;
            }
        }


        if(Word[i] == 'x'){
            if(nodePtr->x == NULL){
                return false;
            } else {
                nodePtr = nodePtr->x;
            }
        }


        if(Word[i] == 'y'){
            if(nodePtr->y == NULL){
                return false;
            } else {
                nodePtr = nodePtr->y;
            }
        }


        if(Word[i] == 'z'){
            if(nodePtr->z == NULL){
                return false;
            } else {
                nodePtr = nodePtr->z;
            }
        }


    }

    if(nodePtr->definition == "" || nodePtr->definition == "++"){
        return false;
    } else {
        Def = nodePtr->definition;
        original = nodePtr->word;
        return true;
    }

}

void Tree::Fetch()
{
    ifstream myfile("database.txt");
    string line, word, def;

    if (myfile.is_open()){
        while ( getline (myfile,line) ){
            def = "";
            char *linepointer = &line[0u];
            char* ptr = strtok(linepointer, " ");
            word = ptr;
            int i = 0;

            while (ptr != NULL){
                if(i == 0){
                    word = ptr;
                } else {
                    def += ptr;
                    def += " ";
                }
                ptr = strtok (NULL, " ");
                i++;
            }

            //cout << word << " - ";
            //cout << def << endl;

            if (def != "++"){
                AddWord(word, def);
            } else {
                AddWord(word, "");
            }

        }
    }
}


void Tree::GetSuggestions(string Word)
{
    suggestions[0] = "";
    suggestions[1] = "";
    suggestions[2] = "";
    suggestions[3] = "";
    suggestions[4] = "";

    transform(Word.begin(), Word.end(), Word.begin(),(int (*)(int))tolower); // Converting word to lowercase string

    TreeNode *nodePtr = root;

    for(int i = 0; Word[i] != '\0'; i++){
        if(nodePtr == NULL){
            return;
        }
        if(Word[i] == 'a'){
            if(nodePtr->a == NULL){
                return;
            } else {
                nodePtr = nodePtr->a;
            }
        }


        if(Word[i] == 'b'){
            if(nodePtr->b == NULL){
                return;
            } else {
                nodePtr = nodePtr->b;
            }
        }


        if(Word[i] == 'c'){
            if(nodePtr->c == NULL){
                return;
            } else {
                nodePtr = nodePtr->c;
            }
        }


        if(Word[i] == 'd'){
            if(nodePtr->d == NULL){
                return;
            } else {
                nodePtr = nodePtr->d;
            }
        }


        if(Word[i] == 'e'){
            if(nodePtr->e == NULL){
                return;
            } else {
                nodePtr = nodePtr->e;
            }
        }


        if(Word[i] == 'f'){
            if(nodePtr->f == NULL){
                return;
            } else {
                nodePtr = nodePtr->f;
            }
        }


        if(Word[i] == 'g'){
            if(nodePtr->g == NULL){
                return;
            } else {
                nodePtr = nodePtr->g;
            }
        }


        if(Word[i] == 'h'){
            if(nodePtr->h == NULL){
                return;
            } else {
                nodePtr = nodePtr->h;
            }
        }


        if(Word[i] == 'i'){
            if(nodePtr->i == NULL){
                return;
            } else {
                nodePtr = nodePtr->i;
            }
        }


        if(Word[i] == 'j'){
            if(nodePtr->j == NULL){
                return;
            } else {
                nodePtr = nodePtr->j;
            }
        }


        if(Word[i] == 'k'){
            if(nodePtr->k == NULL){
                return;
            } else {
                nodePtr = nodePtr->k;
            }
        }


        if(Word[i] == 'l'){
            if(nodePtr->l == NULL){
                return;
            } else {
                nodePtr = nodePtr->l;
            }
        }


        if(Word[i] == 'm'){
            if(nodePtr->m == NULL){
                return;
            } else {
                nodePtr = nodePtr->m;
            }
        }


        if(Word[i] == 'n'){
            if(nodePtr->n == NULL){
                return;
            } else {
                nodePtr = nodePtr->n;
            }
        }


        if(Word[i] == 'o'){
            if(nodePtr->o == NULL){
                return;
            } else {
                nodePtr = nodePtr->o;
            }
        }


        if(Word[i] == 'p'){
            if(nodePtr->p == NULL){
                return;
            } else {
                nodePtr = nodePtr->p;
            }
        }


        if(Word[i] == 'q'){
            if(nodePtr->q == NULL){
                return;
            } else {
                nodePtr = nodePtr->q;
            }
        }


        if(Word[i] == 'r'){
            if(nodePtr->r == NULL){
                return;
            } else {
                nodePtr = nodePtr->r;
            }
        }


        if(Word[i] == 's'){
            if(nodePtr->s == NULL){
                return;
            } else {
                nodePtr = nodePtr->s;
            }
        }


        if(Word[i] == 't'){
            if(nodePtr->t == NULL){
                return;
            } else {
                nodePtr = nodePtr->t;
            }
        }


        if(Word[i] == 'u'){
            if(nodePtr->u == NULL){
                return;
            } else {
                nodePtr = nodePtr->u;
            }
        }


        if(Word[i] == 'v'){
            if(nodePtr->v == NULL){
                return;
            } else {
                nodePtr = nodePtr->v;
            }
        }


        if(Word[i] == 'w'){
            if(nodePtr->w == NULL){
                return;
            } else {
                nodePtr = nodePtr->w;
            }
        }


        if(Word[i] == 'x'){
            if(nodePtr->x == NULL){
                return;
            } else {
                nodePtr = nodePtr->x;
            }
        }


        if(Word[i] == 'y'){
            if(nodePtr->y == NULL){
                return;
            } else {
                nodePtr = nodePtr->y;
            }
        }


        if(Word[i] == 'z'){
            if(nodePtr->z == NULL){
                return;
            } else {
                nodePtr = nodePtr->z;
            }
        }
    }

    count = 0;
    Treverse(nodePtr);
}


TreeNode Tree::Treverse(TreeNode* R)
{
    TreeNode NullNode;
    if(count == 5){
        return NullNode;
    } else {
        if(R->definition != ""){
            suggestions[count] = R->word;
            count++;
        } else if(R == NULL){
            return NullNode;
        } else {
            if(R->a != NULL){Treverse(R->a);}
            if(R->b != NULL){Treverse(R->b);}
            if(R->c != NULL){Treverse(R->c);}
            if(R->d != NULL){Treverse(R->d);}
            if(R->e != NULL){Treverse(R->e);}
            if(R->f != NULL){Treverse(R->f);}
            if(R->g != NULL){Treverse(R->g);}
            if(R->h != NULL){Treverse(R->h);}
            if(R->i != NULL){Treverse(R->i);}
            if(R->j != NULL){Treverse(R->j);}
            if(R->k != NULL){Treverse(R->k);}
            if(R->l != NULL){Treverse(R->l);}
            if(R->m != NULL){Treverse(R->m);}
            if(R->n != NULL){Treverse(R->n);}
            if(R->o != NULL){Treverse(R->o);}
            if(R->p != NULL){Treverse(R->p);}
            if(R->q != NULL){Treverse(R->q);}
            if(R->r != NULL){Treverse(R->r);}
            if(R->s != NULL){Treverse(R->s);}
            if(R->t != NULL){Treverse(R->t);}
            if(R->u != NULL){Treverse(R->u);}
            if(R->v != NULL){Treverse(R->v);}
            if(R->w != NULL){Treverse(R->w);}
            if(R->x != NULL){Treverse(R->x);}
            if(R->y != NULL){Treverse(R->y);}
            if(R->z != NULL){Treverse(R->z);}
            return NullNode;
        }
    }
}

void Tree::PrintAll()
{
    TreverseAll(root);
}

TreeNode Tree::TreverseAll(TreeNode* R)
{
    TreeNode NullNode;
    if(R->definition != ""){
        cout << R->word << " - " << R->definition << endl;
    }
    if(R == NULL){
        return NullNode;
    } else {
        if(R->a != NULL){TreverseAll(R->a);}
        if(R->b != NULL){TreverseAll(R->b);}
        if(R->c != NULL){TreverseAll(R->c);}
        if(R->d != NULL){TreverseAll(R->d);}
        if(R->e != NULL){TreverseAll(R->e);}
        if(R->f != NULL){TreverseAll(R->f);}
        if(R->g != NULL){TreverseAll(R->g);}
        if(R->h != NULL){TreverseAll(R->h);}
        if(R->i != NULL){TreverseAll(R->i);}
        if(R->j != NULL){TreverseAll(R->j);}
        if(R->k != NULL){TreverseAll(R->k);}
        if(R->l != NULL){TreverseAll(R->l);}
        if(R->m != NULL){TreverseAll(R->m);}
        if(R->n != NULL){TreverseAll(R->n);}
        if(R->o != NULL){TreverseAll(R->o);}
        if(R->p != NULL){TreverseAll(R->p);}
        if(R->q != NULL){TreverseAll(R->q);}
        if(R->r != NULL){TreverseAll(R->r);}
        if(R->s != NULL){TreverseAll(R->s);}
        if(R->t != NULL){TreverseAll(R->t);}
        if(R->u != NULL){TreverseAll(R->u);}
        if(R->v != NULL){TreverseAll(R->v);}
        if(R->w != NULL){TreverseAll(R->w);}
        if(R->x != NULL){TreverseAll(R->x);}
        if(R->y != NULL){TreverseAll(R->y);}
        if(R->z != NULL){TreverseAll(R->z);}
        return NullNode;
    }
}

void Tree::PrintAllWords()
{
    TreverseWords(root);
}

TreeNode Tree::TreverseWords(TreeNode* R)
{
    TreeNode NullNode;
    if(R->definition != ""){
        cout << R->word << endl;
    }
    if(R == NULL){
        return NullNode;
    } else {
        if(R->a != NULL){TreverseWords(R->a);}
        if(R->b != NULL){TreverseWords(R->b);}
        if(R->c != NULL){TreverseWords(R->c);}
        if(R->d != NULL){TreverseWords(R->d);}
        if(R->e != NULL){TreverseWords(R->e);}
        if(R->f != NULL){TreverseWords(R->f);}
        if(R->g != NULL){TreverseWords(R->g);}
        if(R->h != NULL){TreverseWords(R->h);}
        if(R->i != NULL){TreverseWords(R->i);}
        if(R->j != NULL){TreverseWords(R->j);}
        if(R->k != NULL){TreverseWords(R->k);}
        if(R->l != NULL){TreverseWords(R->l);}
        if(R->m != NULL){TreverseWords(R->m);}
        if(R->n != NULL){TreverseWords(R->n);}
        if(R->o != NULL){TreverseWords(R->o);}
        if(R->p != NULL){TreverseWords(R->p);}
        if(R->q != NULL){TreverseWords(R->q);}
        if(R->r != NULL){TreverseWords(R->r);}
        if(R->s != NULL){TreverseWords(R->s);}
        if(R->t != NULL){TreverseWords(R->t);}
        if(R->u != NULL){TreverseWords(R->u);}
        if(R->v != NULL){TreverseWords(R->v);}
        if(R->w != NULL){TreverseWords(R->w);}
        if(R->x != NULL){TreverseWords(R->x);}
        if(R->y != NULL){TreverseWords(R->y);}
        if(R->z != NULL){TreverseWords(R->z);}
        return NullNode;
    }
}

void Tree::InsertWord(string Word, string Def)
{
    ofstream dataFile;
    dataFile.open ("database.txt", std::ofstream::out | std::ofstream::app);
    if(dataFile.is_open()){
        dataFile << endl;
        dataFile << Word;
        dataFile << " ";
        dataFile << Def;
        dataFile.close();
    }

    AddWord(Word, Def);
}

void Tree::DeleteWord(string Word)
{
    InsertWord(Word,"++");
}

Tree::~Tree()
{
    TreverseToDelete(root);
}

TreeNode Tree::TreverseToDelete(TreeNode* R)
{
    TreeNode NullNode;

    if(R == NULL){
        return NullNode;
    } else {
        if(R->a != NULL){TreverseToDelete(R->a);}
        if(R->b != NULL){TreverseToDelete(R->b);}
        if(R->c != NULL){TreverseToDelete(R->c);}
        if(R->d != NULL){TreverseToDelete(R->d);}
        if(R->e != NULL){TreverseToDelete(R->e);}
        if(R->f != NULL){TreverseToDelete(R->f);}
        if(R->g != NULL){TreverseToDelete(R->g);}
        if(R->h != NULL){TreverseToDelete(R->h);}
        if(R->i != NULL){TreverseToDelete(R->i);}
        if(R->j != NULL){TreverseToDelete(R->j);}
        if(R->k != NULL){TreverseToDelete(R->k);}
        if(R->l != NULL){TreverseToDelete(R->l);}
        if(R->m != NULL){TreverseToDelete(R->m);}
        if(R->n != NULL){TreverseToDelete(R->n);}
        if(R->o != NULL){TreverseToDelete(R->o);}
        if(R->p != NULL){TreverseToDelete(R->p);}
        if(R->q != NULL){TreverseToDelete(R->q);}
        if(R->r != NULL){TreverseToDelete(R->r);}
        if(R->s != NULL){TreverseToDelete(R->s);}
        if(R->t != NULL){TreverseToDelete(R->t);}
        if(R->u != NULL){TreverseToDelete(R->u);}
        if(R->v != NULL){TreverseToDelete(R->v);}
        if(R->w != NULL){TreverseToDelete(R->w);}
        if(R->x != NULL){TreverseToDelete(R->x);}
        if(R->y != NULL){TreverseToDelete(R->y);}
        if(R->z != NULL){TreverseToDelete(R->z);}
        delete R;
        R = NULL;
        return NullNode;
    }
}
