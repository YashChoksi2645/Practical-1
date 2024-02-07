#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
    char id[7];
    string stname,subname[3],tgrade[3],pgrade[3];
    int sem,i,thmarks[3],pmarks[3];
    int tgradept[3],pgradept[3];
    cout << "Enter Student ID : " ;
    cin>>id;
    fflush(stdin);
    cout << "Enter Student Name : ";
    cin>>stname;
    fflush(stdin);
    cout << "Enter the Semester : ";
    cin>>sem;
    fflush(stdin);

    for(i=0;i<3;i++)
    {
        cout<<"enter subject name :";
        getline(cin,subname[i]);
        fflush(stdin);
        cout<<"enter theory marks of "<<subname[i]<<" :";
        cin>>thmarks[i];
        fflush(stdin);
        cout<<"enter practical marks of "<<subname[i]<<" :";
        cin>>pmarks[i];
        fflush(stdin);
    }

    for(i=0;i<3;i++)
    {
        if(thmarks[i]>=80)
       {
            tgrade[i]="AA";
            tgradept[i]=10;
       }
        else if(thmarks[i]<80 && thmarks[i]>=73)
        {
            tgrade[i]="AB";
            tgradept[i]=9;
        }
        else if(thmarks[i]<73 && thmarks[i]>=66)
        {
            tgrade[i]="BB";
            tgradept[i]=8;
        }
        else if(thmarks[i]<66 && thmarks[i]>=60)
        {
            tgrade[i]="BC";
            tgradept[i]=7;
        }
        else if(thmarks[i]<60 && thmarks[i]>=55)
        {
            tgrade[i]="CC";
            tgradept[i]=6;
        }
        else if(thmarks[i]<55  && thmarks[i]>=50)
        {
            tgrade[i]="CD";
            tgradept[i]=5;
        }
        else if(thmarks[i]<50  && thmarks[i]>=45)
        {
            tgrade[i]="DD";
            tgradept[i]=4;
        }
        else if(thmarks[i]<45)
        {
            tgrade[i]="FF";
            tgradept[i]=0;
        }

        if(pmarks[i]>=80)
        {
            pgrade[i]="AA";
            pgradept[i]=10;
        }
        else if(pmarks[i]<80 && pmarks[i]>=73)
        {
            pgrade[i]="AB";
            pgradept[i]=9;
        }
        else if(pmarks[i]<73 && pmarks[i]>=66)
        {
            pgrade[i]="BB";
            pgradept[i]=8;
        }
        else if(pmarks[i]<66 && pmarks[i]>=60)
        {
            pgrade[i]="BC";
            pgradept[i]=7;
        }
        else if(pmarks[i]<60 && pmarks[i]>=55)
        {
            pgrade[i]="CC";
            pgradept[i]=6;
        }
        else if(pmarks[i]<55 && pmarks[i]>=50)
        {
            pgrade[i]="CD";
            pgradept[i]=5;
        }
        else if(pmarks[i]<50 && pmarks[i]>=45)
        {
            pgrade[i]="DD";
            pgradept[i]=4;
        }
        else if(pmarks[i]<45)
        {
            pgrade[i]="FF";
            pgradept[i]=0;
        }
    }

    int cigi=0,ci=18;
    float sgpa;
    for(i=0;i<3;i++)
    {
        cigi=cigi+(pgradept[i]*3)+(tgradept[i]*3);
    }

    sgpa=(float)cigi/ci;

    system("cls");
    cout<<endl<<"Student ID    :"<<id<<endl;
    cout<<"Student name  :"<<stname<<endl;
    cout<<"Semester      :"<<sem<<endl;


    cout<<"\t\t\t\tTheory\tPractical"<<endl;
    for(i=0;i<3;i++)
    {
        cout<<left<<setw(30)<<subname[i]<<"\t"<<tgrade[i]<<"\t"<<pgrade[i]<<endl;
    }


    cout<<endl<<"SGPA          :"<<setprecision(2)<<sgpa;


}


   
   

    
   
    
   
