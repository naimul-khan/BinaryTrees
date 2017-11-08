#pragma once
#ifndef TREE_H
#define TREE_H

#include <iostream>
using namespace std;

#include <cstdlib>
#include <iostream>
using namespace std; 

class Tree {
private: 
	// structure of tree node
	typedef struct treeNode {
		int data;
		treeNode *nextLeft;
		treeNode *nextRight;
	}*treePtr;

	treePtr root; 
	treePtr curr; 
	treePtr temp; 

	treePtr search(int searchData, treePtr current) {
		if (current->data < searchData) {
			current = current->nextLeft;
			if (current != NULL)
				search(searchData, current);
		}
		else if (curr->data > searchData) {
			current = current->nextRight;
			if (current != NULL)
				search(searchData, current);
		}
		else if (current == NULL) {
			return current; 
		} 
	}

public: 
	Tree() {
		root = NULL; 
		curr = NULL; 
		temp = NULL; 
	}

	// add node
	void addNode(int addData) {
		// create node
		treePtr n = new treeNode; 
		n->data = addData;
		n->nextLeft = NULL; 
		n->nextRight = NULL;

		if (root != NULL) {
			curr = root; 
			n = search(addData, curr); 
		}
		else {
			root = n;
		}
	}

};

#endif