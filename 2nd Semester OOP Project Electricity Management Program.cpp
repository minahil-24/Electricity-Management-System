#include <iostream>
#include <string>
#include <conio.h>
#include<iomanip>
#include<fstream>
#include<stdio.h>
#include<ctime>
using namespace std;
class Customer {
private :
	
		string house;
		string street;
		string town;
		string city;
		protected :
		long long phone;
public:
       fstream	file ;
	   string c_name;
       static int id;
       static int count;
       Customer ()
       {
     	}
   Customer(string name )
	   { this->c_name=name;
	   id = ++count;
       }
     string Name()
	 {
     	system("cls");
        	cout << "\n***************************\n";
        cout << "\n````Electricity Bill Customer Details```";
        cout << "\n**************************\n";
        cout << "Enter customer details:\nName: ";
        cin.ignore();
        cin>>c_name;
        
      
        fstream file;
        if(!file)
        { cout<<"file opening Error";
		}
		else 
		{
		file.open("Project.txt",ios::out|ios::app);
        file.close();
    }
         return c_name; 
       }
    
	void Phone()
    {  ppp :
	cout<<"Enter your Number : "<<endl;
    cin>>phone;
     if(phone >= 1000000000 && phone <= 9999999999){
	 }
	 else 
	 { cout<<"Something went wrong!!!"<<endl;
	 cout << "\nPress any key to continue...\n";
                      
                         cin.ignore();
                        cin.get();
                        goto ppp;
                         

	}
}

    void address ()
    { cout<<"Enter your House No : "<<endl;
    cin>>house;
    cout<<"Enter your street No : "<<endl;
    cin>>street;
    cout<<"Enter your town Name : "<<endl;
      getline(cin,town);  
	cin>>town;

    cout<<"Enter your City : "<<endl;
         getline(cin,city);
    cin>>city;

     file.open("Project.txt",ios::out|ios::app);
     file<<"  "<<id<<"  "<<c_name<<"  "<<house<<" "<<street<<" "<<town<<" "<<city<<endl;
        file.close();
    
	}
	void showdetails()
	{  system("cls");
	cout << "\n***************************\n";
        cout << "\n````Electricity Bill Customer Details```";
        cout << "\n**************************\n";
	cout<<"";
	cout<<"Name : "<<setw(5)<<c_name<<endl;
	   cout<<"Phone No : "<<setw(5)<<phone<<endl;
	   cout<<"Address : " <<"House "<<"# "<<house<<" , "<<" Street "<<" # "<<street<<" , "<<town<<" , "<<city <<" , "<<"Pakistan"<<endl;
	}
	void c_detail()
	
	{ 
	cout<<"House "<<"# "<<house<<" , "<<" Street "<<" # "<<street<<" , "<<town<<" , "<<city <<" , "<<"Pakistan"<<endl;
	}
	
};

int Customer::count = 0;
int Customer::id =0 ;

class Bill {
public:
 fstream file;
    int b_id;
    int customerId;
    float price;
    int units;
    static int count;
Bill ()
{ 
}
    Bill(int customerId,int price, int units) 
         { 
        b_id = ++count;
		}
};

int Bill::count = 300;

class BillGenerator : public Customer, public Bill {
	protected :
		 float price;
		 float units;
public:
	
        int k_bill;
	   int c_id;
    string s_name;
    string c_house;
    string c_street;
    string c_town;
    string c_city;
	Customer customer1;
	Bill bill;
	void add_customer()
	{   
		Customer customer1(c_name);
        customer1.Name(); 
        customer1.Phone();
        customer1.address();
        customer1.showdetails();
        cout << " Your customer id is " <<setw(5)<< customer1.id << endl<<endl;
        cout<<endl<<"Record Successfully Added"<<endl<<endl;
        
    }
        void generate_bill() {
    int find;
   fstream file;
   int count=0;
   int found=0;
    string n_name;

    system("cls");
    lp :
        cout << "Enter your customer id: ";
        cin >> find;
        file.open("Project.txt",ios::in);
		while(!file.eof())
         {  
		  if (c_id==find)
        { found++;
		loooop :
         cout<<"Enter your Name for Confirmation"<<endl;
           cin>>n_name;
           
           while(!file.eof())
            {        
			         if(s_name==n_name)
			         { count++;
			           p();
                        u();
 
                           Bill bill  ( customerId, price, units);
                            cout << "Bill has been generated successfully. Your bill id is " << bill.b_id << endl;
                            fstream file;
                            file.open("Project.txt",ios::out|ios::app);
                            if(!file)
                            { cout<<"File1 opening errors!!!"<<endl;
							}
							
							else 
							{  file<<"  "<<c_id<<"  "<<s_name<<"  "<<c_house<<" "<<c_street<<" "<<c_town<<" "<<c_city<<" "<<bill.b_id<<endl;
							file.close();
							}
                            return;
                            
}  
 file>>c_id>>s_name>>c_house>>c_street>>c_town>> c_city;
} 
	file.close();
     if(count==0)
     { cout<<"Wrong customer Name"<<endl;
         cout<<"Please Try again"<<endl;
         goto lp;
         break;
      }
  

	}
 file>>c_id>>s_name>>c_house>>c_street>>c_town>> c_city;
				 
}
      file.close(); 
      if(found==0) 
		{ 
		  cout<<"Wrong Customer id "<<endl;
		  cout<<"Please Try again"<<endl;
		    goto lp;
			
		} 
  }
  
int p()
{
						  
                            cout << "Price per unit: ";
                            cin >> price;
                            return price;		               
                           
}   
     
int u()
                        {
						

                            cout << "Enter the number of units consumed in this month: ";
                            cin >> units;
                            return units;
}    
 int pricereturn()  
 { return price;
   }  
    int unitsreturn()
	{ return units;
	 } 
     
     addressfile()
     {  fstream file;
	 file.open("Project.txt",ios::in);
      file>>c_id>>s_name>>c_house>>c_street>>c_town>> c_city;
		while(!file.eof())
		{  if(customer1.id==c_id)
		{
		cout<<"House "<<"# "<<c_house<<" , "<<" Street "<<" # "<<c_street<<" , "<<c_town<<" , "<<c_city <<" , "<<"Pakistan"<<endl;
	}
		file>>c_id>>s_name>>c_house>>c_street>>c_town>> c_city;
		}
		file.close();
	 }
     
     void display_bill() {
        int custId, billId;
        int f=0;
        int d=0;
     	system("cls");
     	pp :
     	cout << "\n***********************************************************************\n";
        cout << "\n```````````````````Electricity Bill Customer Details```````````````````";
        cout << "\n***********************************************************************\n";
     	cout << "Enter your customer id: ";
        cin >> custId;
         
        fstream file;
        
	file.open("Project.txt",ios::in);
		file>>c_id>>s_name>>c_house>>c_street>>c_town>> c_city>>k_bill;
        while(!file.eof())
        { if (c_id==custId )
        { 
		f++;
		cout << "Enter bill id whose bill you want to display: ";
        cin >> billId;
        if(k_bill==billId)
        { d++;
		
		int t_after=(price * units); 
	system("cls");
	    cout<<"****************************"<<endl;
		cout <<"\nELECTRICITY BILL"<<endl<<endl;
        cout<<"****************************"<<endl;
            cout<<"\nBill ID            : " << billId<<endl;
            cout<<"\nName               : " << s_name<<endl;
            cout<<"\nCustomer ID        : " << customer1.id<<endl;
            cout<<"\nPrice Per Unit     : " << pricereturn()<<endl;
            cout<<"\nUnits Consumed     : " <<  unitsreturn()<<endl;
            cout<<"\nTotal Amount       : " << (pricereturn() * unitsreturn()) <<endl;
                     time_t currentTime;
            time(&currentTime);
            cout<<" Issue date and time: "<<ctime(&currentTime); 
            cout<<"Last Date:          :  "<< " 24/06/2023"<<endl;
            cout<<"BILL after Due Date :  "<<t_after+700 <<endl;
            cout<<"Home Address   :  "<<phone<<endl;
            cout<<"Customer Phone.no#         :  "<<addressfile()<<endl;
        
              return;
          }	file>>c_id>>s_name>>c_house>>c_street>>c_town>> c_city>>k_bill;
          if(d==0) 
          {   cout<<"Errors ! something is with customer id or bill id"; 
goto pp;
		  }
} 
	file>>c_id>>s_name>>c_house>>c_street>>c_town>> c_city>>k_bill;
} 
 file.close();

if(f==0)
{ cout<<"Errors ! something is with customer id or bill id"; 
goto pp;
}
}
     
};

 int main()
 {
        string name="admin";
    string password="admin";
    string n;
    string p;
    int i=0;
    int j=5;
lop :
    while (i<5)
    {
cout<<"****************************"<<endl;
		cout <<"\n`````ELECTRICITY BILL LOGIN`````"<<endl<<endl;
        cout<<"************************************************************************************"<<endl;
        cout<<endl<<"\nEnter your Login Name ";
        cin>>n;
        cout<<"\nEnter your Password ";
        cin>>p;
        if(name==n && password==p)
        {

            cout<<"You are sucessfully login"<<endl;
            
    

    BillGenerator billGenerator;

    int choice=1 ;
        	system("cls");

looooop :
	while(choice != 5) {
	
        cout << "\n***************************************************************************\n";
        cout << "\n````Electricity Bill Generator MENU``````";
        cout << "\n**************************\n";
        cout << "\nMAIN MENU";
        cout << "\n1. Add new customer";
        cout << "\n2. Generate Bill";
        cout << "\n3. Display bill";
        cout << "\n4. EXIT";
        cout << "\nEnter your choice: ";
        cin >> choice;
    
		
          switch (choice) {
            case 1:
                billGenerator.add_customer();
                break;
            case 2:
                billGenerator.generate_bill();
                break;
            case 3:
                billGenerator.display_bill();
                break;
            case 4:
            	exit(0);
                break;
            default:
                cout << "\nInvalid Choice...!" << endl;
               cout << "Press any key to continue...";
                        cin.ignore();
                        cin.get();
                goto looooop;
                break;
        }
}
}
else
          
		try
            {
                i++;
                cout<<"Now You Can Try again only  "<<" "<<--j<<"  "<<"Times!!!!!!!!!!!!!!!!!!!!!!"<<endl;

                if(j<=0)
                {
                    throw (j);
                }
goto lop;
			}
        
        catch (int j)
        {
            cout<<endl<<"Sorry Program terminate due to invalid information"<<endl;
        }

    }
return 0;
}

