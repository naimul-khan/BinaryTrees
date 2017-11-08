# BinaryTrees
			
				28
			       /  \
			     25    31
			    /  \     \
			  22    26    33
			 /  \           
                       21    23

So first check if there is root
- if(root != NULL)

If there is a root, then set the current pointer to the root
- curr = root; 

Check if the current stored data is greater than or less than the adding node
- if(curr->data < addData){} ... else if(curr->data > addData){}

If the stored data is smaller, set current pointer to the left pointing node
- curr = curr->nextLeft; 

Check if current node is NULL, run search again
- if(curr != NULL){ search() }

If node is NULL, set node equal to newNode
- curr = newTreeNode; 

... ok, so this is a recursive function and we need to write the search() function
What should search() do?
- Check value of current node
- Assign to next node value
- Check if next node is NULL
- Run search again if it is NULL

search(int searchData, treePtr *currentPtr){
	if(curr->data < searchData){
		curr = curr->nextLeft; 
		if(curr != NULL)
		search(searchData, &curr); 
	} else if(curr->data > searchData){
		curr = curr->nextRight; 
		if(curr != NULL)
		search(searchData, &curr)
	} else { 
		cout << "You entered a number in the list\n
		or there was an error\n";
	}
}


	
				28
			       /  \
			     25    31
			    /  \     \
			  22    26    33
			 /  \           
                       21    23
 		
Printing a list

Check if root is NULL
if(root != NULL)

Set current node euqal to root node
curr = root; 

Print data of current node
cout  << curr->data << endl; 

Check if there is a left node, if so, print data
if(curr->nextLeft != NULL){
	curr = curr->nextLeft; 
	cout << curr->data<< endl;
	print(curr);
}

				28
			       /  \
			     25    31
			    /  \     \
			  22    26    33
			 /  \           
                       21    23

----------------
if(curr!=NULL)
cout << curr->data; 
if(curr->nextLeft != NULL && curr->nextRight != NULL){ 
	currLeft = curr->nextLeft; 
	cout << curLeft; 
	print(currLeft); 
	currRight = curr->nextRight;
	cout << curRight; 
	print(currRight); 
} else if(curr->nextLeft != NULL && curr->nextRight == NULL){
	currLeft = curr->nextLeft;
	cout << currLeft; 
	print(currLeft);
} else if(curr->nextLeft == NULL && curr->nextRight != NULL){
	currLeft = curr->nextLeft;
	cout << currLeft; 
	print(currLeft);
}
