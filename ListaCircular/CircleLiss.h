/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CircleLiss.h
 * Author: andres
 *
 * Created on 16 de mayo de 2017, 10:29 AM
 */

#ifndef CIRCLELISS_H
#define CIRCLELISS_H

class CircleLiss {
public:
    CircleLiss();
    CircleLiss(const CircleLiss& orig);
    virtual ~CircleLiss();
    void InsertBeggin(char value);
    void printList();
    int SearchNode(char value);
    void DeleteNode(char value);
    void ActualizarNode(char value, char valae2);
private:
    
    struct node{
        
        char data;
        struct node *nextPtr, *prevPtr;// * indicamos que este es un puntero
        
        
    };
    
    /*Variables */
    typedef struct node NODE;// para poder usarlos en mayusculas eso es muy de gusto
    typedef NODE *NODEPTR;
    
    NODEPTR headNode;

};

#endif /* CIRCLELISS_H */

