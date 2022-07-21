# 17.CPP-Module-05

* Nested classes = classes imbriquées
* Exceptions

#### Nested classes

```C++
class cat
{
  class paw
}
cat::paw instance;
```

**Exceptions** :  

```C
class GradeTooHighException : public std::exception				
{
	  public:
				virtual const char *what() const throw()
        {
            return ("Bureaucrat::exception : Grade is too high");
			  }
};

  try
    {
        if (something)
            throw GradeTooHighException() ;
    }
    catch (std::exception &e)
    {
        cout << e.what() << endl;
    }
    cout << "Bureaucrat " << name << " was constructed" << endl;

```
