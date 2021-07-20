#include <iostream>
#include "ClassRoom.h"
#include "Student.h"
#include "students.txt"

using namespace std;

class Classroom {       // The Class
    public:             // Access specifier
        string fName;   // Class Attributes (8)
        string lName;
        int Ssn;
        int Score1;
        int Score2;
        int Score3;
        int Score4;
        int Avg;
}

int main() {            
    ClassRoom myObj;    // Create an object of ClassRoom

        Student studentObj;             // Create student object by reading students.txt.
                                        // Put student objects in the array of Students.

                                        // Sort array of students by average score.

                                        // Display students by average score.

                                        // Sort Array of students by last name.

                                        // Display students by last name.

                                        // Display the number of Student Objects(total number of students).
                        
                                        // Calculate and Display the average scores.
}
