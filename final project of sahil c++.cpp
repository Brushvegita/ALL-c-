//                                Final Project 

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class patient{
    protected:
    string name;
	int age;
	string gender;
	string blood_group;
	double phone_no;
    
    public:
    void inputdetails()
    {
        cout<<"Enter name of patient:"<<endl;
	    getline(cin,name);
	    cout<<"Enter age of patient:"<<endl;
	    cin>>age;
	    cin.ignore();
	    cout<<"Enter gender of the patient:"<<endl;
	    getline(cin,gender);
    
	    cout<<"Enter blood group of the patient:"<<endl;
	    getline(cin,blood_group );
	    cout<<"Enter phone number of patient: "<<endl;
	    cin>> phone_no ;
	    cin.ignore();
	    ofstream file("finalproject.txt", ios::app); 
        if (file.is_open()) {
            file << "Name: " << name << endl;
            file << "Age: " << age << endl;
            file << "Gender: " << gender << endl;
            file << "Blood group: " << blood_group << endl;
            file << "Phone number: " << phone_no << endl;
            file << "-------------------------------------" << endl;
            file.close(); 
        }
        else {
        	cout<< "Unable to open file!" <<endl;
			}          
    }
    
    void displayPatients()
    {
		cout<<"-------------------------------------"<<endl;
        cout<<"PATIENT PERSONAL DETAIL"<<endl;
		cout<<"-------------------------------------"<<endl;
        cout<<"Name of patirnt:"<<name<<endl;
	    cout<<"Age of patient: "<< age<<endl;
	    cout<<"Gender of patient:"<<gender<<endl;
	    cout<<"Blood group of the patient:"<<blood_group<<endl;
	    cout<<"Phone number of patient:"<<phone_no<<endl;
		cout<<"-------------------------------------"<<endl;
    }

};

class bill: public patient
{
    protected:
    int date;
    int total_bill;
    string name;
    int age;
    string gender;
    string blood_group;

    public:
    void biling_input(){
        int m,g,amnt,totalamnt,payment;
	    int yes=1;
	    int no=0;
		cout<<"-------------------------------------"<<endl;
	    cout<<"       Bill Calculation               \n";
		cout<<"-------------------------------------"<<endl;
    
	    cout<<"Medical charges:";
	    cin>>m;
	    cin.ignore();
	    cout<<"GST Tax: ";
	    cin>>g;
	    amnt=m*g/100;
	    cout<<"GST VALUE : "<<amnt<<endl;
	    cin.ignore();
	    totalamnt=m+amnt;
	    cout<<"total ammount : "<<totalamnt<<endl;
		cout<<"Please Press Enter :)"<<endl;
	    cin.ignore();
    }
    int checkbillstatus()
    { 
        int payment;
        cout<<"Press 1 if payment done"<<endl;
	    cout<<"Press 2 if payment is pending"<<endl;
	    cout<<"Payment status:";
	    cin>>payment;
		
	    if(payment==1){
	    	cout<<"Payment completed"<<endl;
	    }
	    else{
	    	cout<<"Payment pending"<<endl;
            
	    }
	 return payment;

    }

};

class situation : public bill{
    public:
    int situation_of_paient(){
    	int situation;
    	cout<<"Enter situation of the patient:\n (1) Emegency case=1\n (2) Normal case=2"<<endl;
    	cout<<"Enter situation of the patient: ";
    	cin>>situation;
        int ss=0;
    	if(situation==1){
                cout<<"Patient is referd to ICU:"<<endl;
                ss+=1;
            }
    	else{
                cout<<"Patient is refred to normal ward:"<<endl;
                ss+=2;
            }
    			
    	switch(situation){
    		case 1:
    			cout<<"Under the Supervision of Dr.Anish Sharma "<<endl;
    			break;
    		case 2:
    			cout<<"Under the Supervision of Dr.Sarthak Thakur"<<endl;
                break;
            default:
                cout<<"Invalid Input!"<<endl;
                break;
        }
        
        return ss;
    
    }
    
};
int main(){
	cout<<"-------------------------------------"<<endl;
	cout<<"    Welcome to Himalyan Hospital\n";
	cout<<"-------------------------------------"<<endl;
	situation no1;
	int kmy=0;
    no1.inputdetails();
    no1.displayPatients();
	kmy=no1.situation_of_paient();
	int l=0;
    if(kmy==2)
    {
	  no1.biling_input();
      l=no1.checkbillstatus();
       if(l==1)
	   {
		cout<<"Thank you! :)"<<endl;
	   }
	   else{
		cout<<"Please Pay your due bill. :] "<<endl;
	   }
    }
	else{
        cout<<"Please Take Care of the patient first, then will go for payment. :( "<<endl;
        cout<<"Thank You!"<<endl;
    }
    
	return 0;
}
