#include <stdlib.h>
#include <string.h>

#include "hash_table.h"

static ht_item* ht_new_item(const char*k , const char*v){
    ht_item* i = malloc(sizeof(ht_item));
    i->key = strdup(k);
    i->value = strdup(v); 
    return i; 
}

ht_hash_table* ht_new(){
    ht_hash_table* ht = malloc(sizeof(ht_hash_table));

    ht -> size = 53; 
    ht -> count = 0;
    ht -> item = calloc((size_t) ht -> size , sizeof(ht_item*));
    
    return ht; 
}

static void ht_del_item(ht_item* i){
    free(i->key);
    free(i->value);
    free(i); 
}

int main(){

    return 0;
}
