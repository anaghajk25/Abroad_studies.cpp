#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Class and function for Program #01 (Basic Application Form)
void runProgram1() {
    string name, course, country, email;
    int age;
    float gpa;
    cout << "=== Welcome to Abroad Studies Application Portal ===\n\n";
    cout << "Enter your full name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter your email address: ";
    getline(cin, email);
    cout << "Enter your desired course (e.g., MS in CS): ";
    getline(cin, course);
    cout << "Enter your preferred country for studies: ";
    getline(cin, country);
    cout << "Enter your current GPA (out of 10): ";
    cin >> gpa;

    cout << "\n=== Application Summary ===\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Email: " << email << endl;
    cout << "Course Chosen: " << course << endl;
    cout << "Country of Interest: " << country << endl;
    cout << "GPA: " << gpa << endl;

    if (gpa >= 7.5) {
        cout << "\nStatus: You are eligible to apply for abroad studies programs.\n";
    } else {
        cout << "\nStatus: You may need to improve your GPA to qualify for top universities.\n";
    }
    cout << "\nThank you for using the Abroad Studies Portal!\n";
}

// Class and function for Program #02 (Function Overloading)
class Student2 {
public:
    void displayDetails(string name, string country = "USA", string course = "MS in CS") {
        cout << "Student Name: " << name << endl;
        cout << "Preferred Country: " << country << endl;
        cout << "Applied Course: " << course << endl;
        cout << "---------------------------------" << endl;
    }
};

void runProgram2() {
    Student2 s;
    s.displayDetails("Ananya", "Canada", "MBA");
    s.displayDetails("Rahul", "Germany");
    s.displayDetails("Priya");
}

// Class and function for Program #03 (Friend Function)
class Student3 {
private:
    int marks = 0; // Initialize marks to avoid garbage value
public:
    friend void display(Student3);
};

void display(Student3 s) {
    cout << "Marks: " << s.marks << endl;
}

void runProgram3() {
    Student3 s;
    display(s);
}

// Class and function for Program #04 (Parameterized Constructor)
class AbroadStudies4 {
public:
    int age;
    string name;
    string location;

    AbroadStudies4(string n, int a, string l) {
        name = n;
        age = a;
        location = l;
    }

    void getdata() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Location: " << location << endl;
    }
};

void runProgram4() {
    AbroadStudies4 a("Anagha", 18, "India");
    a.getdata();
}

// Class and function for Program #05 (Static Members)
class AbroadStudies5 {
private:
    static int totalStudents;
public:
    AbroadStudies5() {
        totalStudents++;
    }
    static void showTotalStudents() {
        cout << "Total students applied abroad: " << totalStudents << endl;
    }
    static string checkVisaEligibility(double ieltsScore) {
        if (ieltsScore >= 6.5)
            return "Eligible for Visa";
        else
            return "Not Eligible for Visa";
    }
    static void displayUniversities() {
        cout << "\nPopular Universities for Abroad Studies:\n";
        cout << "1. Harvard University (USA)\n";
        cout << "2. University of Toronto (Canada)\n";
    }
};

int AbroadStudies5::totalStudents = 0;

void runProgram5() {
    int choice;
    double ieltsScore;
    do {
        cout << "\n=== Abroad Studies Management Menu ===\n";
        cout << "1. Add a new student\n";
        cout << "2. Show total students\n";
        cout << "3. Check visa eligibility\n";
        cout << "4. Display universities\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1: {
                AbroadStudies5 newStudent;
                cout << "New student added successfully!\n";
                break;
            }
            case 2:
                AbroadStudies5::showTotalStudents();
                break;
            case 3:
                cout << "Enter IELTS Score: ";
                cin >> ieltsScore;
                cout << "Visa Status: " << AbroadStudies5::checkVisaEligibility(ieltsScore) << endl;
                break;
            case 4:
                AbroadStudies5::displayUniversities();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
}

// Class and function for Program #06 (Function Overloading and Data Input)
class AbroadStudies6 {
public:
    string name;
    string country;
    string university;
    int age;

    void display(string name) {
        cout << "Name: " << name << endl;
    }
    void display(string name, string university) {
        cout << "Name: " << name << endl;
        cout << "University: " << university << endl;
    }
    void display(string name, string university, string country) {
        cout << "Name: " << name << endl;
        cout << "University: " << university << endl;
        cout << "Country: " << country << endl;
    }
    void display(string name, string university, string country, int age) {
        cout << "Name: " << name << endl;
        cout << "University: " << university << endl;
        cout << "Country: " << country << endl;
        cout << "Age: " << age << endl;
    }
    void getdata() {
        cout << "enter the name: ";
        cin >> name;
        cout << "enter the university: ";
        cin >> university;
        cout << "enter the country: ";
        cin >> country;
        cout << "enter the age: ";
        cin >> age;
    }
};

void runProgram6() {
    AbroadStudies6 s;
    s.getdata();
    s.display("Anagha");
    s.display("Alton", "Harvard University");
    s.display("Akshara", "Oxford", "UK");
    s.display("John", "MIT", "USA", 22);
}

// Class and function for Program #07 (Operator Overloading)
class AbroadStudies7 {
public:
    string name, university, country;
    int age;
    float ieltsscr;

    AbroadStudies7(string n, string u, string c, int a, float i) {
        name = n;
        university = u;
        country = c;
        age = a;
        ieltsscr = i;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "University: " << university << endl;
        cout << "Country: " << country << endl;
        cout << "Age: " << age << endl;
        cout << "IELTS score: " << ieltsscr << endl;
    }
    AbroadStudies7 operator++() {
        ++ieltsscr;
        return *this;
    }
    AbroadStudies7 operator--() {
        --ieltsscr;
        return *this;
    }
    bool operator!() {
        if (ieltsscr >= 6.7)
            return false;
        else
            return true;
    }
};

void eligibility(AbroadStudies7 &s) {
    if (!s)
        cout << "Student is not eligible" << endl;
    else
        cout << "Student is eligible" << endl;
    ++s;
    cout << "After incrementing\n";
    s.display();
    cout << "\n";
    --s;
    cout << "After decrementing\n";
    s.display();
    cout << "---------------------\n";
}

void runProgram7() {
    AbroadStudies7 a1("anagha", "oxford", "USA", 17, 6.5);
    AbroadStudies7 a2("akshaya", "cambridge", "canada", 18, 7.6);
    eligibility(a1);
    eligibility(a2);
}

// Class and function for Program #08 (Operator Overloading for Class Objects)
class Application8 {
private:
    int university;
public:
    Application8(int u = 0) {
        university = u;
    }
    Application8 operator+(Application8 &a) {
        Application8 temp;
        temp.university = university + a.university;
        return temp;
    }
    void getdata() {
        cout << "Total universities applied: " << university << endl;
    }
};

void runProgram8() {
    Application8 a1(5);
    Application8 a2(6);
    Application8 combined = a1 + a2;
    cout << "Applicant 1: ";
    a1.getdata();
    cout << "Applicant 2: ";
    a2.getdata();
    cout << "Combined applications: ";
    combined.getdata();
}

// Class and function for Program #09 (Multi-level Inheritance)
class Student9 {
protected:
    string name;
    int age;
    string countryPreference;
public:
    void getStudentDetails() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Preferred Country: ";
        cin >> countryPreference;
    }
    void displayStudentDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Preferred Country: " << countryPreference << endl;
    }
};

class Application9 : public Student9 {
protected:
    string course;
    string university;
public:
    void getApplicationDetails() {
        cout << "Enter Course Applied: ";
        cin >> course;
        cout << "Enter University: ";
        cin >> university;
    }
    void displayApplicationDetails() {
        cout << "\n--- Application Details ---\n";
        cout << "Course: " << course << endl;
        cout << "University: " << university << endl;
    }
};

class Visa9 : public Application9 {
private:
    string visaStatus;
public:
    void getVisaDetails() {
        cout << "Enter Visa Status (Approved/Rejected): ";
        cin >> visaStatus;
    }
    void displayVisaDetails() {
        cout << "\n--- Visa Details ---\n";
        cout << "Visa Status: " << visaStatus << endl;
    }
};

void runProgram9() {
    Visa9 v;
    int choice;
    do {
        cout << "\n====== Abroad Studies Management System ======\n";
        cout << "1. Enter Student Details\n";
        cout << "2. Enter Application Details\n";
        cout << "3. Enter Visa Details\n";
        cout << "4. Display All Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                v.getStudentDetails();
                break;
            case 2:
                v.getApplicationDetails();
                break;
            case 3:
                v.getVisaDetails();
                break;
            case 4:
                v.displayStudentDetails();
                v.displayApplicationDetails();
                v.displayVisaDetails();
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);
}

// Class and function for Program #10 (Multiple Inheritance)
class Student10 {
protected:
    string name;
    int age;
public:
    void getStudentDetails() {
        cout << "Enter Student Name: ";
        cin >> name;
        do {
            cout << "Enter Age: ";
            cin >> age;
            if (age < 18) {
                clog << "An error occurred: Age must be 18 or older.\n";
            }
        } while (age < 18);
    }
    void displayStudentDetails() {
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Course10 {
protected:
    string courseName;
    string university;
public:
    void getCourseDetails() {
        cout << "Enter Course Name: ";
        cin >> courseName;
        cout << "Enter University: ";
        cin >> university;
    }
    void displayCourseDetails() {
        cout << "\n--- Course Details ---\n";
        cout << "Course: " << courseName << endl;
        cout << "University: " << university << endl;
    }
};

class AbroadApplication10 : public Student10, public Course10 {
private:
    string countryPreference;
public:
    void getApplicationDetails() {
        cout << "Enter Preferred Country: ";
        cin >> countryPreference;
    }
    void displayApplicationDetails() {
        cout << "\n===== Abroad Application Summary =====\n";
        displayStudentDetails();
        displayCourseDetails();
        cout << "Preferred Country: " << countryPreference << endl;
    }
};

void runProgram10() {
    AbroadApplication10 app;
    int choice;
    bool studentEntered = false, courseEntered = false, countryEntered = false;
    do {
        cout << "\n====== Abroad Studies Management Menu ======\n";
        cout << "1. Enter Student Details\n";
        cout << "2. Enter Course Details\n";
        cout << "3. Enter Application (Country Preference)\n";
        cout << "4. Display Full Application\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                app.getStudentDetails();
                studentEntered = true;
                break;
            case 2:
                app.getCourseDetails();
                courseEntered = true;
                break;
            case 3:
                if (!studentEntered) {
                    cout << "Please enter Student Details first\n";
                } else {
                    app.getApplicationDetails();
                    countryEntered = true;
                }
                break;
            case 4:
                if (studentEntered && courseEntered && countryEntered) {
                    app.displayApplicationDetails();
                } else {
                    cout << "Please complete all details before displaying\n";
                }
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                clog << "An error occurred: Invalid choice.";
        }
    } while (choice != 5);
}

// Main menu to run all programs
int main() {
    int choice;
    do {
        cout << "\n========================================\n";
        cout << "  Abroad Studies Management Master Menu  \n";
        cout << "========================================\n";
        cout << "Select a program to run:\n";
        cout << "1. Basic Application Form\n";
        cout << "2. Function Overloading\n";
        cout << "3. Friend Function\n";
        cout << "4. Parameterized Constructor\n";
        cout << "5. Static Members\n";
        cout << "6. Function Overloading and Data Input\n";
        cout << "7. Operator Overloading\n";
        cout << "8. Operator Overloading for Class Objects\n";
        cout << "9. Multi-level Inheritance\n";
        cout << "10. Multiple Inheritance\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                runProgram1();
                break;
            case 2:
                runProgram2();
                break;
            case 3:
                runProgram3();
                break;
            case 4:
                runProgram4();
                break;
            case 5:
                runProgram5();
                break;
            case 6:
                runProgram6();
                break;
            case 7:
                runProgram7();
                break;
            case 8:
                runProgram8();
                break;
            case 9:
                runProgram9();
                break;
            case 10:
                runProgram10();
                break;
            case 0:
                cout << "Exiting. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}

