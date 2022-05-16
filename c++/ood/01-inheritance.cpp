// Person (base class)
class Person
{
private:
    string name;  // name
    string idNum; // university ID number
public:
    void print();     // print information
    string getName(); // retrieve name
};

// Student (derived from Person)
class Student : public Person
{
private:
    string major; // major subject
    int gradYear; // graduation year
public:
    void print();                             // print information
    void changeMajor(const string &newMajor); // change major
};

// Usage
Person person("Mary", "12");          // declare a Person
Student student("Bob", "98", "Math"); // declare a Student
cout << student.getName() << endl;    // Person::getName()
person.print();                       // Person::print()
student.print();                      // Student::print()
// person.changeMajor("Physics");     // ERROR!
student.changeMajor("English"); // okay

// Static Binding
Person *pp[100];          // array of 100 Person pointers
pp[0] = new Person(...);  // add a Person (details omitted)
pp[1] = new Student(...); // add a Student (details omitted)

cout << pp[1]−> getName() << '\n'; // okay
pp[0]->print();                    // calls Person::print()
pp[1]->print();                    // also calls Person::print()

pp[1]->changeMajor("English"); // ERROR!

// Since pp[1] is declared to be a pointer to a Person, the members for that class are used

// Dynamic Binding
class Person
{
    virtual void print() { ... }
};

class Student : public Person
{
    virtual void print() { ... }
};

Person *pp[100];          // array of 100 Person pointers
pp[0] = new Person(...);  // add a Person (details omitted)
pp[1] = new Student(...); // add a Student (details omitted)
pp[0]->print();           // calls Person::print()
pp[1]->print();           // calls Student::print()

// pp[1] contains a pointer to an object of type Student, and
// by the power of dynamic binding with virtual functions, the
// function Student::print will be called
