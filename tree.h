//
// Created by Денис Гребенюк on 10.09.2018.
//

#ifndef UNTITLED3_TREE_H
#define UNTITLED3_TREE_H

#include <clocale>

struct Tree{
    int TreeElement;
    Tree *left;
    Tree *right;
};

class tree {

private:
    Tree *TREE; //указатель на корень дерева

public:
    tree() //иницилизируем конструктор
    {
        TREE = NULL;
    }

    Tree** getValue(){
        return &TREE;
    }; // возвращаем значение корня дерева

    void TreeRoot(int, Tree**); //метод для распределения данных по дереву
    void SoutTree(Tree**, int); // метод для вывода дерева на консоль
    int CreateTree(); // метод для чтения дерева из файла

};


#endif //UNTITLED3_TREE_H
