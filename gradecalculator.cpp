#include <iostream>
using namespace std;
class Student{
	private:
		float marks;
	 public:
	 	void getMarks(){
	 		cout<<"Enter your marks: ";
	 		cin>>marks;
	 		
	 		while(marks>100||marks<0)
	 		{
	 			cout<<"Enter marks between 0-100"<<endl;
	 			cout<<"Retry: ";
	 			cin>>marks;
			 }
		 }
		 
		 void calculateGrade(){
		 	cout<<"Total marks: "<<marks<<endl;
		 	cout<<"grade: ";
		 	
		 	if(marks<40)
		 	{
		 		cout<<"F";
			 }
			 
			else if(marks>=40 && marks<50)
			{
				cout<<"E";
			}
			
			else if(marks>=50 && marks<60 )
			{
				cout<<"D";
			}
			else if(marks>=60 && marks<65 )
			{
			 	cout<<"C";
			}
			else if(marks>=65 && marks<70 )
			{
				cout<<"D";
			}
			else if(marks>=70 && marks<75 )
			{
				cout<<"B+";
			}
			else if(marks>=75 && marks< 80 )
			{
				cout<<"A";
			}
			else if(marks>=80 && marks<85 )
			{
				cout<<"A+";
			}
			else if(marks>= 85 && marks<90 )
			{
				cout<<"A++";
			}
			else
			{
				cout<<"O";
			}
			}
			
		 
};

int main(){
Student studen;
studen.getMarks();
studen.calculateGrade();
}
