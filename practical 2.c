#include<iostream>
using namespace std;
#include<iomanip>
#include<string>
#include<cstdio>

struct emp
{
    int empid;
    string empname,empqualification;
    float empexp;
    long int empcontactno;

    void addempdetail()
    {
        cout<<"enter empid:";
        cin>>empid;
        cout<<"enter empname:";
        cin>>empname;
        cin.ignore();
        cout<<"enter empqualification:";
        cin>>empqualification;
        cin.ignore();
        cout<<"enter empexp:";
        cin>>empexp;
        cout<<"enter empcontact no:";
        cin>>empcontactno;

    }

    int showempdetail(int id)
    {
        cout<<"-------------------------------------"<<endl;

        cout<<"Employee Name     :"<<empname<<endl;

        cout<<"Qualification     :"<<empqualification<<endl;

        cout<<"Experience        :"<<empexp<<endl;

        cout<<"Contact Number    :"<<empcontactno<<endl;

        cout<<"-------------------------------------"<<endl;

    }

};

int main()
{
    struct emp e[1000];
    int n,i,id;
    cout<<"enter the no of emp"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        e[i].addempdetail();
    }
    system("cls");
    next:cout<<"Enter an employee id:";
    cin>>id;

    for(i=0;i<n;i++)
    {
        if(e[i].empid==id)
        {
            e[i].showempdetail(id);
            break;
        }
    }
    if(i==n)
    {
        cout<<"*************"<<endl;
        cout<<"ERROR : ENTERED EMPLOYEE ID DOES NOT EXIST"<<endl;
        cout<<"*************"<<endl;

    }

    char c;
    cout<<"Please Y to get another employee detail,Press N to exit :";
    cin>>c;

    if(c=='y'||c=='Y')
    {
        goto next;
    }

}
