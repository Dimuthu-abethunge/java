#include<iostream>
#include<conio.h>
#include<fstream>
#include<bits/stdc++.h>
#include<string.h>
#include<sstream>
#include<cstring>
using namespace std;
int c;

 	struct flightSeat{
	              string seatRow;
	              string seatClass;
	              string seatName;
	
};
class flight{
	private:
		string fname;
	 	string date;
	 	string d_airport;
	 	string a_airport;
	 	
	public:
		void fname(string FNO){
			fname=FNO;
		}
		void date(string DATE){
			date=DATE;
		}
		void d_airport(string D_A){
			d_airport=D_A;
		}
		void a_airport(string A_A){
			a_airport=A_A;
		}
//		struct fseat arr[100];
//		string putFno();
//		string putdate();
//		string putdepature_airport();
//		string putarrival_airport();
//		void getEseat(int);
//		void getBseat(int);
//		int putEseat();
//		int putBseat();
};

	
	void fname
};
int main(){
	string str;                   		 // FIRST TIME FILE OPEN TO CALCULATE OBJECT
	fstream file1; 
	file1.open("Flights.txt",ios::in); 
    if(file1.is_open())
	{
   		 while (!file1.eof()) { 
        
        	 getline(file1,str);
        	if(str.empty())
    		{ 
    		c++;
			}
    	} 
   	}
   	flight f[c];                       // object creat
   	
    file1.close(); 
    									//SECOND TIME FILE OPEN FOR GET DATA
    fstream file2; 
    file2.open("Flights.txt",ios::in); 

    if(file2.is_open()){

	int eseats = 0;
	int bseats = 0;
   
     for(x = 0;x < c; x++){
     	 getline(file2,f[x].fname(str));
     	 getline(file2,f[x].date(str));
     	 getline(file2,f[x].a_airport(str));
     	 getline(file2,f[x].a_airport(str));
     	 
     	 
		  }
	}
	file2.close();
	
    
}
