/*
Parker Haynie
12/4/2022
Smart Pointers Assignment
*/

// This is the header file that contains all of the functions like "cout" and "cin".
#include <iostream>
// This is the header file that is part of the dynamic memory management library.
#include <memory>
// This tells the program to look at the standard namespace for everything that is not declared.
using namespace std;

// This initializes the char variable "again" and sets it equal to "Y".
char again = 'Y';
// This initializes the int variable "choice".
int choice;
// This initializes the int variable "firstInput".
int firstInput;
// This initializes the int variable "secondInput".
int secondInput;

// This initializes the void function "displayTitle()".
void displayTitle();
// This initializes the void function "displayDescription()".
void displayDescription();
// This initializes the void function "askWhichLesson()".
void askWhichLesson();
// This initializes the void function "lessonChoice()".
void lessonChoice();
// This initializes the void function "smartPointer()".
void smartPointer();
// This initializes the void function "sharedPointer()".
void sharedPointer();
// This initializes the void function "weakPointer()".
void weakPointer();
// This initializes the void function "uniquePointer()".
void uniquePointer();
// This initializes the void function "uniquePointerExample()".
void uniquePointerExample();
// This initializes the void function "displayExitMessage()".
void displayExitMessage();

// This is the "main()" function. This is the first function that the program looks at.
int main()
{
    // This displays whatever is in the "displayTitle()" function to the command terminal.
    displayTitle();
    // This displays whatever is in the "displayDescription()" function to the command terminal.
    displayDescription();
    // This is a while loop that allows the user to select another lesson.
    while (again == 'y' || again == 'Y')
    {
        // This displays whatever is in the "askWhichLesson()" function to the command terminal.
        askWhichLesson();
        // This displays whatever is in the "lessonChoice()" function to the command terminal.
        lessonChoice();
    }
    // This displays whatever is in the "displayExitMessage()" function to the command terminal.
    displayExitMessage();
    //This line returns the value "0" after main has already ran through everything.
    return 0;
}

// This is a void function that displays the title of the program.
void displayTitle() {
    cout << "                 All About Smart Pointers\n";
}

// This is a void function that displays the description of the program.
void displayDescription() {
    cout << "----------------------------------------------------------\n";
    cout << "Hello, and welcome to my smart pointers lesson. Here you\n";
    cout << "will be able to learn about the three main pointer types:\n";
    cout << "shared pointer, weak pointer, and unique pointer (there is\n";
    cout << "also an auto pointer, but this lesson will only focus on\n";
    cout << "the core three smart pointers).\n";
    cout << "----------------------------------------------------------\n";
}

// This is a void function that displays the options of lessons that the user can choose from.
void askWhichLesson() {
    cout << "\nNow please decide which lesson you would like to go over.\n";
    cout << "\n1 = What is a smart pointer?\n";
    cout << "2 = What are Shared Pointers?\n";
    cout << "3 = What are Weak Pointers?\n";
    cout << "4 = What are Unique Pointers?\n";
    cout << "5 = View Unique Pointer Example\n";
    cout << "-----------------------------\n";
    cout << "Choice:";
    // This line allows the user to select which lesson they would like to view.
    cin >> choice;
}

// This is a void function that displays a certain function depending on which lesson the user chooses.
void lessonChoice() {
    // This if() only happens if the user inputs "1", being the number that corresponds to the smart pointer lesson.
    if (choice == 1)
    {
        smartPointer();
    }
    // This if() only happens if the user inputs "2", being the number that corresponds to the shared pointer lesson.
    else if (choice == 2)
    {
        sharedPointer();
    }
    // This if() only happens if the user inputs "3", being the number that corresponds to the weak pointer lesson.
    else if (choice == 3)
    {
        weakPointer();
    }
    // This if() only happens if the user inputs "4", being the number that corresponds to the unique pointer lesson.
    else if (choice == 4)
    {
        uniquePointer();
    }
    // This if() only happens if the user inputs "5", being the number that corresponds to the unique pointer lesson.
    else if (choice == 5)
    {
        uniquePointerExample();
    }
    // This if() only happens if the user inputs a invalid number.
    else
    {
        cout << "\nERROR: You entered an invalid number.\n";
        cout << "\nWould you like to try again? ('Y' = Yes, 'N' = No)\n";
        cin >> again;
    }
}

// This is the void function that displays all of the smart pointer lesson information.
void smartPointer() {
    // This line displays the title of the lesson to the console.
    cout << "\n                   What Are Smart Pointers?\n";
    cout << "--------------------------------------------------------------\n";
    // Lines 137-144 display an explanation of smart pointers to the console.
    cout << "Smart pointers are objects which store pointers to dynamically\n";
    cout << "allocated objects. They are essentially pointers that\n";
    cout << "automatically delete the object pointed to at the appropriate\n";
    cout << "time. This feature of smart pointers is particularly useful\n";
    cout << "for exceptions because they ensure proper destruction of\n";
    cout << "dynamically allocated objects. They can also be used to keep\n";
    cout << "track of dynamically allocated objects shared by multiple\n";
    cout << "owners.\n";
    // Lines 146-153 displays a list of advantages and disadvantages of smart pointers to the console.
    cout << "\nAdvantages:\n";
    cout << "-----------\n";
    cout << "- Automated garbage collection\n";
    cout << "- No dangling pointers\n";
    cout << "- Auto initialization\n";
    cout << "\nDisadvantages:\n";
    cout << "--------------\n";
    cout << "- Don't help against loops in graph-like structures\n";
    cout << "\n--------------------------------------------------------------";
    cout << "\nWould you like to choose another lesson? ('Y' = Yes, 'N' = No)\n";
    // This line allows the user to decide if they want to see another lesson.
    cin >> again;
}

// This is the void function that displays all of the shared pointer lesson information.
void sharedPointer() {
    // This line displays the title of the lesson to the console.
    cout << "\n                   What Are Shared Pointers?\n";
    cout << "-------------------------------------------------------------\n";
    // Lines 166-170 display an explanation of shared pointers to the console.
    cout << "Shared pointers are smart pointers that share ownership with\n";
    cout << "any other smart pointer types. The shared pointer maintains a\n";
    cout << "reference count which is incremented when another shared\n";
    cout << "pointer points to the same object. This means that when the\n";
    cout << "reference count is equal to zero, the object is destroyed.\n";
    // Lines 172-173 show how a shared pointer is made in an IDE.
    cout << "\nThis is how you would make a new shared pointer in an IDE:\n";
    cout << "shared_ptr<int> shPtr1 = make_shared<int>();\n";
    // Lines 175-182 displays a list of advantages and disadvantages of shared pointers to the console.
    cout << "\nAdvantages:\n";
    cout << "-----------\n";
    cout << "- Auto-deletion once out-of-scope for all smart pointers that\n";
    cout << "have some ownership.\n";
    cout << "- Auto initiation to null\n";
    cout << "\nDisadvantages:\n";
    cout << "--------------\n";
    cout << "- In order to delete, all smart pointers must be out of scope.\n";
    cout << "\n--------------------------------------------------------------";
    cout << "\nWould you like to choose another lesson? ('Y' = Yes, 'N' = No)\n";
    // This line allows the user to decide if they want to see another lesson.
    cin >> again;
}

// This is the void function that displays all of the weak pointer lesson information.
void weakPointer() {
    // This line displays the title of the lesson to the console.
    cout << "\n                   What Are Weak Pointers?\n";
    cout << "--------------------------------------------------------------\n";
    // Lines 195-199 display an explanation of weak pointers to the console.
    cout << "Weak pointers are smart pointers that do not take ownership of\n";
    cout << "an object but instead acts as an observer. In other words, it\n";
    cout << "does not participate in reference counting to delete an object\n";
    cout << "or extend its lifetime. Weak pointers are mainly used to break\n";
    cout << "the circular dependency that shared pointers create.\n";
    // Lines 201-202 show how a weak pointer is made in an IDE.
    cout << "\nThis is how you would make a new weak pointer in an IDE:\n";
    cout << "weak_ptr<int> wePtr1 = make_shared<int>();\n";
    // Lines 204-211 displays a list of advantages and disadvantages of weak pointers to the console.
    cout << "\nAdvantages:\n";
    cout << "-----------\n";
    cout << "- Not included in Auto-deletion decision\n";
    cout << "- Auto initiation to null\n";
    cout << "- Never has ownership\n";
    cout << "\nDisadvantages:\n";
    cout << "--------------\n";
    cout << "- Cannot assume any ownership\n";
    cout << "\n--------------------------------------------------------------";
    cout << "\nWould you like to choose another lesson? ('Y' = Yes, 'N' = No)\n";
    // This line allows the user to decide if they want to see another lesson.
    cin >> again;
}

// This is the void function that displays all of the unique pointer lesson information.
void uniquePointer() {
    // This line displays the title of the lesson to the console.
    cout << "\n                  What Are Unique Pointers?\n";
    cout << "--------------------------------------------------------------\n";
    // Lines 224-227 display an explanation of unique pointers to the console.
    cout << "Unique pointers are smart pointers that own and manage another\n";
    cout << "object through a pointer and disposes of that object when out\n";
    cout << "of scope. Unique pointers are able to transfer ownership to\n";
    cout << "other unique pointers but they can't share ownership.\n";
    // Lines 229-230 show how a unique pointer is made in an IDE.
    cout << "\nThis is how you would make a new shared pointer in an IDE:\n";
    cout << "unique_ptr<int> unPtr1 = make_unique<int>();\n";
    // Lines 232-239 displays a list of advantages and disadvantages of unique pointers to the console.
    cout << "\nAdvantages:\n";
    cout << "-----------\n";
    cout << "- Auto-deletion once out-of-scope\n";
    cout << "- Auto initiation to null\n";
    cout << "- Can transfer ownership to another unique pointer\n";
    cout << "\nDisadvantages:\n";
    cout << "--------------\n";
    cout << "- Ownership cannot be shared\n";
    cout << "\n--------------------------------------------------------------";
    cout << "\nWould you like to choose another lesson? ('Y' = Yes, 'N' = No)\n";
    // This line allows the user to decide if they want to see another lesson.
    cin >> again;
}

// This is the void function that displays all of the unique pointer example.
void uniquePointerExample() {
    // This line displays the title of the lesson to the console.
    cout << "\n                  Unique Pointer Example\n";
    cout << "--------------------------------------------------------------\n";
    // Lines 252-255 display the explanation of what the unique pointer example lesson is to the console.
    cout << "In this lesson I will show you the code behind unique pointers\n";
    cout << "and then you will be able experince how unique pointers work\n";
    cout << "with your own inputs. Here is the code behind the unique\n";
    cout << "pointer that you are about to interact with:\n";
    // Lines 257-269 display the code behind the unique pointer example.
    cout << "\n    {\n";
    cout << "        cout << 'Please enter first input:';\n";
    cout << "        unique_ptr<int> unPtr1 = make_unique<int>(firstInput);\n";
    cout << "        cout << 'First output:';\n";
    cout << "        cout << *unPtr1 << endl;\n";
    cout << "    }\n";
    cout << "    {\n";
    cout << "        cout << 'Please enter second input:';\n";
    cout << "        cin >> secondInput;\n";
    cout << "        unique_ptr<int> unPtr1 = make_unique<int>(secondInput);\n";
    cout << "        cout << 'Second output:';\n";
    cout << "        cout << *unPtr1 << endl;\n";
    cout << "    }\n";
    // Lines 271-281 display the explanation of the code that was shown above.
    cout << "\nNotice that the 'unPtr1' pointer is used in two different\n";
    cout << "sets of brakets. If the 'unPtr1' pointer was used in the same\n";
    cout << "set of brakets then the user would get an error because the\n";
    cout << "unique pointer doesn't allow sharing between pointers. The\n";
    cout << "two sets of brakets allow for the unique variable to be\n";
    cout << "constructed for the first input and then it is deconstructed\n";
    cout << "upon the first output. Then, with another set of brackets,\n";
    cout << "the unique pointer is constructed once again and used to get\n";
    cout << "a second output once the user has entered a second input.\n";
    cout << "Now you will use the unique pointer to see how it looks on\n";
    cout << "the console.\n";
    // Lines 283-297 are the code behind the real unique pointer example that the user interacts with.
    {
        cout << "\nPlease enter first input:\n";
        // This line allows the user to input a number for the first unique pointer that is constructed.
        cin >> firstInput;
        // This line constructs a unique pointer called "unPtr1" for the first time.
        unique_ptr<int> unPtr1 = make_unique<int>(firstInput);
        cout << "\nFirst output:\n";
        // This line displays the value that the unique pointer is pointing to in its first construction.
        cout << *unPtr1 << endl;
        // The first unique pointer called "unPtr1" gets deconstructed after this ending bracket.
    }   
    {
        cout << "\nPlease enter second input:\n";
        cout << "(Make this second input a different number from the first input)\n";
        // This line allows the user to input a number for the second unique pointer that is constructed.
        cin >> secondInput;
        // This line constructs a unique pointer called "unPtr1" for the second time.
        unique_ptr<int> unPtr1 = make_unique<int>(secondInput);
        cout << "\nSecond output:\n";
        // This line displays the value that the unique pointer is pointing to in its second construction.
        cout << *unPtr1 << endl;
        // The second unique pointer called "unPtr1" gets deconstructed after this ending bracket.
    }
    // Lines 307-309 displays the purpose of this unique pointer example that the user interacted with.
    cout << "\nIt is here that you can see how you can use the same unique\n";
    cout << "pointer can be used within two different scopes to get two\n";
    cout << "different results without having to share or trade ownership.\n";
    cout << "\n--------------------------------------------------------------";
    cout << "\nWould you like to choose another lesson? ('Y' = Yes, 'N' = No)\n";
    // This line allows the user to decide if they want to see another lesson.
    cin >> again;
}

// This is the void function that displays all of the exit message. This exit message only appears when the user decides to stop looking at lessons.
void displayExitMessage() {
    cout << "\n----------------------------------------------";
    cout << "\nThank you for using my pointer lesson program!\n";
}