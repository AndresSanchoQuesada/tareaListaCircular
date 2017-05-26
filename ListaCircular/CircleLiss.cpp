/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CircleLiss.cpp
 * Author: andres
 * 
 * Created on 16 de mayo de 2017, 10:29 AM
 */

#include "CircleLiss.h"
#include <malloc.h>
#include <stdlib.h>
#include <iostream>

CircleLiss::CircleLiss() {
}

CircleLiss::CircleLiss(const CircleLiss& orig) {
}

CircleLiss::~CircleLiss() {
}

void CircleLiss::InsertBeggin(char value){
    //variables

    NODEPTR newPtr, tempPtr;

    //primero -- asignar dinamicamente la memoria
    newPtr = (NODEPTR) malloc(sizeof (NODE)); //malloc para asignar un espacio en la memoria
    newPtr->data = value;
    newPtr-> nextPtr = NULL;
    
    if (headNode==NULL){
        headNode=newPtr;
        headNode->nextPtr=headNode;
        tempPtr=headNode;
        
    }else{
        tempPtr->nextPtr=newPtr;
        newPtr->nextPtr=headNode;
        tempPtr=newPtr;
    }
    
  

}

void CircleLiss::printList(){
     //node temporal
    NODEPTR tempNode = headNode;

    if (tempNode != NULL) {
        
            do{            
            printf("%c--> ", tempNode->data);
            tempNode = tempNode-> nextPtr;
            }while(tempNode!=headNode);    
        printf("NULL\n\n");

    } else {
        printf("the list is empty");
    }//else
    
}

int CircleLiss::SearchNode(char value){
         //node temporal
    NODEPTR tempNode = headNode;
    bool encontrado;
    int cont=1;
    

    if (tempNode != NULL) {
            do{            
                if(tempNode->data==value){
                    printf("valor encontrado en la posición: \n");
                    encontrado=true;
                }
                
                tempNode = tempNode-> nextPtr;
                cont++;
            }while(tempNode!=headNode && encontrado != true); 
        printf("NULL\n\n");
        if(!encontrado){
            printf("nodo no encontrado en la lista: ");
        }
    } else {
        printf("the list is empty");
    }//else
    
    printList();
    return cont; 
    
}

void CircleLiss::DeleteNode(char value){
             //node temporal
    NODEPTR tempNode = headNode;
    node* prevPtr=new node();
    prevPtr=NULL;
    bool encontrado;
    int cont=1; 
    
    if (tempNode != NULL) {
  
            do{            
                if(tempNode->data==value){
                    printf("valor encontrado en la posición: \n");
                    if(tempNode==headNode){
                        headNode=headNode->nextPtr;
                        tempNode->prevPtr=headNode->nextPtr;
                        
                    }else{
                        prevPtr->nextPtr=tempNode->nextPtr;
                    }
                    printf("\n Eliminado con exito  ");
                    encontrado=true;
                }
                prevPtr=tempNode;
                tempNode = tempNode-> nextPtr;
                cont++;
            }while(tempNode!=headNode && encontrado != true); 
        printf("NULL\n\n");
    }//else

    
    printList();
    
}

void CircleLiss::ActualizarNode(char value, char value2){
    NODEPTR newPtr, tempPtr;
    newPtr = (NODEPTR) malloc(sizeof (NODE));;
    
    tempPtr=headNode;
    
    if(tempPtr->data==value){
        headNode->data=value2;
        
    }else{
        while(tempPtr->data!=value){
            tempPtr= tempPtr->nextPtr;
        }
        tempPtr->data=value2;
    }
    
    printList();
    
}