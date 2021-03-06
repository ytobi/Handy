## handy_list

A doubly linked list container. Good for data of 
unknown size. Reading and writing to and from `handy_list` is of order *O(n)*.

##### Usage

Start by creating a `handy_list` object:

```c
    handy_list my_list;
```

Initialize `handy_list` object:

```c
    my_list = handy_create_list();
```

A handy_list object has fields that affords list operation, they are listed below.

**For best performance and for predictable behavior, fields whose name
begins with underscore(_) should not be use**.

| Fields            | Signature                             | Description                          |
|:------------------|:--------------------------------------|:------------------------------------|
| `contain`         | `int ( handy_list, void * )`        | Returns the location of the item if found in the list, or -1 if item is not found.|
| `add_front`       | `bool ( handy_list, void * )`       | Attempts to add an item to first position in the list, returns true if successful or false if not successful.|
| `add_back`        | `bool ( handy_list, void * )`       | Attempts to add an item to last position in the list, returns true if successful or false if not successful.
| `add_at`          | `bool ( handy_list, void *, int )`  | Attempts to add an item to a specified position in the list, returns true if successful or false if not successful.
| `empty`           | `bool ( handy_list )`               | Returns true if the list is empty and length == 0 or empty will return false if list is not empty and length > 0.
| `get_front`       | `void * ( handy_list )`             | Returns the first item in the list, at position 0.`get_front` will return `NULL` if list is empty.
| `get_back`        | `void * ( handy_list )`             | Returns the last item in the list, at position length - 1. `get_back` will return `NULL` if list is empty.
| `get_at`          | `void * ( handy_list, int * )`      | Returns the item in the list at the specified position. `get_at` will return `NULL` if item at position is not found.
| `rem_front`       | `bool ( handy_list )`               | Attempts to remove the first item in the list, at position 0. `rem_front` will return true if successful or false if unsuccessful.
| `rem_back`        | `bool ( handy_list )`               | Attempts to remove the last item in the list, at position length - 1. `rem_back` will return true if successful or false if unsuccessful.
| `rem_at`          | `bool ( handy_list )`               | Attempts to remove the item in the list at the specified position. `rem_at` will return true if successful or false if unsuccessful.
| `reverse`         | `void ( handy_list )`               | Reverse the items in the list.
| `free`            | `void ( handy_list )`               | Free all memory allocated to hold items in list. This should be call whenever the container is no longer need.
| `length`          | `int ( handy_list )`                | Return a count of all items in list.
| `_first`          | `handy_list_object`                 | Points to the first item in list.
| `_last`           | `handy_list_object`                 | Points to the last item in list.
| `_size`           | `int`                               | Holds the number of items in list.


Checkout an implemented example at [examples/example_handy_list.c](../examples/example_handy_list.c).