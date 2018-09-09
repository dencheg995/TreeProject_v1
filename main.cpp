//
// Created by Денис Гребенюк on 10.09.2018.
//
#include "tree.h"

int main() {

    tree TREE;// создаем экземляр класса tree
    TREE.CreateTree();// вызываем метод и считываем данные в дерево
    TREE.SoutTree(TREE.getValue(), 0);// выводим наше дерево
    return 0;
}
