//
// Created by Денис Гребенюк on 10.09.2018.
//

#include "tree.h"
#include <iostream>
#include <fstream>
using namespace std;

void tree ::TreeRoot(int x, Tree **tmp) {

    if(*tmp == NULL){
        *tmp = new Tree; // выделяем память под указатель корня
        (**tmp).TreeElement = x; //

        (**tmp).left = NULL;
        (**tmp).right = NULL;

    }
    else {
        if(x < (**tmp).TreeElement) TreeRoot(x, &(**tmp).left);// если х меньше, чем предыдущее число в дереве, то помещаем число слева
        else TreeRoot(x, &(**tmp).right); // иначе справа

    }
}



void tree::SoutTree(Tree **Sout, int l) {


    if (*Sout != NULL) {
        SoutTree(&((**Sout).right), l + 1);
        for (int i = 1; i <= l; i++) cout << "    "; // цикл для пробелов
        cout << (**Sout).TreeElement << endl; // выводим значение дерева
        SoutTree(&((**Sout).left), l + 1);
    }

}

int tree::CreateTree() {
    int current;

    ifstream F;
    F.open("tree.txt"); // открывем файл

    if(!F.is_open()){

        return 1;
    } // если файл не открыт, то возвращаем 1

    else {
        F >> (current); // считываем по биту

        while (current != 0) {
            TreeRoot(current, &TREE); // вызываем функцию распределния по дереву
            F >> current; // продолжаем считывать, пока выполняется словие цикла
        }
    }
}

int main() {

    tree TREE;// создаем экземляр класса tree
    TREE.CreateTree();// вызываем метод и считываем данные в дерево
    TREE.SoutTree(TREE.getValue(), 0);// выводим наше дерево
    return 0;
}