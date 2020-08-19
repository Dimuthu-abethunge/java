#include<iostream>
#include<conio.h>
#include<fstream>
#include<bits/stdc++.h>
#include<string.h>
#include<sstream>
#include<cstring>
using namespace std;
struct fseat{
	string row;
	string type;
	string seatABC;
};

class flight{
	private:
		string flight_number;
	 	string date;
	 	string depature_airport;
	 	string arrival_airport;
	 	int Eseat;
	 	int Bseat;
	public:
		void getFno(string);
		void getdate(string);
		void getdepature_airport(string);
		void getarrival_airport(string);
		struct fseat arr[100];
		string putFno();
		string putdate();
		string putdepature_airport();
		string putarrival_airport();
		void getEseat(int);
		void getBseat(int);
		int putEseat();
		int putBseat();
};

void flight::getFno(string flight_number){
	this->flight_number = flight_number;
	
}
void flight::getdate(string date){
	this->date=date;
}

void flight::getdepature_airport(string depature_airport){
	this->depature_airport=depature_airport;
}

void flight::getarrival_airport(string arrival_airport){
	this->arrival_airport=arrival_airport;
}
string flight::putFno(){
//	cout<<flight_number<<endl;
	return flight_number;
}
string flight::putdate(){
//	cout<<date<<endl;
	return date;
}

string flight::putdepature_airport(){
//	cout<<depature_airport<<endl;
	return depature_airport;
}

string flight::putarrival_airport(){
//	cout<<arrival_airport<<endl;
	return arrival_airport;
}
void flight::getEseat(int ES){
	Eseat=ES;
}
int flight::putEseat()
{
	return Eseat;
}
void flight::getBseat(int BS){
	Bseat=BS;
}
int flight::putBseat(){
	return Bseat;
}




int main(){
	string line;
    fstream file1;
    file1.open("Flights.txt",ios::in); 
    int count; //object count
	// Check if object is valid
    if(!file1.is_open()){
    	cout<<"cannot open the file"<<file1<<endl;
    	return false;}
	
    while (getline(file1,line)) { 
        	if(line.empty())   //or IF(LINE ="\0")
    	{ 
    		count++;
		}
    
    } 
    //cout<<count;
    //Close The File
    file1.close(); 
    flight f[count];
    
//Second time file open
    fstream file2;                                   
    file2.open("Flights.txt",ios::in);          
    
	// Check if object is valid
    if(!file2.is_open()){
    	cout<<"cannot open the file2"<<file2<<endl;
    	return false;
	}
	int newcount=0;
	int obj=0;
	int i=0;
	int eseat[10];
	int bseat[10];
	int Eseat=0;
	int Bseat=0;
	while(getline(file2,line)){
		newcount++;
		if(newcount==1){
			f[obj].getFno(line);
		}
		else if(newcount==2){
			f[obj].getdate(line);
		}
		else if(newcount==3){
			f[obj].getarrival_airport(line);
		}
		else if(newcount==4){
			f[obj].getdepature_airport(line);
		}
		else if(!line.empty()){
				stringstream ss(line);
				ss>>f[obj].arr[i].row>>f[obj].arr[i].type>>f[obj].arr[i].seatABC;
			    	if(f[obj].arr[i].type == "E"){
			    		Eseat=Eseat+(f[obj].arr[i].seatABC.length());
					}else{
						Bseat=Bseat+(f[obj].arr[i].seatABC.length());
					}
				
					i++;
							}
		else{
				newcount=0;	
				f[obj].getEseat(Eseat);
				f[obj].getBseat(Bseat);
//				eseat[obj]=Eseat;
//				bseat[obj]=Bseat;
				Eseat=0;
				Bseat=0;
				obj++;
				i=0;
			}
		}
	
	int j=0; 
	int k=0;
	
//	for(j=0;j<obj;j++){
//		
//		f[j].putFno();
//		f[j].putdate();
//		f[j].putarrival_airport();
//		f[j].putdepature_airport();
		
		for(k=0;k<60;k++){
		
			if(f[j].arr[k].row=="\0")
			{
				break; //sto garbadge value
			}
			else
			{
	//			cout<<f[j].arr[k].row<<"  "<<f[j].arr[k].type<<"  "<<f[j].arr[k].seatABC<<endl;

			}
		}//k for loop

//	}//j for loop
//	    for(int t=0; t<count ; t++){
//	    	cout<<" E "<<eseat[t]<<endl;
//	    	cout<<" B "<<bseat[t]<<endl<<endl;
//////////	avlflight()	

		
	////	for(int i=0;i<count;i++){
////
////	f[i].putEseat();
////	f[i].putBseat();
////	f[i].avlflight()
////	}
int num;
do{	
	cout<<endl<<endl<<"--------------- Menu ---------------------"<<endl<<endl;
	cout<<"	< 1 > Display available flights"<<endl;
	cout<<"	< 2 > View flight"<<endl;
	cout<<"	< 3 > Seat availability"<<endl;
	cout<<"	< 4 > Seat booking"<<endl;
	cout<<"	< 5 > Exit"<<endl<<endl;
	cout<<"Enter Your Choice : " ;
	cin>>num;

	string view;  // Variable For Case 1
	string fn;  // Variable For Case 1
	int st=0; // Variable For Case 1
	int v=0; // Variable For Case 1
	string fNo;	// Variable For Case 2
	string row;	// Variable For Case 2
	string type; // Variable For Case 2
	char seat; // Variable For Case 2
	int flag4A=0;
	int flag4row_type=0;
	int flag4seat=0;
	
	
	
	v=0;
	switch(num){
		case 1:							//********************************************************************************  01
			cout<<"...........................................";
			cout<<endl<<"Display available flights"<<endl;
			cout<<"..........................................."<<endl;
			for(int k=0;k<count;k++){
				if(f[k].arr[j].seatABC.length()==0 && f[k].arr[j].seatABC.length()==0){
					return 0;
				}
				else{
					cout<<f[k].putFno()<<endl;
					cout<<f[k].putdate()<<endl;
					cout<<f[k].putarrival_airport()<<endl;
					cout<<f[k].putdepature_airport()<<endl;
					cout<<"E : "<<f[k].putEseat()<<endl;
					cout<<"B : "<<f[k].putBseat()<<endl<<endl;
					
				}
			}
			cout<<endl<<endl;
			break;
		case 2:							//********************************************************************************* 02
			int valid;
			valid=0;
			cout<<"...........................................";
			cout<<endl<<"View flight"<<endl;
			cout<<"..........................................."<<endl;;
			cout<<endl<<"Enter Flight Number :";
			cin>>view;
			for(int i=0; i<count; i++){
				if(view==f[i].putFno()){
					valid=1;
					cout<<f[i].putarrival_airport()<<endl;
					cout<<f[i].putdepature_airport()<<endl;
					cout<<f[i].putdate()<<endl;
					for(int j=0 ; j<60;j++){
						if(f[i].arr[j].row!="\0"){
							if(f[i].arr[j].seatABC!="\0"){
							cout<<f[i].arr[j].row<<" "<<f[i].arr[j].type<<" "<<f[i].arr[j].seatABC<<endl;
							}
						}
						
						
					}
					cout<<"E : "<<f[i].putEseat()<<endl;
					cout<<"B : "<<f[i].putBseat()<<endl;
				}	
			}
			if(valid==0){
				cout<<"Invalid Flight Number";
				
			}
			break;
		case 3:										//******************************************************************** 03
			int i;
			cout<<"...........................................";
			cout<<endl<<"Seat availability"<<endl;
			cout<<"..........................................."<<endl;
			cout<<endl<<"Enter Flight Number : ";
			cin>>fn;
			cout<<endl<<"How many seat U NEED : ";
			cin>>st;
			for(i=0; i<count; i++){
				if(fn==f[i].putFno()){
					if(f[i].putEseat()+f[i].putBseat()< st){	
						cout<<"		Not Enought Space !!!"<<endl<<"		Plase Try another Flight ";
					}
					else{	
						cout<<"E seat : "<<f[i].putEseat()<<endl;
						cout<<"B seat : "<<f[i].putBseat()<<endl;
						for(int j=0 ; j<60;j++){
						if(f[i].arr[j].row!="\0"){
							cout<<f[i].arr[j].row<<" "<<f[i].arr[j].type<<" "<<f[i].arr[j].seatABC<<endl;
						}
						
						
					}	
					}
				}
		    }
				
			break;
		case 4:					//*************************************************************************** 04
////		int flag4row&type=0;
////	int flag4type=0;
////	int flag4seat=0;
			cout<<"...........................................";
			cout<<endl<<"Seat booking"<<endl;
			cout<<"..........................................."<<endl;
			cout<<"Enter Flight Number : ";
			cin>>fNo;
			cout<<"Enter Row & Type & Seat : ";
			cin>>row>>type>>seat;
			for(int i=0;i<count;i++){
				if(fNo==f[i].putFno()){
					flag4A=1;
					for(int j=0;j<60;j++){
						if(f[i].arr[j].row==row &&	f[i].arr[j].type==type){
							flag4row_type=1;
							for(int k=0; k<8 ;k++){
								if(f[i].arr[j].seatABC[k] == seat){
									cout<<f[i].arr[j].row<<" ROW	"<<f[i].arr[j].type<<" type		"<<f[i].arr[j].seatABC[k]<<" seat is booking";
									f[i].arr[j].seatABC.erase(k,1);	
									
								}
							}
						}
					}
				}
			}
			if(flag4A==0){
				cout<<"				Wrong Flight Number"<<endl;
			}
			else if(flag4row_type==0){
				cout<<"				Wrong Type or Row "<<endl;
			}
			break;
		case 5: {//******************************************************************** 05
    		fstream flle3;
    		flle3.open("Flight3.txt",ios::out);
    	
    	            for(int l=0;l<count;l++){
    	            	flle3<< f[l].putFno() << endl;
    	            	flle3<< f[l].putdate() << endl;
    	            	flle3<< f[l].putdepature_airport() << endl;
    	            	flle3<< f[l].putarrival_airport() << endl;
                        for(int j=0 ; j<60; j++){
                        	if(f[l].arr[j].seatABC!="\0"){
		                	flle3 << f[l].arr[j].row<<" ";
		                	flle3 << f[l].arr[j].type<<" ";
		                	flle3 << f[l].arr[j].seatABC<<endl;
							}
						}
					flle3<<endl;
					}
					
			break;
	}
//		default:
//			cout<<endl<<"Invali input ! Try again "<<endl;
//			system("pause");
//			break;

}
}while(num!=6);	


}//main


