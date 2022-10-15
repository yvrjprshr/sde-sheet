/*
Class and Objects
Constructor: types, shallow copy, deep copy
Destructor
Inheritance
Polymorphism
Compiletime Polymorphism: Function Overloading and Operator Overloading
Runtime Polymorphism: virtual Function: Dynamic Binding
Encapsulation
Abstraction
Pure virtual Function [Abstract CLass]
Friend Function and Friend Class
Static Member and Static Member Function
Local Class
Exception Handling
*/

#include<bits/stdc++.h>
using namespace std;

// defining class and objects

/*
class Geeks{
    public:
    string name;
    void printName(){
        cout << name << endl;
    }
};

int main()
{
    Geeks obj;
    obj.name = "Yuvraj";
    obj.printName();
    return 0;
}
*/


/*

Member Functions in Classes

There are 2 ways to define a member function:

Inside class definition
Outside class definition using scope resolution operator

*/

/*
class Geeks{
    public:
    string name;
    int id;

    void printName();

    void printId(){
        cout << id << endl;
    }
};

void Geeks::printName(){
    cout << name << endl;
}

int main()
{
    Geeks obj;
    obj.id = 1;
    obj.name = "Yuvraj";
    obj.printId();
    obj.printName();
    return 0;
}
*/

// Declaring a friend function is a way to give private access to a non-member function.
// Constructors

// Default constructors
// Parameterized constructors
// Copy constructors


/*
class Geeks{
public:
    int id;

    // Default Constructor
    Geeks(){
        id = -1;
        cout << "Default Constructor called\n";
    }

    // Parameterized Constructor
    Geeks(int x){
        id = x;
        cout << "Parameterized Constructor called";
    }

    // Copy Constructor
    Geeks(const Geeks &obj){
        id = obj.id;
    }
};

int main(){
    Geeks obj1;
    Geeks obj2(2);
    Geeks obj3(obj2);
    return 0;
}
*/

// Copy Constructor
// Shallow Copy and Deep Copy

// Shallow Copy: when compiler automatically creates copy constructor

/*
class Demo{
public:
	int a, *ptr;
	void setData(int p, int q){
		a = p;
		ptr = new int;
		*ptr = q;
	}
	void showData(){
		cout << a << " " << *ptr << endl;
	}
};

int main()
{
	Demo d1;
	d1.setData(12, 14);
	Demo d2 = d1;
	delete d1.ptr; // d2 just copied the point the memory address stored in d1.ptr so when that got deleted, now d2.ptr will point to some random location
	d2.showData();
}
*/

// Deep Copy: when we create copy constructor manually and create a new memory address for ptr

/*
class Demo{
public:
	int data, *ptr;
	Demo(){}
	void setData(int a, int b){
		data = a;
		ptr = new int;
		*ptr = b;
	}
	void showData(){
		cout << data << " " << *ptr << endl;
	}
	Demo(Demo &obj){
		data = obj.data;
		ptr = new int;
		*ptr = *(obj.ptr);
	}
};

int main()
{
	Demo obj1;
	obj1.setData(12, 14);
	Demo obj2 = obj1;
	delete obj1.ptr;
	obj2.showData();
}

*/



// Destructor
/*
class Geeks{
public:
    int id;
    ~Geeks()
    {
        cout << "destructor called\n";
    }
};

int main()
{
    Geeks obj;
}
*/





// Inheritance

// When a base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class and therefore, the public members of the base class can only be accessed by the member functions of the derived class. They are inaccessible to the objects of the derived class.
// o On the other hand, when the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the derived class.

/*
class Parent{
public:
    int id_p;
};

class Child: public Parent{
public:
    int id_c;
};

int main()
{
    Child obj1;
    obj1.id_c = 7;
    obj1.id_p = 10;
    cout << obj1.id_c << " " << obj1.id_p << endl;
}
*/

/*
// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.
class A {
public:
	int x;

protected:
	int y;

private:
	int z;
};

class B : public A {
	// x is public
	// y is protected
	// z is not accessible from B
};

class C : protected A {
	// x is protected
	// y is protected
	// z is not accessible from C
};

class D : private A // 'private' is default for classes
{
	// x is private
	// y is private
	// z is not accessible from D
};
*/


/*
Types Of Inheritance:-
    Single inheritance
    Multilevel inheritance
    Multiple inheritance
    Hierarchical inheritance
    Hybrid inheritance
*/

// Single Level Inheritance

/*
// C++ program to explain
// Single inheritance
#include<iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle\n";
	}
};

// sub class derived from a single base classes
class Car : public Vehicle {

};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}
*/

// Multiple Inheritance

/*
// C++ program to explain
// multiple inheritance
#include <iostream>
using namespace std;

// first base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// second base class
class FourWheeler {
public:
	FourWheeler()
	{
		cout << "This is a 4 wheeler Vehicle\n";
	}
};

// sub class derived from two base classes
class Car : public Vehicle, public FourWheeler {
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.
	Car obj;
	return 0;
}
*/

// Multilevel Inheritance

/*
// C++ program to implement
// Multilevel Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub_class derived from class vehicle
class fourWheeler : public Vehicle {
public:
	fourWheeler()
	{
		cout << "Objects with 4 wheels are vehicles\n";
	}
};
// sub class derived from the derived base class fourWheeler
class Car : public fourWheeler {
public:
	Car() { cout << "Car has 4 Wheels\n"; }
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes.
	Car obj;
	return 0;
}

*/

// Hierarchical Inheritance

/*
// C++ program to implement
// Hierarchical Inheritance
#include <iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};

// first sub class
class Car : public Vehicle {
};

// second sub class
class Bus : public Vehicle {
};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base class.
	Car obj1;
	Bus obj2;
	return 0;
}

*/

// Hybrid/Virtual Inheritance

/*
// Example:

#include <iostream>
using namespace std;

class A
{
	protected:
	int a;
	public:
	void get_a()
	{
	cout << "Enter the value of 'a' : ";
	cin>>a;
	}
};

class B : public A
{
	protected:
	int b;
	public:
	void get_b()
	{
	cout << "Enter the value of 'b' : ";
	cin>>b;
	}
};
class C
{
	protected:
	int c;
	public:
	void get_c()
	{
		cout << "Enter the value of c is : ";
		cin>>c;
	}
};

class D : public B, public C
{
	protected:
	int d;
	public:
	void mul()
	{
		get_a();
		get_b();
		get_c();
		cout << "Multiplication of a,b,c is : " <<a*b*c;
	}
};


int main()
{
	D d;
	d.mul();
	return 0;
}
*/

// PolyMorphism

// Compile-Time Polymorphism
// Run-Time Polymorphism

// CompileTime Polymorphism
// - Function Overloading
// - Operator Overloading

// Function Overloading

/*
class Geeks
{
	public:
	
	// function with 1 int parameter
	void func(int x)
	{
		cout << "value of x is " << x << endl;
	}
	
	// function with same name but 1 double parameter
	void func(double x)
	{
		cout << "value of x is " << x << endl;
	}
	
	// function with same name and 2 int parameters
	void func(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y << endl;
	}
};

int main() {
	
	Geeks obj1;
	
	// Which function is called will depend on the parameters passed
	// The first 'func' is called
	obj1.func(7);
	
	// The second 'func' is called
	obj1.func(9.132);
	
	// The third 'func' is called
	obj1.func(85,64);
	return 0;
}
*/

// Operator Overloading

/*
Square Function Overload
*/

/*
struct S{
    int operator()(int x){
        return x*x;
    }
};

void solve() {
    S square;
    cout<<square(8);
}
*/

/*
class Complex{
private:
	int real, imag;
public:
	Complex(int r=0, int i=0){
		real = r;
		imag = i;
	}

	Complex operator + (Complex const &obj){
		Complex res;
		res.real = real + obj.real;
		res.imag = imag + obj.imag;
		return res;
	}
	
	void print(){
		cout << real << " + i" << imag << endl;
	}
};

int main()
{
	Complex c1(10, 5), c2(2, 4);
	Complex c3 = c1+c2;
	c3.print();
	return 0;
}
*/

// Runtime Polymorphism (late binding/dynamic polymorphism)

// Function Overriding

/*
class Parent{
public:
	void print(){
		cout << "Parent Class\n";
	}
};

class Child: public Parent{
public:
	void print(){
		cout << "Child Class\n";
	}
};

int main(){
	Child ch_obj;
	ch_obj.print();
	return 0;
}*/

// Virtual Function

/*
class Base{
public:
	virtual void display(){
		cout << "display base\n";
	}
	void print(){
		cout << "print base\n";
	}
};

class Child: public Base{
public:
	void display(){
		cout << "display child\n";
	}
	void print()
	{
		cout << "print child\n";
	}
};

int main(){
	Base *bptr;
	Child c_obj;
	bptr = &c_obj;
	bptr->display(); // This will call the virtual function
	bptr->print(); // call non-virtual function
}
*/
// Encapsulation

/*
class Encapsulation{
private:
	int x;
public:
	void set(int a){
		x = a;
	}
	int get(){
		return x;
	}
};

int main(){
	Encapsulation obj;
	obj.set(12);
	cout << obj.get() << endl;
}
*/

// Abstraction

// Abstraction using header files like using pow() function from math.h header file
// Abstraction using classes (using access specifiers)

/*
class Abstraction{
private:
	int a, b;
public:
	void set(int x, int y){
		a = x;
		b = y;
	}
	void display(){
		cout << a << " " << b << endl;
	}
};

int main()
{
	Abstraction obj;
	obj.set(12, 14);
	obj.display();
}*/


// Pure Virtual Function: do nothing function
// Abstract class (if have at least 1 pure virtual function)
// can't create object of abstract class but can have pointer

/*
class Base{
	int x;
public:
	virtual void fun() = 0;
	int getX(){
		return x;
	}
};

class Derived: public Base{
public:
	void fun(){
		cout << "Having Fun in Derived class\n";
	}
};

int main()
{
	Base *ptr;
	ptr = new Derived;
	ptr->fun();
	cout << ptr->getX();
}

*/


// Friend Function
// used to access private and protected members of class

/*
class Distance{
	int meters;
public:
	Distance(){
		meters = 0;
	}
	void displayData(){
		cout << "Meters: " << meters << endl;
	}
	friend void addMeters(Distance &d);
};

void addMeters(Distance &d){
	d.meters += 5;
}

int main()
{
	Distance d;
	d.displayData();
	addMeters(d);
	d.displayData();
	return 0;
}
*/


// Friend Class

/*
class A{
	friend class B;
	int x;
public:
	A(int a){
		x = a;
	}
};

class B{
public:
	void showData(A a){
		cout << "A::a => " << a.x << endl;
	}
};

int main()
{
	A a(12);
	B b;
	b.showData(a);
}
*/

// Static Keyword

// Static Member

/*
class Demo{
public:
	int x;
	static int count;
	// default constructor
	Demo(){
		count++;
	}
};

int Demo::count = 0;

int main()
{
	cout << "Initial Count: " << Demo::count << endl;
	Demo obj;
	cout << "Initial Count: " << Demo::count << endl;
}
*/

// Static Member Functions

/*
class Demo{
	int x;
	static int count;
public:
	Demo(){
		count++;
	}
	static int getCount(){
		return count;
	}
};

int Demo::count = 0;

int main()
{
	Demo obj;
	cout << "Object Count: " << Demo::getCount() << endl; 
}
*/

// Local class: class inside a function

/*
void fun(){
	class Student{
			string name;
			int age;
		public:
			Student(string n, int a){
				name = n, age = a;
			}
			void displayStudent(){
				cout << name << ": " << age << endl;				
			}
	};

	Student obj("Yuvraj", 21);
	obj.displayStudent();
}

int main(){
	fun();
	return 0;
}
*/

// Exceptional Handling
// try, catch, throw

/*
int main()
{
	cout << "Welcome\n";
	try{
		throw "s";
		cout << "Try\n";
	}catch(int e){
		cout << "Exception no: " << e << endl;
	}catch(double e){
		cout << "Exception no: " << e << endl;
	}catch(...){
		cout << "Exception not specified" << endl;
	}
	cout << "Last Line\n";
}
*/

