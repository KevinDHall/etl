Embedded Template Library (ETL)
-------------------------

**Motivation**

C++ is a great language to use for embedded applications and templates are a powerful aspect. The standard library can offer a great deal of well tested functionality,  but there are some parts of the standard library that do not fit well with deterministic behaviour and limited resource requirements. These limitations usually preclude the use of dynamically allocated memory and open ended sized containers.  

What is needed is a template library where the user can declare the size, or maximum size of any object upfront. Most embedded compilers do not currently support the standard beyond C++ 03, therefore excluding the programmer from using the enhanced features of the later library.

This is what the ETL attempts to achieve.

**Summary**

The ETL is not designed to completely replace the STL, but complement it.  
Its design objective covers three areas.

- Create a set of containers where the size or maximum size is determined at compile time. These containers are direct equivalents of those supplied in the STL.
- Be compatible with C++ 03 but implement as many of the C++ 11 additions as possible.
- Add other useful components that are not present in the standard library.

The embedded template library has been designed for lower resource embedded applications.
It contains a set of containers, algorithms and utilities, some of which emulate parts of the STL.
There is no dynamic memory allocation. The library makes no use of the heap. All of the containers have a fixed capacity allowing all memory allocation to be determined at compile time.
The library is intended for any compiler that supports C++ 03.

**Main features:**

 - No dynamic memory allocation.
 - A set of fixed capacity containers. (stack, queue, list, forward_list, vector, deque)
 - Templated compile time constants.
 - Templated design pattern base classes (Visitor, Observer)
 - Reverse engineered C++ 0x11 features (type traits, algorithms, containers etc.)
 - Smart enumerations
 - 8, 16, 32 & 64 bit CRC calculations
 - Many utilities for template support.
 - Variants (a type that can store many types in a type-safe interface)
 - Optional exceptions on errors.

