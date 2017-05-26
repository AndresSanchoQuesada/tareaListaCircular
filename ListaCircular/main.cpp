/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: andres
 *
 * Created on 16 de mayo de 2017, 10:26 AM
 */

#include <cstdlib>

#include "CircleLiss.h"

using namespace std;

/*
 * 
 */
int main() {
    CircleLiss myList;
    myList.InsertBeggin('a');
    myList.InsertBeggin('b');
    myList.InsertBeggin('c');
    myList.InsertBeggin('d');
    myList.InsertBeggin('e');
    myList.InsertBeggin('f');
    myList.InsertBeggin('g');
    myList.printList();
    
   
    //myList.printList();
    
    //myList.SearchNode('a');
    
    //myList.DeleteNode('d');
    
    myList.ActualizarNode('a','h');
    
  
    
    
    return 0;
}

