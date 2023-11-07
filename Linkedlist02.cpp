#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Struct members are aligned to the maximum alignment of any member.
struct marks {
    alignas(4) int Cpp;
    alignas(4) int DSA;
    alignas(4) int Networking;
};

// Struct members are aligned to the maximum alignment of any member.
struct student {
    alignas(4) int ID;
    alignas(4) string name;
    alignas(16) marks Marks;
    alignas(4) float total;
    student*next = NULL;
};

student *StudentList(int NOS) {
    student*First = NULL;
    student*Last = NULL;
    for (int i = 1; i <= NOS; i++) {
        student*newStudent = new student();
        system("cls");
        cout << "\n----------------ENTER STUDENT DETAILS " << i << "------------------\n";
        cout << "ID: ";
        cin >> newStudent->ID;
        cout << "Name: ";
        cin >> newStudent->name;
        cout << "----------------------ENTER MARKS-------------------------\n";
        cout << "C++: ";
        cin >> newStudent->Marks.Cpp;
        cout << "DSA: ";
        cin >> newStudent->Marks.DSA;
        cout << "Networking: ";
        cin >> newStudent->Marks.Networking;
        newStudent->total = newStudent->Marks.Cpp + newStudent->Marks.DSA + newStudent->Marks.Networking;
        newStudent->next = NULL;
        cout << "\n---------------------------------------------------------\n";

        if (First == NULL) {
            First = newStudent;
            Last = newStudent;
        } else {
            Last->next = newStudent;
            Last = newStudent;
        }
    }
    return First;
}

void StudentDatabase(student*first, ofstream& outputFile) {
    cout << "-------------------------STUDENT DATABASE---------------------------";
    outputFile << "ID\tName\tC++\tDSA\tNetworking\tTotal\tPersentage\n";
    while (first != NULL) {
        outputFile << "\n" << first->ID << "\t" << first->name << "\t" << first->Marks.Cpp << "\t" << first->Marks.DSA << "\t" << first->Marks.Networking << "\t\t" << first->total << "\t" << ((first->total / 300) * 100) << "%";
        first = first->next;
    }
    cout << "\n---------------------------------------------------------------------";
}

int main() {
    system("cls");
    int noOfStudents;
    cout << "Enter the no of Student: ";
    cin >> noOfStudents;
    student *First = StudentList(noOfStudents);
    system("cls");

    // Create a new Excel file and open it.
    ofstream outputFile("StudentData.csv");

    // Write the student data to the Excel file.
    StudentDatabase(First, outputFile);

    // Close the Excel file.
    outputFile.close();

    return 0;
}
