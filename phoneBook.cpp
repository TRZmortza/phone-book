#include <iostream>
#include <iomanip>
#include <conio.h>
#define size 10
using namespace std;
struct contacts
{
    string f_name;
    string l_name;
    int phone=0;
}Contacts[size];
int find()
{
    for (int i = 0; i < size; i++)
    {
        if(Contacts[i].phone==0)
            return i;
    }
    return -1;
}
int find(int a)
{
    if(Contacts[a].phone!=0)
            return a;   
    return -1;
}
void liner(){
cout<<"name"<<setw(20)<<"last name"<<setw(20)<<"phone number"<<setw(20)<<"\n===================================================================\n";
}
void display(int num){
cout<<Contacts[num].f_name<<setw(10)<<Contacts[num].l_name<<setw(10)<<Contacts[num].phone<<endl;
}
void insert(int n)
{
    system("cls");
    cin.get();
    cout<<"please enter first name:";
    getline(cin,Contacts[n].f_name);
    
    cout<<"please enter last name:";
    getline(cin,Contacts[n].l_name);

    cout<<"please enter phone:";
    cin>>Contacts[n].phone;
    
    system("pause");
}
int menu()
{
    string z;
    system("cls");
    cout << "1)Insert...." << endl;
    cout << "2)Search...." << endl;
    cout << "3)Delete...." << endl;
    cout << "4)Display...." << endl;
    cout << "5)exit...." << endl;
    cout << "--------------------------------" << endl;
    cout << "Please Select:";
    cin >> z;
   try
   {
    int a=stoi(z);
    return a;
   }
   catch(...)
   {
    cout<<"Allowed input is only numbers!!";
    system("pause");
   }
   return 0;

}

void DisplayAll(){
string SearchName,SearchLastName;
string PhoneNumber;
liner();
for (int i = 0; i < size; i++)
{
    if (find(i)!=-1)
    {
     display(i);  
    }
}
}
int main()
{
    int z,e;
    while (true)
    {   
     
    
        
        z = menu();//The wrong string input loop was fixed :-)
        switch (z)
        {
        case 1:
            e=find();
            if(e==-1)
                cout<<"memory is Full.......";
               else 
                insert(e);
            break;
        case 2://src
            
            break;
        case 3:
            /* code */
            break;
        case 4:
            DisplayAll();
            system("pause");
            break;
        case 5:
            exit(0);
            break;
        }
        z=0;
    }

    system("pause");
    return 0;
}