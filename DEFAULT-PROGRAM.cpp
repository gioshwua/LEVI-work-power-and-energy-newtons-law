#include <iostream>
#include <cmath>
using namespace std; // add units sa mga sagot // add formula definition etc.
void first();
void loading();
void line();
void load();
void second();
void third();
void sw();
void sec();
void header();
char back, law;
double ans;

int main(){
header();
loading();

 do{
 	header();
	 system("color F0");
     system("cls");
     first();
     line();
    
  cout << endl;
  cout << "Do you wish to continue the program? [Y/N]: ";
  cin >> back;
}

   while(back == 'y'|| back == 'Y');
   cout << "thankyou for using our program!";
   return 0;
}


void loading(){
	system("color 0D");
	cout << "\n\n\n";	                                                                                  
		cout << "\t\t\t          _            ___________  _               _  ___________ "<<endl;
		cout << "\t\t\t         ¦¦¦          ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦             ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
		cout << "\t\t\t         ¦¦¦          ¦¦¦¯¯¯¯¯¯¯¯¯  ¦¦¦           ¦¦¦  ¯¯¯¯¦¦¦¯¯¯¯ "<<endl;
		cout << "\t\t\t         ¦¦¦          ¦¦¦            ¦¦¦         ¦¦¦       ¦¦¦    "<<endl;
		cout << "\t\t\t         ¦¦¦          ¦¦¦_________    ¦¦¦       ¦¦¦        ¦¦¦       "<<endl;
		cout << "\t\t\t         ¦¦¦          ¦¦¦¦¦¦¦¦¦¦¦¦¦    ¦¦¦     ¦¦¦         ¦¦¦    "<<endl;
		cout << "\t\t\t         ¦¦¦          ¦¦¦¯¯¯¯¯¯¯¯¯      ¦¦¦   ¦¦¦          ¦¦¦      "<<endl;
		cout << "\t\t\t         ¦¦¦          ¦¦¦                ¦¦¦ ¦¦¦           ¦¦¦      "<<endl;
		cout << "\t\t\t         ¦¦¦_________ ¦¦¦_________        ¦¦¦¦¦        ____¦¦¦___ "<<endl;
		cout << "\t\t\t         ¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦        ¦¦¦        ¦¦¦¦¦¦¦¦¦¦¦¦¦"<<endl;
		cout << "\t\t\t         ¯¯¯¯¯¯¯¯¯¯¯  ¯¯¯¯¯¯¯¯¯¯¯          ¯          ¯¯¯¯¯¯¯¯¯¯¯ "<<endl ;  
		
		  
 	  
		 cout<<"\n\n\n\t\t\t\t\t\tLEVI is Loading! Please Wait.\n\n";
	char a=177, b=219;
 		cout<<"\t\t\t\t\t\t";
 	for (int i=0;i<=30;i++)
 		cout<<a;
 		system("color 0B");
 		cout<<"\r";
		 cout<<"\t\t\t\t\t\t";
		 system("color 0E");
 		for (int i=0;i<=30;i++) {
 		 cout<<b;
 		for (int j=0;j<=1e7;j++);
		 system("color 0C");}
 	system("color 0A");
	system("CLS");
}	
    void line(){
	for (int rows=1;rows<=120;rows++){
			cout<<"=";
		};
}

void load(){
	cout<<"\n\n\n\t\t\t\t\tLEVI IS NOW GENERATING THE LAW !!\n\n";
	char a=111, b=222;
 		cout<<"\t\t\t\t\t";
 	for (int i=0;i<=30;i++)
 		cout<<a;
 		cout<<"\r";
		 cout<<"\t\t\t\t\t";
 		for (int i=0;i<=30;i++) {
 		 cout<<b;
 		for (int j=0;j<=1e7;j++);}
}	

 void first(){
 	char choice;
 
cout<<"\n\n\n";
cout<<"\t\t\t\t _________________________________________________"<<endl;
cout<<"\t\t\t\t|   ___________________________________________   |"<<endl;
cout<<"\t\t\t\t|  |                                           |  |"<<endl;
cout<<"\t\t\t\t|  |    PLEASE CHOOSE WHAT YOU WANT TO DO?     |  |"<<endl;
cout<<"\t\t\t\t|  |                                           |  |"<<endl;
cout<<"\t\t\t\t|  |  Press [A] for Newtons Laws               |  |"<<endl;
cout<<"\t\t\t\t|  |  Press [B] for Work,Power and Energy      |  |"<<endl;
cout<<"\t\t\t\t|  |___________________________________________|  |"<<endl;
cout<<"\t\t\t\t|  |                                           |  |"<<endl;
cout<<"\t\t\t\t|  |  NOTE: Please use Uppercase Characters    |  |"<<endl;
cout<<"\t\t\t\t|  |          To avoid errors, Thankyou        |  |"<<endl;
cout<<"\t\t\t\t|  |___________________________________________|  |"<<endl;
cout<<"\t\t\t\t|_________________________________________________|"<<endl;
cout<< "\n";
line();

 cout << "\t\t\t\t\tYOUR CHOICE: ";
 cin >> choice;
	if(choice == 'a' || choice == 'A'){
 system("cls");
 second();
}
  
 else if (choice =='b' || choice == 'B'){
 system("cls");
 third();}

 else{ 
   
    system ("cls");
    cin.clear();
	cin.ignore(32767,'\n');

	first(); }
}

void second(){
	
	 cout<<"\n\n\n";
cout<<"\t\t\t\t _________________________________________________"<<endl;
cout<<"\t\t\t\t|   ___________________________________________   |"<<endl;
cout<<"\t\t\t\t|  |      Choose what law you prefer           |  |"<<endl;
cout<<"\t\t\t\t|  |                                           |  |"<<endl;
cout<<"\t\t\t\t|  |  [A]: First Law                           |  |"<<endl;
cout<<"\t\t\t\t|  |  [B]: Second Law       [D]: back          |  |"<<endl;
cout<<"\t\t\t\t|  |  [C]: Third Law                           |  |"<<endl;
cout<<"\t\t\t\t|  |___________________________________________|  |"<<endl;
cout<<"\t\t\t\t|  |                                           |  |"<<endl;
cout<<"\t\t\t\t|  |  NOTE: Please use Uppercase Characters    |  |"<<endl;
cout<<"\t\t\t\t|  |          To avoid errors, Thankyou        |  |"<<endl;
cout<<"\t\t\t\t|  |___________________________________________|  |"<<endl;
cout<<"\t\t\t\t|_________________________________________________|"<<endl;
cout<< "\n";
line();
 
cout << "\t\t\t\t\tYOUR CHOICE: ";
 cin >> law;
 
 if(law == 'd'|| law == 'D' ){
 	system("cls");
 	first();
 }
 else {
 
 system("cls");
 sw();}
 

}

void third (){
	double  Work, Power, Energy, Distance, Time,Force2;
	char wpe;
	bool check = 0, check1 = 0, check3 = 0, check4 = 0, check5 = 0, check6 = 0;
	cout<<"\n\n\n";
cout<<"\t\t\t\t _________________________________________________"<<endl;
cout<<"\t\t\t\t|   ___________________________________________   |"<<endl;
cout<<"\t\t\t\t|  |          What do you want to get?         |  |"<<endl;
cout<<"\t\t\t\t|  |                                           |  |"<<endl;
cout<<"\t\t\t\t|  |  [A]: WORK                                |  |"<<endl;
cout<<"\t\t\t\t|  |  [B]: POWER        [D]: back              |  |"<<endl;
cout<<"\t\t\t\t|  |  [C]: ENERGY                              |  |"<<endl;
cout<<"\t\t\t\t|  |___________________________________________|  |"<<endl;
cout<<"\t\t\t\t|  |                                           |  |"<<endl;
cout<<"\t\t\t\t|  |  NOTE: Please use Uppercase Characters    |  |"<<endl;
cout<<"\t\t\t\t|  |          To avoid errors, Thankyou        |  |"<<endl;
cout<<"\t\t\t\t|  |___________________________________________|  |"<<endl;
cout<<"\t\t\t\t|_________________________________________________|"<<endl;
cout<< "\n";
line();
cout << "\t\t\t\t\tYOUR CHOICE: ";
 cin >> wpe;
 
if (wpe == 'd'|| wpe == 'D'){
	system("cls");
	first();
}
else{

 
 switch(wpe){
	case 'A':
		system("cls");
		cout<<endl;
		cout<<endl;
		cout<<"\n\t\t\t o=================================================================o";
		cout<<"\n\t\t\t |                        DEFINITION OF WORK                       |";		
		cout<<"\n\t\t\t o=================================================================o";
		cout<<"\n\t\t\t |       In physics, measure of energy transfer that occurs when   |";
		cout<<"\n\t\t\t | object is moved over a distance by an external force at least   |";
		cout<<"\n\t\t\t | art of which is applied in the direction of the displacement.   |";
		cout<<"\n\t\t\t |                                                                 |"; 
		cout<<"\n\t\t\t o=================================================================o";	
		
		cout<<endl;
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                 FORMULA OF WORK                    |";		
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                                                    |";
		cout<<"\n\t\t\t\t |                 FORCE * DISTANCE                   |";
		cout<<"\n\t\t\t\t |                                                    |";
		cout<<"\n\t\t\t\t o====================================================o";	
		
		
	while(check == false){ 
	try {

		cout << "\n\t\t\t\tEnter the value of Force: ";
	cin >> Force2;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Force2;
	}
	check = true;
	}
	catch(double num){
	cout << "\n\t\t\t\tInvalid input!\n";
	
	}
	}
			while(check1 == false){
	try {

		cout << "\n\t\t\t\tEnter the value of Distance: " ;
	cin >> Distance;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Distance;
	}
	check1 = true;
	}
	catch(double num){
	cout << "\n\t\t\t\tInvalid input!\n";
	}
	}
		ans = Force2*Distance;
		cout << "\n\t\t\t\tThe value of Power in the problem is: " << ans << endl;

		break;
	case 'B':
		system("cls");
		cout<<endl;
		cout<<endl;
		cout<<"\n\t\t o==============================================================================o";
		cout<<"\n\t\t |                              DEFINITION OF POWER                             |";		
		cout<<"\n\t\t o==============================================================================o";
		cout<<"\n\t\t |       Power is the amount of energy transferred or converted per unit time.  |";
		cout<<"\n\t\t |  Power is a scalar quantity. The output power of a motor is the product of   |";
		cout<<"\n\t\t |  the torque that the motor generates and the angular velocity of its output  |";
		cout<<"\n\t\t |  shaft.                                                                      |"; 
		cout<<"\n\t\t |                                                                              |";
		cout<<"\n\t\t o==============================================================================o";	
		
	cout<<endl;
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                FORMULA OF POWER                    |";		
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                      WORK                          |";
		cout<<"\n\t\t\t\t |                  ____________                      |";
		cout<<"\n\t\t\t\t |                                                    |";
		cout<<"\n\t\t\t\t |                      TIME                          |";
		cout<<"\n\t\t\t\t o====================================================o";	
		
		
		
		
		while(check3 == false){
	try {

		cout << "\n\t\t\t\tEnter the value work done: ";
	cin >> Work;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Work;
	}
	check3 = true;
	}
	catch(double num){
	cout << "\n\t\t\t\tInvalid input!\n";
	}
	}
	
	while(check4 == false){
	try {

		cout << "\n\t\t\t\tEnter the value of Time: " ;
	cin >> Time;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Time;
	}
	check4 = true;
	}
	catch(double num){
	cout << "\n\t\t\t\tInvalid input!\n";
	}
	}
		
		ans= Work/Time;
		cout << "\n\t\t\t\tThe value of Power in the problem is: " << ans << endl;
		break;
	case 'C':
		system("cls");
		cout<<endl;
		cout<<endl;
		cout<<"\n\t\t\t o=====================================================================o";
		cout<<"\n\t\t\t |                        DEFINITION OF ENERGY                         |";		
		cout<<"\n\t\t\t o=====================================================================o";
		cout<<"\n\t\t\t |       Is the capacity for doing work. It may exist in potential,    |";
		cout<<"\n\t\t\t | kinetic, thermal, electrical, chemical, nuclear, or other various . |";
		cout<<"\n\t\t\t | forms. After it has been transferred, energy is always designated   |";
		cout<<"\n\t\t\t | according to its nature.                                            |"; 
		cout<<"\n\t\t\t |                                                                     |";
		cout<<"\n\t\t\t o=====================================================================o";	
		
		cout<<endl;
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                 FORMULA OF ENERGY                  |";		
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                                                    |";
		cout<<"\n\t\t\t\t |                   POWER * TIME                     |";
		cout<<"\n\t\t\t\t |                                                    |";
		cout<<"\n\t\t\t\t o====================================================o";	
		
		
		while(check5 == false){
	try {

		cout << "\n\t\t\t\tEnter the value of Power: ";
	cin >> Power;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Power;
	}
	check5 = true;
	}
	catch(double num){
	cout << "\n\t\t\t\tInvalid input!\n";
	}
	}
	
			while(check6 == false){
	try {

		cout << "\n\t\t\t\tEnter the value of Time: " ;
cin >> Time;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Time;
	}
	check6 = true;
	}
	catch(double num){
	cout << "\n\t\t\t\tInvalid input!\n";
	}
	}
		
		ans=Power*Time;
		cout << "\n\t\t\t\tThe value of Energy in the problem is: " << ans << endl;
		break;
	default:
	    system ("cls");
	cin.clear();
	cin.ignore(32767,'\n');
	third();}
 }}

void sw (){
	if (law == 'a'|| law == 'A'){
		load();
		system ("cls");
 
        cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"\n\t\t\t o============================================================o";
		cout<<"\n\t\t\t |                   NEWTON'S FIRST LAW                       |";		
		cout<<"\n\t\t\t o============================================================o";
		cout<<"\n\t\t\t |       States that every object will remain at rest or      |";
		cout<<"\n\t\t\t | in uniform motion in a straight line unless compelled      |";
		cout<<"\n\t\t\t | to changeits state by the action of an external force.     |";
		cout<<"\n\t\t\t | This is normally taken as the definition of inertia.	      |";
		cout<<"\n\t\t\t |                                                            |";
		cout<<"\n\t\t\t o============================================================o";	
		cout<<endl;
		cout<<endl;
		cout<<endl;}
	
 
  else if(law == 'b'|| law == 'B'){
  	load();
  	system ("cls");
  
		cout<<endl;
		cout<<endl;
		cout<<"\n\t\t\t o===================================================================o";
		cout<<"\n\t\t\t |                      NEWTON'S SECOND LAW                          |";		
		cout<<"\n\t\t\t o===================================================================o";
		cout<<"\n\t\t\t |       Says that when a constant force acts on a massive body,     |";
		cout<<"\n\t\t\t | It causes it to accelerate, i.e.,to change its velocity, at a     |";
		cout<<"\n\t\t\t | constant rate.In the simplest case, a force applied to an object  |";
		cout<<"\n\t\t\t | at rest causes it to accelerate in the direction of the force.    |";
		cout<<"\n\t\t\t |                                                                   |";
		cout<<"\n\t\t\t o===================================================================o";	
		
		sec();}

		
 else if (law == 'c'|| law == 'C'){
 load();
 system ("cls");
 	 cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"\n\t\t\t o====================================================================o";
		cout<<"\n\t\t\t |                         NEWTON'S THIRD LAW                         |";		
		cout<<"\n\t\t\t o====================================================================o";
		cout<<"\n\t\t\t |       states that for every action (force) in nature there is an   |";
		cout<<"\n\t\t\t | equal and opposite reaction. In other words, if object A exerts a  |";
		cout<<"\n\t\t\t | force on object B, then object B also exerts an equal and opposite |";
		cout<<"\n\t\t\t | force on object ANotice that the forces are exerted on different   |";
		cout<<"\n\t\t\t |                            objects.                                |";
		cout<<"\n\t\t\t o====================================================================o";	
		cout<<endl;
		cout<<endl;
		cout<<endl;
	}
else {
	system ("cls");
	cin.clear();
	cin.ignore(32767,'\n');
	second();
}
}
void sec(){
	
	char newton;
	bool check7 = 0, check8 = 0, check9 = 0, check10 = 0, check11 = 0, check12 = 0;
	cout<<endl;
		cout<<"\n\n";
        cout<<"\t\t\t\t _________________________________________________"<<endl;
        cout<<"\t\t\t\t|   ___________________________________________   |"<<endl;
        cout<<"\t\t\t\t|  |         WHAT DO YOU WANT TO GET?          |  |"<<endl;
        cout<<"\t\t\t\t|  |                                           |  |"<<endl;
        cout<<"\t\t\t\t|  |  [A]: FORCE                               |  |"<<endl;
        cout<<"\t\t\t\t|  |  [B]: MASS                                |  |"<<endl;
        cout<<"\t\t\t\t|  |  [C]: ACCELERATION                        |  |"<<endl;
        cout<<"\t\t\t\t|  |___________________________________________|  |"<<endl;
        cout<<"\t\t\t\t|  |                                           |  |"<<endl;
        cout<<"\t\t\t\t|  |  NOTE: Please use Uppercase Characters    |  |"<<endl;
        cout<<"\t\t\t\t|  |          To avoid errors, Thankyou        |  |"<<endl;
        cout<<"\t\t\t\t|  |___________________________________________|  |"<<endl;
        cout<<"\t\t\t\t|_________________________________________________|"<<endl;
       cout<< "\n";
        cout << "\t\t\t\t\tYOUR CHOICE: ";
       cin >> newton;
       
 switch(newton){
 	 double Force,Mass,Acc;
	case 'A':
		system ("cls");
		cout<<endl;
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                FORMULA OF FORCE                    |";		
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                                                    |";
		cout<<"\n\t\t\t\t |               MASS * ACCELERATION                  |";
		cout<<"\n\t\t\t\t |                                                    |";
		cout<<"\n\t\t\t\t o====================================================o";	
		
		
			while(check7 == false){
	try {

		cout << "\n\t\t\t\t\tEnter the value of Mass: ";
		cin >> Mass;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Mass;
	}
	check7 = true;
	}
	catch(double num){
	cout << "\n\t\t\t\t\tInvalid input!\n";
	}
	}
	
	
			while(check8 == false){
	try {

		cout <<"\n\t\t\t\t\tEnter the value of Acceleration: " ;
		cin >> Acc;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Acc;
	}
	check8 = true;
	}
	catch(double num){
	cout << "\n\t\t\t\t\tInvalid input!\n";
	}
	}
	
		ans = Mass*Acc;
		cout << "\n\t\t\t\t\tThe value of force in the problem is: " << ans << endl;
		break;
	case 'B':
		system ("cls");
		cout<<endl;
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                FORMULA OF MASS                     |";		
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                     FORCE                          |";
		cout<<"\n\t\t\t\t |                  ____________                      |";
		cout<<"\n\t\t\t\t |                                                    |";
		cout<<"\n\t\t\t\t |                  ACCELERATION                      |";
		cout<<"\n\t\t\t\t o====================================================o";	
	
	
				while(check9 == false){
	try {

	cout << "\n\t\t\t\t\tEnter the value of FORCE: ";
		cin >> Force;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Force;
	}
	check9 = true;
	}
	catch(double num){
	cout << "\n\t\t\t\t\tInvalid input!\n";
	}
	}
		
		while(check10 == false){
	try {

		cout <<"\n\t\t\t\t\tEnter the value of Acceleration: " ;
		cin >> Acc;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Acc;
	}
	check10 = true;
	}
	catch(double num){
	cout << "\n\t\t\t\t\tInvalid input!\n";
	}
	}
		
		ans= Force/Acc;
		cout << "\n\t\t\t\t\tThe value of MASS in the problem is: " << ans << endl;
		break;
		
	case 'C':
		system ("cls");
		cout<<endl;
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                FORMULA OF ACCELERATION             |";		
		cout<<"\n\t\t\t\t o====================================================o";
		cout<<"\n\t\t\t\t |                     FORCE                          |";
		cout<<"\n\t\t\t\t |                  ____________                      |";
		cout<<"\n\t\t\t\t |                                                    |";
		cout<<"\n\t\t\t\t |                      MASS                          |";
		cout<<"\n\t\t\t\t o====================================================o";	
	while(check11 == false){
	try {

	cout << "\n\t\t\t\t\tEnter the value of FORCE: ";
		cin >> Force;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Force;
	}
	check11 = true;
	}
	catch(double num){
	cout << "\n\t\t\t\t\tInvalid input!\n";
	}
	}
	
	
			while(check12 == false){
	try {

		cout << "\n\t\t\t\t\tEnter the value of Mass: ";
		cin >> Mass;

	if (!cin){
	cin.clear();
	cin.ignore(32767,'\n');
	throw Mass;
	}
	check12 = true;
	}
	catch(double num){
	cout << "\n\t\t\t\t\tInvalid input!\n";
	}
	}
		ans=Force/Mass;
		cout << "\n\t\t\t\t\tThe value of ACCELERATION in the problem is: " << ans << endl;
		break;
	default:
	system ("cls");
	cin.clear();
	cin.ignore(32767,'\n');
	   sec();
}
}
void header(){
	 
	for(int i=0;i<=118;i++){
		cout<<"=";
	}
	cout<<"\t\t\t\t\t\tNEWTON'S LAW & WORK POWER AND ENERGY "<<endl;
	for(int i=0;i<=118;i++){
		cout<<"=";
	}
}
