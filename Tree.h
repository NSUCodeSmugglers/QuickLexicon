#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include "TreeNode.h"

class Tree{
public:
    string suggestions[5] = {"","","","",""};
    int count = 0;
    TreeNode *root = new TreeNode;
    Tree();
    ~Tree();
    bool Search(string,string&,string&);
    void DeleteWord(string);
    void InsertWord(string,string);
    void GetSuggestions(string Word);
    void PrintAll();
    void PrintAllWords();
private:
    void AddWord(string,string);
    TreeNode Treverse(TreeNode*);
    TreeNode TreverseAll(TreeNode*);
    TreeNode TreverseWords(TreeNode*);
    TreeNode TreverseToDelete(TreeNode*);
    void Fetch();
};

#endif // TREE_H_INCLUDED
