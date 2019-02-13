//
//  LinkedList.hpp
//  DataStructures
//
//  Created by Bowen, Tanner on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//
#include "List.hpp"

using namespace std; //Used for keyword access. Use this to make sure your pointers are pointing to the right things.

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList();  //Virtual so it can be overridden.
    //Helper methods
    virtual int getSize() const;
    LinearNode<Type> * getfront();
    LinearNode<Type> * getEnt();
    
    //Structure Methods
    virtual void add(Type item);
    virtual void addAtIndex(int index, Type item);
    virtual Type getFromIndex(int index);
    virtual Type remove(int index);
    //    Type setAtIndex(int index, Type item);
    //    bool contains(Type item);
};

template <class Type>
LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size = 0;
}

#endif /* LinkedList_hpp */
