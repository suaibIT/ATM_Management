#include <iostream>
using namespace std;
int widraw;
int Balance;
int deposit_amount;
int deposit()
{
    system("cls");

    cout << "Enter amount which you want to deposit : ";
    cin >> deposit_amount ;
  cout<<"******* --Deposit sucsesfully-- *******"<<endl;
    Balance = Balance + deposit_amount ;
}

int widrawl()
{
    system("cls");
    if (Balance == 0)
    {
        cout << "your Balance is 0 " << endl;
system("cls");
    }
    if (Balance<widraw)
    {
        cout << "your widraw amount is less then balance   ";
    }

    else
    {

        cout << "Enter amount which you want to widraw : ";
        cin >> widraw;
        cout<<"******* --widraw sucsesfully-- *******"<<endl;
        
Balance = Balance-widraw;
    }
}

int check_balance()
{
    system("cls");
 
    cout << "Your current balance is : " << Balance << endl;
}

int main()
{
    cout << "**************** Welcome *******************" << endl;
    cout << endl;
   
       int choice;
    
do
{
    
        cout << "Deposit Amount => 1 ", cout << endl;
        cout << "Widrawl Amount => 2 ", cout << endl;
        cout << "Check Amount   => 3 ", cout << endl;
        cout << "Exit           => 4 ", cout << endl;

        cout << endl;

        
        cout << "Enter your choice : ";
        cin >> choice;

        system("cls");
        switch (choice)
        {
        case 1:
            deposit();
            break;
        case 2:
            widrawl();
            break;
        case 3:
            check_balance();
            break;
        case 4:
            return 0;

        default:
            cout << "Invalid choice !! try aging";
            break;
        }
    
} while (choice<=3);


    return 0;
}