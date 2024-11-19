#include<bits/stdc++.h>
#include<unistd.h>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
  fflush(stdout);
}

class vehicle{
private:
    string make,model;
    int year,Cost;
public:
void inputdata()
    {
       cout<<"Enter Company name: ";
        cin>>make;
        cout<<"Enter model: ";
        cin>>model;
        cout<<"Enter year :";
        cin>>year;
        cout<<"Enter Serivicing Cost:";
        cin>>Cost;

    }
    void display()
    {
        cout<<"Company name :"<<make<<endl;
        cout<<"Model number: "<<model<<endl;
        cout<<"Year: "<<year<<endl;
        cout<<"Servicing Cost: "<<Cost<<endl;
    }


};
class car:virtual public vehicle{
private:
    int nmbdoors,headlights,glasses,tires;

public:
    void Numberofdoors()
    {
        cout<<"Enter Number of doors: ";
        cin>>nmbdoors;
        cout<<"Enter Headlights: ";
        cin>>headlights;
        cout<<"Enter_number_of_Glasses: ";
        cin>>glasses;
        cout<<"Enter_number_of_tires: ";
        cin>>tires;
    }
    void disp()
    {

        cout<<"Doors: "<<nmbdoors<<endl;
        cout<<"Headlights"<<headlights<<endl;
        cout<<"Glasses: "<<glasses<<endl;
        cout<<"Tires: "<<tires<<endl;

    }
};
class Toyotacar:virtual public vehicle
{
private:
string Trimlevel;
public:
  void ints()
    {
        cout<<"Enter Trim level:";
        cin>>Trimlevel;

    }
   void Disps()
    {
        cout<<"Trim_level: "<<Trimlevel<<endl;
    }
};
class lastclass:public car,public Toyotacar
{

};
int main()
{
    int time=1000000; //1sec
    lastclass mycar;
    usleep(time);                               //usleep
    //fflush //stdout/#include<windows.h>
    //#include<unistd.h>
    gotoxy(0,0);
    system("CLS"); //system clear.for c and for c++ we have to use System cls
    cout<<"------";fflush(stdout);
    usleep(time);
    system("CLS");
    gotoxy(2,0);
    printf("------");fflush(stdout);
    usleep(time);
    system("CLS");
    gotoxy(3,0);
    printf("------");fflush(stdout);
   //cout<<""<<endl;
   fflush(stdout);
    usleep(time);
    gotoxy(4,0);
    system("CLS");
   cout<<"------";fflush(stdout);
   usleep(time);
    gotoxy(5,0);
    system("CLS");
    cout<<"------Enter the car info:"<<endl;fflush(stdout);
    mycar.inputdata();
    mycar.Numberofdoors();
    mycar.ints();
     int T=1000000;
    usleep(T);
    gotoxy(6,0);
    system("CLS");
    cout<<"***";fflush(stdout);
    usleep(T);
    gotoxy(7,0);
    system("CLS");
    cout<<"***";fflush(stdout);
    usleep(T);
    gotoxy(8,0);
    system("CLS");
    cout<<"***";fflush(stdout);
    usleep(T);
    gotoxy(9,0);
    system("CLS");
    cout<<"***";fflush(stdout);
    cout<<"Output the car info "<<endl;
    mycar.display();
    mycar.disp();
    mycar.Disps();
}