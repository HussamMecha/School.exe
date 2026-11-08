#include <iostream>
#include <string>
#include<vector>
#include<array>
#include"School.h"
#include<limits>
#include<cctype>
#include<conio.h>
 
using namespace std;

/// Executes the school-management operation selected from the menu.
void Switch(int choice, School& school) {
    switch (choice) {
    case 1: {
        school.addstudent();
        break;
    }
    
    case 2: {
        school.addteacher();
        break;
    }
        case 3: {
            school.showAllstu();
            break;
        }
        case 4: {
            school.showAllteach();
            break;
        }
        case 5: {
			school.showAll();
            break;
        }
        case 6: {
           
            school.findstu();
            break;
        }
        case 7: {
			school.findteach();
            break;
        }
        case 8: {
            school.removestu();
                break;
        }
        case 9: {
            school.removeteach();
        
            break;
        }
        case 10: {
            school.FixinfoFst();
            break;
        }
        case 11: {
            school.FixinfoFteh();
            break;
        }
		case 12: {
			exit(0);
		}
        default:
            cout << "Invalid Choice" << endl;
            break;
    }
}

    /// Runs the interactive school-management menu.
    int main()
    {
        School school;
        while (true)
        {
            int choice;
			cout << "\n ====== School Management System ====== \n";

			cout << "1. Add Student\n";
			cout << "2. Add Teacher\n";
			cout << "3. Show All Students\n";
			cout << "4. Show All Teachers\n";
            cout << "5. Show All...\n";
			cout << "6. Find Student\n";
			cout << "7. Find Teacher\n";
			cout << "8. Remove Student\n";
			cout << "9. Remove Teacher\n";
			cout << "10. Fix Student Information\n";
			cout << "11. Fix Teacher Information\n";
			cout << "12. Exit\n";
            cout << endl;
			cout << "Enter your choice: ";
            cout << endl;

            if (!(cin >> choice))
            {
                cout << "Invalid choice. Please enter a number from 1 to 12.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            Switch(choice, school);
    }
    
    return 0;
}

