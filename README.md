# 17.CPP-Module-05

* Répétitions
* Exceptions
* 

#### Polymorphisme par sous-typage

```
virtual devant fonction membre ->  méthode = sa résolution devient dynamique
```

**Compilation** :  

>Process of source code files (.c or .cpp) and the creation of an 'object' file. This step doesn't create anything the user can actually run. 

**Linking** :   

>Linking refers to the creation of a single executable file from multiple object files. In this step, it is common that the linker will complain about undefined functions. During compilation, if the compiler could not find the definition for a particular function, it would just assume that the function was defined in another file.


#### **TO_STRING** version sstream c++98 codée dans [brain.cpp](ex01/Brain.cpp)

#### Use of a virtual destructor
> When a pointer object of the base class is deleted that points to the derived class, only the parent class destructor is called due to the early bind by the compiler. In this way, it skips calling the derived class' destructor, which leads to memory leaks issue in the program.

#### Abstract Classes  
> * **Non instanciable**  
> * All the non implemented member functions have to be implemented in the derived/inherited class


#### Interfaces
>  * Abstract class in which **all the member functions are not implemented**
