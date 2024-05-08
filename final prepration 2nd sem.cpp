
all the code is commented out please ensure that when you use this please remove the comments

//                     Final prepration for c++ 


/*
control structure:
	
sequence structure : when we exicute the statement one by one in our program
selection structure: when we do action on the bases of some selections
loop structure: after the checking of loop the exicution of code.
*/

//      pointer

/*
#include<iostream>
using namespace std;
int main(){
	int a=10;
	int *b=&a;
	cout<<"value of a:"<<a<<endl;
	cout<<"value of b:"<<b<<endl;
	cout<<"vale at b:"<<*b<<endl;
	return 0;
}
*/

//          ARRAY WITH POINTER
/*

#include<iostream>
using namespace std;
int main(){
	int arr[5]={10,20,30,40,50};
	int *p =arr;
	cout<<"marks of arr[0]is :"<<*p<<endl;
	cout<<"marks of arr[1]is :"<<*(p+1)<<endl;
	cout<<"marks of arr[2]is :"<<*(p+2)<<endl;
	cout<<"marks of arr[3]is :"<<*(p+3)<<endl;
	cout<<"marks of arr[4]is :"<<*(p+4)<<endl;
	return 0;
}
*/

//       Structure: when we use diffrent types of datatype in one.

/*
#include<iostream>
#include<string>
using namespace std;
struct employee{
	int id;
	char name;
};
int main(){
	struct employee sahil;
	sahil.id=2541;
	sahil.name ='s';
	cout<<"id of a person:   "<<sahil.id<<endl;
	cout<<"name of a person: "<<sahil.name<<endl;
	return 0;
}
*/
//                  Recursions

/*
#include<iostream>
using namespace std;
int factorial(int n){
	if(n<=1){
		return 1;
	}
	return (n* factorial(n-1));
}
int main(){
	int a;
	cout<<"enter a number:"<<endl;
	cin>>a;
	cout<<"factorial of the number:"<<factorial(a);
	return 0;
} 
*/

//            FUNCTION OVERLOADING
/*
#include<iostream>
using namespace std;
int add(int a,int b,int c){
	int sum;
	sum= a+b+c;
	return sum;
}
int add(int a,int b){
	int sum;
	sum=a+b;
	return sum;
}
int main(){
	cout<<"the sum of 3,9:"<<add(3,9)<<endl;
	cout<<"thesum of 4,5,7:"<<add(4,5,7)<<endl;
	return 0;
}
*/

//           Object oriented programing
/*
-> Inheritence = properties of one class can be inherited into others
-> polymorphism= ability to take more then one forms.
-> we cannot protect data in structures so we can uses classes because 
   in classes the data is protected
->  we cannot put functions in the structures.
*/
/*
#include<iostream>
#include<string.h>
using namespace std;
class student {
	private:
		int id;
	public:
		char i_maths;
		char i_english;
		string name;
		int maths;
	    int english;
		void marks();
		void grade(){
			cout<<"grade of maths:";
			cin>> i_maths;
			cout<<"grade of english:";
			cin>> i_english;
		}
	 void show(){
	 	cout<<"marks of maths:"<< maths<<endl;
	 	cout<<"marks of english:"<< english<<endl;
	 	cout<<"grade of maths:"<<i_maths<<endl;
	 	cout<<"grade of maths:"<<i_english<<endl;
	 	
	 }
};
void student :: marks(){

	cout<<"marks in	maths:"<<endl;
	cin>>maths;
	cout<<"marks in	english :"<<endl;
	cin>>english;
}
int main(){
	student sahil;
	cout<<"marks :"<<endl;
	sahil.marks();
	cout<<"grade :"<<endl;
	sahil.grade();
	sahil.show();
	return 0;
	
	
}
   */
//           nesting of membor functions 

/*
#include<iostream>
#include<string.h>
using namespace std;
class binary{
	private:
		string s;
		public:
			void read();
			void check_bin();
};
void binary :: read(){
	cout<<"enter any binary number:"<<endl;
	cin>>s;
}
void binary :: check_bin(){
	for(int i=0;i<=s.length();i++){
		if(s.at(i)!='0' && s.at(i)!='1' ){
			cout<<"incorrect binary number"<<endl;
		}
	}
}
int main(){
	cout<<"binary number is:"<<endl;
	binary sahil;
    sahil.read();
	sahil.check_bin();
	return 0;
} 
*/

//                          Memory alocation in OOPS  with array

/*
#include<iostream>
using namespace std;
class shop{
	private:
		int itemid[100];
		int itemprice[100];
		int counter;
		public:
			void initcounter(){
				counter=0;
			}
			void setprice();
			void displayprice();
};
void shop::setprice(){
	cout<<"enter the id of the item:"<<endl;
	cin>>itemid[counter];
	cout<<"enter the price of the item:"<<endl;
	cin>>itemprice[counter];
	counter++;
}
void shop::displayprice(){
	for(int i=0;i<counter;i++){
		cout<<"the price of the item with the price"<<itemid[i]<<"is" <<itemprice[i];
	}
}
int main(){
	shop dukan;
	dukan.setprice();
	dukan.setprice();
	dukan.setprice();
	dukan.setprice();
	dukan.displayprice() ;
	return 0;
	}
	*/
	//                  Static data member and Static function
/*
#include<iostream>
using namespace std;
class sahil{
	private:
		int id;
		static int count;
		public:
			void getdata();
			void display();
			
};	
void sahil::getdata(){
	cout<<"enter id :"<<endl;
	cin>>id;
	count++;
}
void sahil::display() {
	cout<<" the id of the employee is:"<<id<<"the number of employee is :"<<count<<endl;
	
	
}
int sahil:: count;
int main(){
	sahil raj,miku,puneet;
	raj.getdata() ;
	raj.display() ;
	
	miku.getdata() ;
	miku.display() ;
	
	puneet.getdata() ;
	puneet.display() ;
	return 0;
}
*/

//      Objects with array
/*
#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
		int id;
		string name;
		public:
			void setdata();
			void getdata();
};
void student::setdata() {
	cout<<"enter the name of a person:"<<endl;
	getline(cin,name);
	cin.ignore();
	cout<<"enter your id:"<<endl;
	cin>> id;
	
} 
void student::getdata() {
	cout<<"name is :"<<name<<endl;
	cout<<"id is :"<<id<<endl;
} 
int main(){
	student fb[4];
	for(int i=0;i<4;i++){
		fb[i].setdata() ;
		fb[i].getdata();
	}
	return 0;
	
	
}
*/


//              FRIEND FUNCTION	
/*
#include<iostream>
using namespace std;
class student{
	private:
		int age;
		int id;
	public:
			
		void getdata(){
	cout<<"enter the age of the student:"<<endl;
	cin>>age;
}
void showdata(){
	cout<<"age of the student :"<< age<<endl;
	
}
friend void getid(student);
};
void getid(student k){
	cout<<"enter your id:"<<endl;
	cin>>k.id;
}
int main(){
	student sahil;
	sahil.getdata() ;
	getid(sahil) ;
	sahil.showdata();
	
	return 0;
}
*/


//           Friend class

/*
#include<iostream>
using namespace std;
class student{
	private:
		int a;
		int b;
		public:
			friend class sahil;
			void getdata(){
				cout<<"enter A ";
				cin>>a;
				cout<<"enter B  "<<endl;
				cin>>b;
				
			}
			void show(){
				cout<<"a is"<<a<<endl;
				cout<<"b is "<<b<<endl;
			}
};
class sahil{
	private:
		int c;
		int d;
		public:
			int add(student s);
			void show(){
				cout<<"sum is :"<<c<<endl;
			}
};
int sahil::add(student s) {
	c=s.a + s.b;
	return c;
}
int main(){
	student s1;
	s1.getdata() ;
	s1.show() ;
	sahil s2;
	s2.add(s1);
	s2.show();
	
}
*/



//					             constructer
/*
#include<iostream >
using namespace std;
class student{
	private:
		int roll_no;
		int a;
		int b;
		public:
			student();
			void print(){
			cout<<"a is :"<<a<<endl;
			cout<<"b is :"<<b<<endl;
			}
};
  student::student() {                        // default constructor
	cout<<"enter the number a:"<<endl;
	cin>>a;
	cout<<"enter the number b :"<<endl;
	cin>>b;
}

int main(){
	student sahil,miku,karan;
	cout<<"for sahil:"<<endl;
	sahil.print();
	cout<<"for mikku:"<<endl;
	miku.print() ; 
	cout<<"for karan :"<<endl;
	karan.print() ;
	return 0;
}
*/

//                     Constructor overloading 
/*
#include<iostream>
using namespace std;
class student{
	private:
		int a,b;
		public:
		student(int k,int l);
		student(int x);
		void print(){
			cout<<"a is :"<<a<<endl;
			cout<<"b is :"<<b<<endl;
		}
		
};
student :: student(int k,int l){
	a=k;
	b=l;
}
student ::student(int x){
	a=x;
	b=0;
}
int main(){
	student sahil(40,50);
	sahil.print();
	student mikku(10);
	mikku.print() ;
	return 0;
}
*/


//                Distructors: to free the memory taken by any constructor
/*

#include<iostream>
using namespace std;
class pixel{
	public:
		pixel(){
			cout<<"know constructer is working:"<<endl;
		}
		~pixel(){
			cout<<"know  distructer is working:"<<endl;
		}
		
};
int main(){
	pixel s1;
	return 0;
}
*/

//                inheritence
/*
INHERITENCE is a part of oops
types of inheritence :
	1> multiple inheritence
	2> hierarchical inheritence
	3> multilevel inheritence
	4> hybrid inheritence
	5> single inheritence

# single inheritence- drived a class from a base class 
# multiple inheritence = a drived class from more then one base class.
# hierarchical inheritence = several drived classes from single base classes.
# multilevel inehritence = drive a class from drived class.
# hybrid inheritence = mixture of multilevel inheritence and multiple inheritence. 
*/

// we cannot inherit the private members of the base class (never)
/*
#include<iostream>
using namespace std;
class employee{
	
		public:
			int id;
			int salary;
			employee(){
				
				id=1;
				
				salary=34;
				
			}
			void print(){
				cout<<"id of the employee is:"<<id<<endl;
				cout<<"salary of the employee is:"<<salary<<endl;
			}
};
class hr: employee{
	public:
		hr(){
			cout<<"enter id is :"<<endl;
			cin>>id;
		}
		void display(){
			cout<<"id is :"<<id<<endl;
		}
		int langauge=9;
		void getdata(){
			cout<<"langauge code is :"<<langauge<<endl;
		}
};
int main(){
	employee sahil;
	sahil.print() ;
	hr mikku;
	mikku.display();
	mikku.getdata() ;
	
	return 0;
}
*/


//           Single Inheritence

/*
#include<iostream>
using namespace std;
class base{
	private:
		int id;
		public:
			int salary;
			void getdata();
			void print();
};
void base :: getdata(){
	cout<<"enter id of the employee:"<<endl;
	cin>>id;
	cout<<"enter salary of the employee:"<<endl;
	cin>>salary;
	
}
void base :: print(){
	cout<<"employee id:"<<id<<endl;
	cout<<"employee salary:"<<salary<<endl;
}
class drived:  public base {
	private:
		int age;
		public:
			int weight;
			void get_data();
			void display();
			
};
void drived:: get_data(){
	cout<<"enter age of the employee:"<<endl;
	cin>> age;
	cout<<"enter weight of the employee:"<<endl;
	cin>>weight;
	
}
void drived :: display(){
	cout<<" age of the employee:"<<age<<endl;
	cout<<" weight of the employee:"<<weight<<endl;
	cout<<" salary of the employee:"<<salary<<endl;
	
}
int main(){
	base employe1;
	employe1.getdata();
	employe1.print() ;
	drived employe2;
	employe2.get_data();
	employe2.display();
	
}
*/


// -> protected -> in protected we put hose data which we can inherit .

/*
#include<iostream>
using namespace std;
class aryan{
	protected :
		int a;
		private:
			int d;
			public:
				int b;
				int c;
				void getdata();
				
};
void aryan::getdata() {
	cout<<"enter the value of a : "<<endl;
	cin>> a;
	cout<<"enter the value of b: "<<endl;
	cin>>b;
}
class base: public aryan{
	public:
		void sum();
		void display();
};
void base :: sum(){
	cout<<"sum of two number a and b is :"<<endl;
	c=a+b<<endl;
	cout<<c;
}
void base::display() {
	cout<<"the number a is :"<<a<<endl;
	cout<<"the number b is :"<<b<<endl;
	cout<<"the sum of the two number a and b is :"<<c<<endl;
	
}

int main(){
	aryan don;
//	don.getdata() ;
	base don2;
	don2.getdata() ;
	don2.sum() ;
	don2.display() ;
	return 0;
}
*/

//                             Multiple Inheritence :
//                                                { when we inherit data from the inherited class }

/*
#include<iostream>
#include<string>
using namespace std;
class student {
	protected :
		int roll_number;
		public:
			string name;
			void get_data();
			void show();
			
};
void student :: get_data(){
	cout<<"enter the name of the student :"<<endl;
	getline(cin,name);
	cout<<"enter the roll number of the student :"<<endl;
	cin>>roll_number;
	cin.ignore();
}
void student::show() {
	cout<<"name is: "<<name<<endl;
	cout<<"roll number is "<<roll_number<<endl;
}
class exam: public student {
	protected:
		float maths;
		float english;
		public:
			void get_marks();
			void show_marks();
			
};
void exam::get_marks() {
	cout<<"enter the marks of the english: "<<endl;
	cin>>english;
	cout<<"enter the marks of the maths: "<<endl;
	cin>>maths;
}
void exam :: show_marks(){
	cout<<"marks of english:"<<english<<endl;
	cout<<"marks of maths:  "<< maths<<endl;
}
class result : public exam{
	public:
		float total_marks;
		void show_result();
};
void result::show_result() {
	cout<<"the name and roll number of the student is :"<<endl;
	show();
	cout<<"marks of the student :"<<endl;
	show_marks();
	total_marks=english+maths;
	cout<<"total marks out of 200 are: "<<total_marks;
	
}

int main(){
	result sahil;
	
	sahil.get_data() ;
	sahil.get_marks() ;
	sahil.show_result() ;
	return 0;
}
*/


//              Virtual class inheritence  
/*

#include<iostream>
using namespace std;
class student {
	protected :
		int roll_number;
		public:
			void get_data();
			int id;
			void print();
};
void student ::get_data(){
	cout<<"enter your id number: "<<endl;
	cin>>id;
	cout<<"enter your roll number:"<<endl;
	cin>>roll_number;
}
void student :: print(){
	cout<<"id : "<<id<<endl;
	cout<<"roll number: "<<roll_number<<endl;
	
}
class test : virtual  student{
	
	protected:
	 float english;
	    float maths;
	          public:
	          	void get_marks();
	          	void show_data();
		
};
void test :: get_marks(){
	cout<<"enter the marks of the english : "<<endl;
	cin>>english;
	cout<<"enter the marks of the maths :"<<endl;
	cin>> maths;
}
void test::show_data() {
	cout<<"marks of english:"<<english<<endl;
	
	cout<<"marks of the maths: "<<maths<<endl;
}
class sports : virtual public student {
	protected:
		float score;
		public:
			void set();
			void print_score();
};
void sports ::set(){
	cout<<"enter your PT score : "<<endl;
	cin>>score;
	
}
void sports :: print_score(){
	cout<<"PT score : "<<score<<endl;
}
class result : public test,public sports{
	private:
		float total;
		public:
			void display();
};
void result ::display(){
	
	total=english+maths;
	
	print();
	show_data();
	print_score();
	cout<<"total: "<<endl;
	cout<<total;cout<<"out of 200";
	
}
int main(){
	result sahil;
	sahil.get_data();
	sahil.get_marks() ;
	sahil.set();
	sahil.display() ;
	return 0;
	
}
*/

/*                        Polymorphyism      (one name but multiple work)                                            example 	are  	function overloading 
     two types :
	->compile time(function overloading, operator overloading) 
	->run time(virtual function)






*/

//                pointers to drived class 
/*
#include<iostream>
using namespace std;
class base_class{
 public:
 	int var_base;
 	void display();
};
void base_class::display() {
	cout<<"displaying base class variable var_base : "<<var_base<<endl;
	
}
class drived_class : public base_class{
	public:
		int var_drived;
		void display();
};
void drived_class::display() {
	cout<<"displaying base class variable var_base : "<<var_base<<endl;
	cout<<"displaying drived class variable var_drived : "<<var_drived<<endl;
}
int main(){
	base_class * base_class_pointer; // pointer of base class object
	base_class base_object;
	drived_class drived_object;
	base_class_pointer=& drived_object;
	base_class_pointer->var_base=44;
	base_class_pointer->display();
	cout<<"********************************"<<endl;
	drived_class * drived_class_pointer;
	drived_class_pointer=&drived_object;
	drived_class_pointer->var_drived=99;
	drived_class_pointer->display();
	return 0;
	
}
*/

//                        Virtual function # 56,57
/*

#include<iostream>
using namespace std;
class base_class{
 public:
 	int var_base;
 	virtual void display();
};
void base_class::display() {
	cout<<" 1 displaying base class variable var_base : "<<var_base<<endl;
	
}
class drived_class : public base_class{
	public:
		int var_drived=20;
		void display();
};
void drived_class::display() {
	cout<<" 2 displaying base class variable var_base : "<<var_base<<endl;
	cout<<" 2 displaying drived class variable var_drived : "<<var_drived<<endl;
}

int main(){
	base_class * base_class_pointer;
	base_class  base_drived;
	drived_class drived_obj;
	base_class_pointer=& drived_obj;
	base_class_pointer->var_base=88;
	
	base_class_pointer->display();
	return 0;
	
}

*/


//                        Pure Virtual Function and Abstract class
// abstract class is a class in which one pure virtual function exist.

 //                     FILE INPUT OR OUTPUT 59,60
 

 /*
 the useful classes in working with file re:
 ->fstream base  -> base class
 ->ifstream  -> drived from the base class
 ->ofstream -> drived from the base class
*/
/*
In c++ first you have yo open the file there are two ways of opening the form
1. using the constructor 
2. using the member function open() of the clsss 

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string s="my name is sahil ";
//	opening file using constructor
ofstream out("final exam 2nd sem textfile.txt");// write operation
out<<s;
return 0;
}

*/











