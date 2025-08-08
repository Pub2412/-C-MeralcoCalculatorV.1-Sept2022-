#include <iostream>
using namespace std;

//Constants
const double ElectricalRate = 11.7882; //This is based on the Meralco September 2024 Kwh to Peso rate 

int main ()
{
      //Declare Variables
    int previous;
    int today;
    float total;
    float Rate;
    
    cout << "-------------- ESTIMATED MERALCO BILL CALCULATOR FOR SEPTEMBER 2024 -------------- \n";
    cout << endl; 
     //Statements
    cout << "\n Enter your CURRENT Meralco kWh Reading -> ";
    cin >> today;
    cout << "\n Enter you Meralco kWh Reading of the PREVIOUS Month -> ";
    cin >> previous;
    cout << endl; 
    
    //Computation for total consumption
    total = today - previous;
    
    cout << "Your total consumption this Month -> " << total << "kWh \n" << endl;
    
    //Computation for Estimated Bill
    Rate = total * ElectricalRate;
    
    if (Rate <= 0) {
    cout << "\n Your Estimated Bill this Month -> 0 PHP \n";
	cout << "\n Note: This Computation is only an ESTIMATION, Please check your official Bill for additional charges" << endl;
    } else {
    cout << "\n Your Estimated Bill this Month -> " << Rate << " PHP \n";
    cout << "\n Note: This Computation is only an 'ESTIMATION', Please check your official Bill for additional charges" << endl;
  } 
   
return 0;
}
