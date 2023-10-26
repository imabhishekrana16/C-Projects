//Heart Disease Prediction
#include<iostream>
#include<string.h>
using namespace std;
class patient //class declaration
   {
    public:
    int id,count=0;
    string name;
    char smoke;
    int n=5;
    float percentage=0;
    int reports[100];
    void getdetails() //function getdetails()
    {
        cout<<"\tEnter the ID"<<endl<<"\t";
        cin>>id;
        cout<<"\tEnter the Name\n"<<endl<<"\t";
        cin>>name;
    }
    void displaydetails() //function displaydetails()
    {
        cout<<"\tThe ID of Patient is "<<id<<" and Name is "<<name<<endl<<"\t";
    }
    void getreports() //function getreports()
    {
        n=4;
        cout<<"Enter the Reports of Blood Pressure (min 100)\tSugar Level(min 70)\tChlosterol (min 100)\tAge (min 20)\t" << endl<<"\t";
        for(int i=0;i<n;i++)
        {
            cin>>reports[i];
        }
    }
    void displayreports() //function displayreports()
    {
        for(int i=0;i<n;i++)
        {
            int a=i;
           switch (a) //switch case statement 
           {
            case 0:
                cout<<"\tBlood Pressure: ";
                break;
            case 1:
                cout<<"\tSugar Level: ";
                break;
            case 2:
                cout<<"\tCholesterol: ";
                break;
            case 3:
                cout<<"\tAge: ";
                break;

           }
           int number = reports[i];
           cout <<"\t" << number << endl<<"\t";

        }
        cout<<"\tDo you Smoke Enter Y and N ?\t"<<endl;
        cin>>smoke;
        }
    void analysis() //function analysis()
    {
        percentage=0;
        for(int i=0;i<n;i++)
        {
            int num=reports[i];
            if(i==1)
            {
                if(num>=100 && num<=129)
                {
                    percentage=percentage+5;
                }
                else if(num>=130 && num<=159)
                {
                    percentage=percentage+10;
                }
                else if(num>=160 && num<=189)
                {
                    percentage=percentage+15;
                }
                else
                {
                    percentage=percentage+20;
                }
            }
            else if(i==2)
            {
                if(num>=70 && num<=100)
                {
                    percentage=percentage+7;
                }
                else if(num>=101 && num<=126)
                {
                    percentage=percentage+14;
                }
                else
                {
                    percentage=percentage+20;
                }
            }
            else if(i==3)
            {
                if(num>=100 && num<=129)
                {
                    percentage=percentage+5;
                }
                else if(num>=130 && num<=159)
                {
                    percentage=percentage+10;
                }
                else if(num>=160 && num<=189)
                {
                    percentage=percentage+15;
                }
                else{
                    percentage=percentage+20;
                }
            }
            else
            {
                if(num>=18 && num<=40)
                {
                    percentage=percentage+5;
                }
                else if(num>40 && num<=60)
                {
                    percentage=percentage+10;
                }
                else if(num>60 && num<=80)
                {
                    percentage=percentage+15;
                }
                else
                {
                    percentage=percentage+20;
                }
            }
        }
        if(smoke=='y')
        {
            percentage=percentage+20;
        }
        else if(smoke=='n')
        {
            percentage=percentage+0;
        }
    }
    void results()
    {
        cout<<"Percentage of the Heart Disease is "<<percentage;
    }
   };

    int main()
    {
patient p; //class object p
p.getdetails();//call function getdetails()
p.displaydetails();//call function displaydetails()
p.getreports();//call function getreports()
p.displayreports();//call function displayreports()
p.analysis();//call function analysis()
p.results();//call function results()
    }
