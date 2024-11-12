#include <iostream>
using namespace std;

int main() {
    
    int student_num;
    cout << "Enter the number of students for your grade calculation: ";
    cin >> student_num;
    if (cin.fail() || student_num<=0) {
        cout <<"Invalid input";
    }else {
        for (int j =1; j<=student_num; j++){
            int course_num;
            cout << "Enter number of the courses: ";
            cin >> course_num;
            if (course_num <= 0 || course_num > 10 || cin.fail()){
            cout << "Invalid input";
            cout << endl;
            } else {
                int total_credit_hrs;
                float total_points;
                
                for (int i =1; i <= course_num; i++){
                float student_mark;
                int credit_hrs;
                cout << "Enter student mark: ";
                cin >> student_mark;
                cout << "Enter the course credit hours: ";
                cin >> credit_hrs;
               
                if (student_mark > 100 || student_mark < 0 || cin.fail()){
                cout << "Invalid input";
                } else {
                    double final_pooint=0;
                       if (student_mark <= 90 && student_mark>=100){
                       final_pooint = credit_hrs * 4;
                       cout << "GOd job, Your got A your final course grade: " << final_pooint;
                       }
                       else if (student_mark >= 80) {
                       final_pooint = credit_hrs * 3.5;
                       cout << "You got B Your final course grade: " <<final_pooint;
                       }
                       else if (student_mark >= 65){
                        final_pooint = credit_hrs * 2.5;
                        cout << "You got C Your final course grade:  " <<final_pooint;
                       }
                       else if (student_mark >= 50){
                       final_pooint = credit_hrs * 1;
                       cout << "You got D YOur final course grade: " <<final_pooint;
                      } else {
                      final_pooint = credit_hrs * 0;
                      cout << "You got F your final course grade: " <<final_pooint;
                      }
                      total_credit_hrs += credit_hrs;
                      total_points += final_pooint;
                }
                cout << endl;
           }
           cout << "Your total credit hour: "<< total_credit_hrs<< "\n";
           cout << "YOur semester GPA is: "<< total_points/total_credit_hrs<< "\n";
          
       }
     }
    }
    cout << "Programm ended!";
    return 0;
}