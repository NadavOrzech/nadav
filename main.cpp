#include <iostream>
#include "map_tree.h"

using std::cout;
int main() {
    Map_tree<int,double>* tree = new Map_tree<int,double>();
    tree->add_node(1,1.1);
    tree->add_node(2,2.2);
    tree->add_node(4,4.4);
    tree->add_node(7,7.7);
    tree->add_node(5,5.5);

//    cout << *tree->get_root() ;
//    ostream std::stream os=std::cout;
    tree->printTree(cout);
//    printTree(cout,tree);
    return 0;
}