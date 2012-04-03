/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/12 23:28:57
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YueYang (feinno), yueyang@feinno.com
 *        Company:  FCT
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include "misc.h"
#include "queue.h"

int
main ( int argc, char *argv[] ) {
    QUEUE *queue;
    queue = Initialize_Queue();
    char *action_1 = "action_msg";
    char *data_1 = "data_msg";
    size_t sz_1 = 32;

    Add_Queue_Item(queue, action_1, data_1, sz_1);
    char *action_2 = "last_msg";
    char *data_2 = "last_msg";
    size_t sz_2 = 16;
    Add_Queue_Item(queue, action_2, data_2, sz_2);

    QUEUE_ITEM *get_queue;
    get_queue = Get_Queue_Item(queue);
    printf("%s;%s;%u\n",  get_queue->action, (char *)get_queue->data, (unsigned)get_queue->sz);
    Free_Queue_Item(get_queue);
    
    /*QUEUE_ITEM *get_queue;*/
    get_queue = Get_Queue_Item(queue);
    printf("%s;%s;%u\n",  get_queue->action, (char *)get_queue->data, (unsigned)get_queue->sz);
    Free_Queue_Item(get_queue);
    
    get_queue = Get_Queue_Item(queue);
    if( get_queue != NULL) {
        printf("%s;%s;%u\n",  get_queue->action, (char *)get_queue->data, (unsigned)get_queue->sz);
    } else {
        printf ( "queue is empty\n" );
    }
    
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
