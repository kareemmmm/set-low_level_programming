# 0x1A. C - Hash tables

## Description
This project covers the implementation and utility of Hash Tables in C using the `djb2` hashing algorithm. It handles key-value pairs, collisions via chaining (linked lists), retrieval, and complete memory clearance safely without memory leaks.

## Structure
* `hash_tables.h`: Header file containing the structure definitions and function prototypes.
* `0-hash_table_create.c`: Creates a new hash table.
* `1-djb2.c`: Implements the `djb2` hash algorithm.
* `2-key_index.c`: Returns the index of a given key.
* `3-hash_table_set.c`: Adds or updates an element in the hash table.
* `4-hash_table_get.c`: Retrieves a value associated with a key.
* `5-hash_table_print.c`: Prints the hash table in Python dictionary style format.
* `6-hash_table_delete.c`: Frees all memory associated with the hash table.

---

## Data Structures
The following structures are defined inside `hash_tables.h`:

```c
/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string (unique)
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List (for chaining collision)
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size pointing to cells of linked lists
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
