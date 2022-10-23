#include "Tree.h"
#include <ctype.h>

Tree::Tree()
{
    Fetch("data/a.lxc");
    Fetch("data/b.lxc");
    Fetch("data/c.lxc");
    Fetch("data/d.lxc");
    Fetch("data/e.lxc");
    Fetch("data/f.lxc");
    Fetch("data/g.lxc");
    Fetch("data/h.lxc");
    Fetch("data/i.lxc");
    Fetch("data/j.lxc");
    Fetch("data/k.lxc");
    Fetch("data/l.lxc");
    Fetch("data/m.lxc");
    Fetch("data/n.lxc");
    Fetch("data/o.lxc");
    Fetch("data/p.lxc");
    Fetch("data/q.lxc");
    Fetch("data/r.lxc");
    Fetch("data/s.lxc");
    Fetch("data/t.lxc");
    Fetch("data/u.lxc");
    Fetch("data/v.lxc");
    Fetch("data/w.lxc");
    Fetch("data/x.lxc");
    Fetch("data/y.lxc");
    Fetch("data/z.lxc");
    Fetch("data/updates.lxc");
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

    if(Def=="++"){
        nodePtr->definition = Def;
        nodePtr->word = "";
        //"++" works as a flag to delete the node
    }else{
        if(nodePtr->definition == "" || nodePtr->definition == "++"){
            nodePtr->definition =  Def;
            nodePtr->word = Original;
        } else {
            nodePtr->definition += Def + "\n";
        }
        //If Word exists already in the tree, the definition will be appended
    }
    nodePtr->word = Original;
}

bool Tree::Search(string Word, string& Def, string& original)
{
    transform(Word.begin(), Word.end(), Word.begin(),(int (*)(int))tolower); 
    // Converting word to lowercase string

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
        //when definition=="" it means that even though the node is not NULL
        //it has no meaning/definition
    } else {
        Def = nodePtr->definition;
        original = nodePtr->word;
        return true;
    }

}

void Tree::Fetch(string FileName)
{
    char *F = &FileName[0u];
    ifstream myfile(F);
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


void Tree::GetSuggestions(string Word, SortedList<string>& suggestions)
{
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
    //nodePtr is now pointing to the word
    Traverse(nodePtr, suggestions);
}


TreeNode Tree::Traverse(TreeNode* R, SortedList<string>& suggestions)
{
    TreeNode NullNode;
    if( suggestions.IsFull() ){
        return NullNode;
    } else {
        if(R->definition != ""){
            suggestions.InsertItem(R->word);
        } else if(R == NULL){
            return NullNode;
        } else {
            if(R->a != NULL){Traverse(R->a,suggestions);}
            if(R->b != NULL){Traverse(R->b,suggestions);}
            if(R->c != NULL){Traverse(R->c,suggestions);}
            if(R->d != NULL){Traverse(R->d,suggestions);}
            if(R->e != NULL){Traverse(R->e,suggestions);}
            if(R->f != NULL){Traverse(R->f,suggestions);}
            if(R->g != NULL){Traverse(R->g,suggestions);}
            if(R->h != NULL){Traverse(R->h,suggestions);}
            if(R->i != NULL){Traverse(R->i,suggestions);}
            if(R->j != NULL){Traverse(R->j,suggestions);}
            if(R->k != NULL){Traverse(R->k,suggestions);}
            if(R->l != NULL){Traverse(R->l,suggestions);}
            if(R->m != NULL){Traverse(R->m,suggestions);}
            if(R->n != NULL){Traverse(R->n,suggestions);}
            if(R->o != NULL){Traverse(R->o,suggestions);}
            if(R->p != NULL){Traverse(R->p,suggestions);}
            if(R->q != NULL){Traverse(R->q,suggestions);}
            if(R->r != NULL){Traverse(R->r,suggestions);}
            if(R->s != NULL){Traverse(R->s,suggestions);}
            if(R->t != NULL){Traverse(R->t,suggestions);}
            if(R->u != NULL){Traverse(R->u,suggestions);}
            if(R->v != NULL){Traverse(R->v,suggestions);}
            if(R->w != NULL){Traverse(R->w,suggestions);}
            if(R->x != NULL){Traverse(R->x,suggestions);}
            if(R->y != NULL){Traverse(R->y,suggestions);}
            if(R->z != NULL){Traverse(R->z,suggestions);}
            return NullNode;
        }
    }

    return NullNode;
}

void Tree::PrintAll()
{
    TraverseAll(root);
}

TreeNode Tree::TraverseAll(TreeNode* R)
{
    //This function prints all the words with definition
    //Called from PrintAll() function
    
    TreeNode NullNode;
    if(R->definition != ""){
        cout << R->word << " - " << R->definition << endl;
    }
    if(R == NULL){
        return NullNode;
    } else {
        if(R->a != NULL){TraverseAll(R->a);}
        if(R->b != NULL){TraverseAll(R->b);}
        if(R->c != NULL){TraverseAll(R->c);}
        if(R->d != NULL){TraverseAll(R->d);}
        if(R->e != NULL){TraverseAll(R->e);}
        if(R->f != NULL){TraverseAll(R->f);}
        if(R->g != NULL){TraverseAll(R->g);}
        if(R->h != NULL){TraverseAll(R->h);}
        if(R->i != NULL){TraverseAll(R->i);}
        if(R->j != NULL){TraverseAll(R->j);}
        if(R->k != NULL){TraverseAll(R->k);}
        if(R->l != NULL){TraverseAll(R->l);}
        if(R->m != NULL){TraverseAll(R->m);}
        if(R->n != NULL){TraverseAll(R->n);}
        if(R->o != NULL){TraverseAll(R->o);}
        if(R->p != NULL){TraverseAll(R->p);}
        if(R->q != NULL){TraverseAll(R->q);}
        if(R->r != NULL){TraverseAll(R->r);}
        if(R->s != NULL){TraverseAll(R->s);}
        if(R->t != NULL){TraverseAll(R->t);}
        if(R->u != NULL){TraverseAll(R->u);}
        if(R->v != NULL){TraverseAll(R->v);}
        if(R->w != NULL){TraverseAll(R->w);}
        if(R->x != NULL){TraverseAll(R->x);}
        if(R->y != NULL){TraverseAll(R->y);}
        if(R->z != NULL){TraverseAll(R->z);}
        return NullNode;
    }
}

void Tree::PrintAllWords()
{
    TraverseWords(root);
}

TreeNode Tree::TraverseWords(TreeNode* R)
{
    TreeNode NullNode;
    if(R->definition != ""){
        cout << R->word << endl;
    }
    if(R == NULL){
        return NullNode;
    } else {
        if(R->a != NULL){TraverseWords(R->a);}
        if(R->b != NULL){TraverseWords(R->b);}
        if(R->c != NULL){TraverseWords(R->c);}
        if(R->d != NULL){TraverseWords(R->d);}
        if(R->e != NULL){TraverseWords(R->e);}
        if(R->f != NULL){TraverseWords(R->f);}
        if(R->g != NULL){TraverseWords(R->g);}
        if(R->h != NULL){TraverseWords(R->h);}
        if(R->i != NULL){TraverseWords(R->i);}
        if(R->j != NULL){TraverseWords(R->j);}
        if(R->k != NULL){TraverseWords(R->k);}
        if(R->l != NULL){TraverseWords(R->l);}
        if(R->m != NULL){TraverseWords(R->m);}
        if(R->n != NULL){TraverseWords(R->n);}
        if(R->o != NULL){TraverseWords(R->o);}
        if(R->p != NULL){TraverseWords(R->p);}
        if(R->q != NULL){TraverseWords(R->q);}
        if(R->r != NULL){TraverseWords(R->r);}
        if(R->s != NULL){TraverseWords(R->s);}
        if(R->t != NULL){TraverseWords(R->t);}
        if(R->u != NULL){TraverseWords(R->u);}
        if(R->v != NULL){TraverseWords(R->v);}
        if(R->w != NULL){TraverseWords(R->w);}
        if(R->x != NULL){TraverseWords(R->x);}
        if(R->y != NULL){TraverseWords(R->y);}
        if(R->z != NULL){TraverseWords(R->z);}
        return NullNode;
    }
}

void Tree::InsertWord(string Word, string Def)
{
    ofstream dataFile;
    dataFile.open ("data/updates.lxc", std::ofstream::out | std::ofstream::app);
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
    TraverseToDelete(root);
}

TreeNode Tree::TraverseToDelete(TreeNode* R)
{
    TreeNode NullNode;

    if(R == NULL){
        return NullNode;
    } else {
        if(R->a != NULL){TraverseToDelete(R->a);}
        if(R->b != NULL){TraverseToDelete(R->b);}
        if(R->c != NULL){TraverseToDelete(R->c);}
        if(R->d != NULL){TraverseToDelete(R->d);}
        if(R->e != NULL){TraverseToDelete(R->e);}
        if(R->f != NULL){TraverseToDelete(R->f);}
        if(R->g != NULL){TraverseToDelete(R->g);}
        if(R->h != NULL){TraverseToDelete(R->h);}
        if(R->i != NULL){TraverseToDelete(R->i);}
        if(R->j != NULL){TraverseToDelete(R->j);}
        if(R->k != NULL){TraverseToDelete(R->k);}
        if(R->l != NULL){TraverseToDelete(R->l);}
        if(R->m != NULL){TraverseToDelete(R->m);}
        if(R->n != NULL){TraverseToDelete(R->n);}
        if(R->o != NULL){TraverseToDelete(R->o);}
        if(R->p != NULL){TraverseToDelete(R->p);}
        if(R->q != NULL){TraverseToDelete(R->q);}
        if(R->r != NULL){TraverseToDelete(R->r);}
        if(R->s != NULL){TraverseToDelete(R->s);}
        if(R->t != NULL){TraverseToDelete(R->t);}
        if(R->u != NULL){TraverseToDelete(R->u);}
        if(R->v != NULL){TraverseToDelete(R->v);}
        if(R->w != NULL){TraverseToDelete(R->w);}
        if(R->x != NULL){TraverseToDelete(R->x);}
        if(R->y != NULL){TraverseToDelete(R->y);}
        if(R->z != NULL){TraverseToDelete(R->z);}
        delete R;
        R = NULL;
        return NullNode;
    }
}
