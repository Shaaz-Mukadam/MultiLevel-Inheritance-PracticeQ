//Write a program to calculate the percent of student using multi level inheritance.
#include<iostream>
using namespace std;
class Add {
protected:
    int subject[3], i;
public:
    void accept_details() {
     cout<<"Enter the marks of three Subjects:\n";
     cout<<"---------------------------------\n";
     cout<<"English";
     cin>>subject[0];
     cout<<"Maths";
     cin>>subject[1];
     cout<<"History";
     cin>>subject[2];
    }
};
class Total : public Add{
protected:
    int total;
public:
    void total_all() {
     total = subject [0] + subject [1] + subject [2];
    }
};
class Percent : public Total{
 protected:
     int avg;
 public:
    void percentage() {
     avg = total / 3;
    }
    void show_result()
        {
                cout<<"\n ------------------------------- \n";
                cout<<"\n Percentage of a Student : "<<avg;
        }
};
int main() {
Percent p;
p.accept_details();
p.total_all();
p.percentage();
p.show_result();

return 0;
}

//********OUTPUT******
Enter the marks of three Subjects:
---------------------------------
English70
Maths80
History90

 -------------------------------

 Percentage of a Student : 80
