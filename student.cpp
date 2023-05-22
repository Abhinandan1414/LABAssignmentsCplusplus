#include <iostream>
#include <cstdlib>

using namespace std;

class StudentRecord {
    int rollNumber;
    char name[20];
    char section[20];
    char department[20];

public:
    int Insert(StudentRecord *p, int n) {
        cout << "Enter Roll Number: ";
        cin >> p[n].rollNumber;
        cout << "Enter Name: ";
        cin >> p[n].name;
        cout << "Enter Section: ";
        cin >> p[n].section;
        cout << "Enter Department: ";
        cin >> p[n].department;
        cout << "\nRECORD INSERTED...\n";
        n++;
        return n;
    }

    void Display() {
        cout << rollNumber << "\t" << name << "\t" << section << "\t" << department << "\n";
    }

    int Delete(StudentRecord *p, int n, int roll) {
        int j = 0, k, flag = 0;
        for (j = 0; j < n; j++) {
            if (p[j].rollNumber == roll) {
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            for (k = j; k < n; k++) {
                p[k] = p[k + 1];
            }
            cout << "\nRECORD DELETED.\n";
            return n - 1;
        } else {
            cout << "\nRecord Not Found\n";
            return n;
        }
    }

    int Update(StudentRecord *p, int roll, int n) {
        int i, choice;
        for (i = 0; i < n; i++) {
            if (p[i].rollNumber == roll) {
                while (true) {
                    cout << "\n!!===OPTIONS IN UPDATE===!!\n";
                    cout << "1. Update Section\n";
                    cout << "2. Update Department\n";
                    cout << "3. Update Both\n";
                    cout << "4. Return to Main Menu\n";
                    cout << "\nEnter Your Choice: ";
                    cin >> choice;

                    switch (choice) {
                        case 1:
                            cout << "Enter New Section: ";
                            cin >> p[i].section;
                            cout << "Record Updated...\n";
                            break;
                        case 2:
                            cout << "Enter New Department: ";
                            cin >> p[i].department;
                            cout << "Record Updated...\n";
                            break;
                        case 3:
                            cout << "Enter New Section: ";
                            cin >> p[i].section;
                            cout << "Enter New Department: ";
                            cin >> p[i].department;
                            cout << "Record Updated...\n";
                            break;
                        case 4:
                            return n;
                        default:
                            cout << "Invalid Choice. Try Again.\n";
                            break;
                    }
                }
                break;
            }
        }

        if (p[i].rollNumber != roll) {
            cout << "\nRecord Not Found\n\n";
        }
    }
};

int main() {
    StudentRecord records[10];
    int count = 0, choice, j, roll;

    while (true) {
        cout << "\n!!===STUDENT MANAGEMENT SYSTEM===!!\n";
        cout << "\n";
        cout << "1. INSERT\n";
        cout << "2. DISPLAY\n";
        cout << "3. DELETE\n";
        cout << "4. UPDATE\n";
        cout << "5. EXIT\n";
        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                count = records[0].Insert(records, count);
                break;
            case 2:
                cout << "ROLL\tNAME\tSECTION\tDEPARTMENT\n==============================================\n";
                for (j = 0; j < count; j++) {
                    records[j].Display();
                }
                break;
            case 3:
                cout << "Enter the Roll Number to Delete: ";
                cin >> roll;
                count = records[0].Delete(records, count, roll);
                break;
            case 4:
                cout << "Enter the Roll Number for Data Update: ";
                cin >> roll;
                count = records[0].Update(records, roll, count);
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid Choice. Try Again.\n";
                break;
        }
    }
}