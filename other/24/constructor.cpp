/*
	* A constructor in C++ is a special ‘MEMBER FUNCTION’ having the same name as that of its class
		-> which is used to initialize some valid values to the data members of an object. 
		-> It is executed automatically whenever an object of a class is created.
	* it must not have a return type or void.

	* This compiler generates a default constructor
		-> However, if you define a default constructor explicitly, the compiler no longer generates a default constructor for you.
		-> Constructor Overloading (It is made possible by providing more than one constructor in a class called Constructor overloading.)
		-> The copy constructor in c++ is a constructor that creates an object by initialising it with a previously created object of the same class.
	* Member initializer lists
		-> A constructor can optionally have a member initializer list, which initializes class members before the constructor body runs.
		-> Prefer member initializer lists over assigning values in the body of the constructor. A member initializer list directly initializes the members.
		-> ... will lead to each variable being written to twice, once for the default initialization and once for the assignment in the constructor body.
		-> const members and reference members can only be initialized in an initialization list.
	* Constructors may be declared as inline, explicit, friend, or constexpr.
	* If any non-default constructors are declared, the compiler doesn't provide a default constructor
	* A constructor can initialize an object that has been declared as const, volatile or const volatile.
	* const members and members of reference type must be initialized in the member initializer list.

	* Copy constructors
		A copy constructor initializes an object by copying the member values from an object of the same type. If your class members are all simple types such as scalar values, the compiler-generated copy constructor is sufficient and you don't need to define your own. If your class requires more complex initialization, then you need to implement a custom copy constructor. For example, if a class member is a pointer then you need to define a copy constructor to allocate new memory and copy the values from the other's pointed-to object. The compiler-generated copy constructor simply copies the pointer, so that the new pointer still points to the other's memory location.
		? Box(Box& other);
			Avoid if possible--allows modification of other.
		? Box(const Box& other);
			Additional parameters OK if they have default values
   		? Box(Box& other, int i = 42, string label = "Box");
		When you define a copy constructor, you should also define a copy assignment operator (=). 
		You can prevent your object from being copied by defining the copy constructor as deleted:
		? Box (const Box& other) = delete;
	* Move constructors (c++11)

!------------------------------------------
	* Destructor
		-> A destructor is a member function that is invoked automatically when the object goes out of scope
			or is explicitly destroyed by a call to delete. A destructor has the same name as the class, preceded by a tilde (~).
		-> If you do not define a destructor, the compiler will provide a default one;
		-> You only need to define a custom destructor when the class stores handles to system resources that need to be released
		-> Do not accept arguments.
		-> Do not return a value (or void).
		-> Can be declared as virtual. Using virtual destructors,
	* Destructors are called when one of the following events occurs:
		-> A local (automatic) object with block scope goes out of scope.
		-> An object allocated using the new operator is explicitly deallocated using delete.
		-> A program ends and global or static objects exist.
		-> The destructor is explicitly called using the destructor function's fully qualified name.
*/

class Box {
public:
    // Default constructor
    Box() {}

    // Initialize a Box with equal dimensions (i.e. a cube)
    explicit Box(int i) : m_width(i), m_length(i), m_height(i) // member init list
    {}

    // Initialize a Box with custom dimensions
    Box(int width, int length, int height)
        : m_width(width), m_length(length), m_height(height) //  Member initializer lists
    {}

    int Volume() { return m_width * m_length * m_height; }

private:
    // Will have value of 0 when default constructor is called.
    // If we didn't zero-init here, default constructor would
    // leave them uninitialized with garbage values.
    int m_width{ 0 };
    int m_length{ 0 };
    int m_height{ 0 };
};

int	main()
{
	return (0);
}
