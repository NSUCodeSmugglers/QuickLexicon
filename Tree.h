#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include "TreeNode.h"
#include "SortedList.h"

class Tree{
public:
    TreeNode *root = new TreeNode;
    Tree();
    ~Tree();
    bool Search(string,string&,string&);
    void DeleteWord(string);
    void InsertWord(string,string);
    void GetSuggestions(string, SortedList<string>&);
    void PrintAll();
    void PrintAllWords();
private:
    void AddWord(string,string);
    TreeNode Traverse(TreeNode*, SortedList<string>&);
    TreeNode TraverseAll(TreeNode*);
    TreeNode TraverseWords(TreeNode*);
    TreeNode TraverseToDelete(TreeNode*);
    void Fetch(string);
};

#endif // TREE_H_INCLUDED
