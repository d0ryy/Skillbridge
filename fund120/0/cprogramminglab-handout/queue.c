/* 
 * Code for basic C skills diagnostic.
 * Developed for courses 15-213/18-213/15-513 by R. E. Bryant, 2017
 * Modified to store strings, 2018
 */

/*
 * This program implements a queue supporting both FIFO and LIFO
 * operations.
 *
 * It uses a singly-linked list to represent the set of queue elements
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "harness.h"
#include "queue.h"
//#define DEBUG

/*
  Create empty queue.
  Return NULL if could not allocate space.
*/
queue_t *q_new()
{
    queue_t *q =  malloc(sizeof(queue_t));
#ifdef DEBUG
    printf("%i malloc of *q: %p\n", __LINE__, q);
#endif
    /* What if malloc returned NULL? */
    if(!q)
	    return NULL;
    q->head = NULL; 	//Sets HEAD to null, thus meaning empty queue
    q->tail = NULL; 	//Nullify tail 
    q->size = 0;	//set size to 0. Used to count how many items added
    return q; 
}

/* Free all storage used by queue */
void q_free(queue_t *q)
{
    /* How about freeing the list elements and the strings? */

    if(q != NULL){
	list_ele_t *tempy;	
	while(q->head != NULL){
		tempy = q->head;
		if(q->head->value != NULL)
			tempy->value = q->head->value;
		q->head = q->head->next;
		if(tempy->value != NULL){
#ifdef DEBUG
    			printf("%i tempy->value before free: %p\n", __LINE__, tempy->value);
#endif
			free(tempy->value);
		}
#ifdef DEBUG
    		printf("%i tempy before free: %p\n", __LINE__, tempy);
#endif
		free(tempy);

	//printf("\nValue of tempy->value: %s\n", tempy->value);
	}
    /* Free queue structure */
#ifdef DEBUG
    	printf("%i q before free: %p\n", __LINE__, q);
#endif
	free(q);
    }
}

/*
  Attempt to insert element at head of queue.
  Return true if successful.
  Return false if q is NULL or could not allocate space.
  Argument s points to the string to be stored.
  The function must explicitly allocate space and copy the string into it.
 */
bool q_insert_head(queue_t *q, char *s)
{
    /* What should you do if the q is NULL? */
    if (!q) 				// if queue ==null means queue is invalid. q-> head means empty.
	    return false;	
   
   
    list_ele_t *newh;
    newh = malloc(sizeof(list_ele_t));		// sets heap space to size of struct list_ele_t/ELE
#ifdef DEBUG
    printf("%i malloc of newh: %p\n", __LINE__, newh);
#endif
    if(!newh){				// if newh == null 
//	free(newh);
    	return false; 			// memory allocation failed, return false
    }

    /* Don't forget to allocate space for the string and copy it */ 
    newh->value = malloc(strlen(s) + 1); 	//get stringlength + one for null end
#ifdef DEBUG
    printf("%i malloc of newh->value: %p\n", __LINE__, newh->value);
#endif
    if(!newh->value){				// if newh->value == NULL
	free(newh);
    	return false; 				//memory allocation failed
    }
	
    strcpy(newh->value, s); 			// string copy (destination, source)
    /* What if either call to malloc returns NULL? */
    newh->next = q->head;
    q->head = newh;
    q->size++;
    if(!q->tail)				//Only is run at the create of queue (q->tail is still equal to null)
	    q->tail = newh;			//sets q tail = new header item
    return true;
    // free - newh   | newh->value
}

/*
  Attempt to insert element at tail of queue.
  Return true if successful.
  Return false if q is NULL or could not allocate space.
  Argument s points to the string to be stored.
  The function must explicitly allocate space and copy the string into it.
 */
bool q_insert_tail(queue_t *q, char *s)
{
	list_ele_t *newt;
	if(!q)
		return false;
	newt = malloc(sizeof(list_ele_t));
#ifdef DEBUG
    	printf("%i malloc of newt: %p\n", __LINE__, newt);
#endif
	if(!newt){
		return false;
	}
	newt->value = malloc(strlen(s)+1);
#ifdef DEBUG
    	printf("%i malloc of newt->value: %p\n", __LINE__, newt->value);
#endif
	if(!newt->value){
		free(newt);
		return false;
	}
	strcpy(newt->value, s);

	newt->next = NULL; 			//Due to new last item. Next has to be null
	q->tail->next = newt;			//Set the current tail next, to new current last (newt / new tail)
	q->tail = newt;				//set q->tail to newt
	q->size++;
	return true;	
}

/*
  Attempt to remove element from head of queue.
  Return true if successful.
  Return false if queue is NULL or empty.
  If sp is non-NULL and an element is removed, copy the removed string to *sp
  (up to a maximum of bufsize-1 characters, plus a null terminator.)
  The space used by the list element and the string should be freed.
*/
bool q_remove_head(queue_t *q, char *sp, size_t bufsize)
{
    /* You need to fix up this code. */
	if (!q || !q->head)		//is queue empty or null?
		return false;

	if (sp != NULL){
		strncpy(sp, q->head->value, (bufsize-1));
		sp[bufsize -1] = '\0';
	}
//	printf("\n This is value of bufsize: %ld \n buffsize - 1 = %ld\n sp[buffsize]: %c | sp[buffsize -1]: %c \n", bufsize, (bufsize -1),sp[bufsize], sp[bufsize-1] );

	
	list_ele_t *tmp = q->head;	
	tmp->value = q->head->value;

	q->head = q->head->next;
	free(tmp->value);
	free(tmp);
	q->size--; 
    return true;
}

/*
  Return number of elements in queue.
  Return 0 if q is NULL or empty
 */
int q_size(queue_t *q)
{
	if (!q || !q->head)
		return 0;
    /* You need to write the code for this function */
    /* Remember: It should operate in O(1) time */
	return q->size;
}

/*
  Reverse elements in queue
  No effect if q is NULL or empty
  This function should not allocate or free any list elements
  (e.g., by calling q_insert_head, q_insert_tail, or q_remove_head).
  It should rearrange the existing ones.
 */
void q_reverse(queue_t *q)
{
    /* You need to write the code for this function */
	if(!q || !q->head) {
	}else{
		list_ele_t *prev = NULL, *current = q->head, *next;
		q->tail = q->head;
		while (current != NULL){	//Keeps going until end of list is found (null)
			next = current->next;	//sets next var to the next in list
			current->next = prev;	//Sets head next var to NULL (at start), after sets it to the pevious one 
			prev = current;		//Sets prev to the current value, used to store value and use for next loop
			current = next;		//sets the now current value to the one that was next.
		}
		q->head = prev; //sets the now last element to the head of queue. Thus completing the reverse
	}
}

