#include<iostream>
#include<cstring>

using namespace std;

class Students {
private:
    char name[50], grade;
    int marks[5];
    

public:

    void getData(const char* n, int m[]) {
        strncpy(name, n, 49); 
        name[49] = '\0'; 
        for(int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
        calculateGrade(); 
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for(int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nGrade: " << grade << endl;
    }

private:
    void calculateGrade() {
        int sum = 0;
        for(int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        float average = sum / 5.0;
        
        if(average > 80) grade = 'E';
        else if(average > 70) grade = 'A';
        else if(average > 60) grade = 'B';
        else if(average > 50) grade = 'C';
        else grade = 'F';
    }
};

int main() {
    Students student1;
    char studentName[] = "SACHIN";
    int studentMarks[] = {85, 70, 82, 80, 65};

    student1.getData(studentName, studentMarks);
    student1.displayData();

    return 0;
}
