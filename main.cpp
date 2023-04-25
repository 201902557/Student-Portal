#include <iostream>
#include <windows.h>
using namespace std;
int i = 0, counter_p = 0, counter_f = 0;
struct student
{
    char student_name[50], student_address[50],student_nextOfKin[50], student_sponsor[50];
    string student_id;
}; student s[60];
struct module
{
    string student_moduleName, student_moduleName1, student_moduleName2, student_moduleName3, student_moduleName4, student_moduleName5, student_moduleName6, student_moduleName7, student_moduleName8, student_moduleName9, student_moduleName10;
    double student_result, student_moduleMark1, student_moduleMark2, student_moduleMark3, student_moduleMark4, student_moduleMark5, student_moduleMark6, student_moduleMark7, student_moduleMark8, student_moduleMark9, student_moduleMark10, student_passed, student_failed;
}; module k[60];
void input()
{
    // storing information
    cout<<"\n\n\t\t\t\t\t Student Portal\n\n\n"<<endl;
    cout<<"\t\t\t\t\t Enter Information Of Students::\n\n"<< endl;
    cout<<"\t\t\t\t\t Enter Student ID no.: ";
    cin>>s[i].student_id;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Name: ";
    cin>>s[i].student_name;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student address(use _ instead of spacebar): ";
    cin>>s[i].student_address;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Next Of Kin Name: ";
    cin>>s[i].student_nextOfKin;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Sponsor: ";
    cin>>s[i].student_sponsor;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student First Module Name: ";
    cin>>k[i].student_moduleName1;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student First Mark: ";
    cin>>k[i].student_moduleMark1;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Second Module Name: ";
    cin>>k[i].student_moduleName2;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Second Mark: ";
    cin>>k[i].student_moduleMark2;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Third Module Name: ";
    cin>>k[i].student_moduleName3;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Third Mark: ";
    cin>>k[i].student_moduleMark3;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Fourth Module Name: ";
    cin>>k[i].student_moduleName4;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Fourth Mark: ";
    cin>>k[i].student_moduleMark4;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Fifth Module Name: ";
    cin>>k[i].student_moduleName5;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Fifth Mark: ";
    cin>>k[i].student_moduleMark5;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Sixth Module Name: ";
    cin>>k[i].student_moduleName6;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Sixth Mark: ";
    cin>>k[i].student_moduleMark6;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Seven Module Name: ";
    cin>>k[i].student_moduleName7;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Seven Mark: ";
    cin>>k[i].student_moduleMark7;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Eighth Module Name: ";
    cin>>k[i].student_moduleName8;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Eighth Mark: ";
    cin>>k[i].student_moduleMark8;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Nineth Module Name: ";
    cin>>k[i].student_moduleName9;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Nineth Mark: ";
    cin>>k[i].student_moduleMark9;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Tenth Module Name: ";
    cin>>k[i].student_moduleName10;
    cout<<"\n\n\n\t\t\t\t\t\t Enter Student Tenth Mark: ";
    cin>>k[i].student_moduleMark10;
    k[i].student_result = (k[i].student_moduleMark1 + k[i].student_moduleMark2 + k[i].student_moduleMark3 + k[i].student_moduleMark4 + k[i].student_moduleMark5 + k[i].student_moduleMark6 + k[i].student_moduleMark7 + k[i].student_moduleMark8 + k[i].student_moduleMark9 + k[i].student_moduleMark10)/10;
    i++;
}
void print_passed()
{
    for(int j=0; j<i; j++)
    {
        if(k[j].student_result >= 50)
        {
            cout<<"\n\n\t\t\t\t Name: "<<s[j].student_name<<endl;
            cout<<"t\t\t\t Student ID: "<<s[j].student_name<<endl;
            cout<<"t\t\t\t Module Name: "<<k[j].student_moduleName<<endl;
            cout<<"t\t\t\t 10 Module Average Mark: "<<k[j].student_result<<endl;
            counter_p++;
        }
        cout<<"\n\n\t\t\t\t Number Of Students Passed: "<<counter_p<<endl;
    }
}
void print_failed()
{
    for(int j=0; j<i; j++)
    {
        if(k[j].student_result < 50)
        {
            cout<<"\n\n\t\t\t\t Name: "<<s[j].student_name<<endl;
            cout<<"t\t\t\t Student ID: "<<s[j].student_name<<endl;
            cout<<"t\t\t\t Module Name: "<<k[j].student_moduleName<<endl;
            cout<<"t\t\t\t 10 Module Average Mark: "<<k[j].student_result<<endl;
            counter_f++;
        }
        cout<<"\n\n\t\t\t\t Number Of Students Failed: "<<counter_f<<endl;
    }
}
int main()
{
    int option;
    while(option!=99)
    {
        system("color b");
        cout<<"\n\n\t\t\t\t\t\t Student Portal\n\n\n"<<endl;
        cout<<"\t\t\t\t\t 1. Input Student Data\n\n"<<endl;
        cout<<"\t\t\t 2. Print Passed Students             3. Print Failed Students\n\n"<<endl;
        cout<<"Enter option                                                                                 press (99) to exit"<<endl;
        cin>>option;
        system("PAUSE");
        system("CLS");
        switch(option)
        {
        case 1:
            input();
            break;
        case 2:
            system("color a");
            print_passed();
            break;
        case 3:
            system("color e");
            print_failed();
            break;
        case 99:
            break;
        default:
            system("color c");
            cout<<"\n\n\t\t\t\tIncorrect option!!!!!!"<<endl;
            break;
        }
        system("PAUSE");
        system("CLS");
    }
    return 0;
}
