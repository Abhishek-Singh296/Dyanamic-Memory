# Dyanamic Memory Allocation using Malloc Function :computer:

Since C is a structured language, it has some fixed rules for programming. One of them includes changing the size of an array. An array is a collection of items stored at contiguous memory locations. 

![Arrays](https://user-images.githubusercontent.com/113619312/230965104-440ee14e-05f0-4bbd-8f91-07f1fee98b8d.png)

As it can be seen that the length (size) of the array above made is 9. But what if there is a requirement to change this length (size). For Example, If there is a situation where only 5 elements are needed to be entered in this array. In this case, the remaining 4 indices are just wasting memory in this array. So there is a requirement to lessen the length (size) of the array from 9 to 5.

This procedure is referred to as __Dynamic Memory Allocation in C__.
Therefore, C Dynamic Memory Allocation can be defined as a procedure in which the size of a data structure (like Array) is changed during the runtime.
C provides some functions to achieve these tasks. There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming. 
They are: 
- malloc()
- calloc()
- free()
- recalloc()

---

## __C malloc() method__

The “__malloc__” or “memory allocation” method in C is used to dynamically allocate a single large block of memory with the specified size. It returns a pointer of type void which can be cast into a pointer of any form. It doesn’t Initialize memory at execution time so that it has initialized each block with the default garbage value initially. 

## __Syntax:__

```
ptr = (cast-type*) malloc(byte-size)
```

## __Example:__

```
ptr = (int*) malloc(100 * sizeof(int));
Since the size of int is 4 bytes, this statement will allocate 400 bytes of memory. And, the pointer ptr holds the address of the first byte in the allocated memory.
``` 

## __Code:__

```

