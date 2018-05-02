using namespace std;
#include <iostream>
#include <string>
#include <stdio.h>

class DayOfYear{

	int rawDay;
	string month;
	int day;	

	public:
		DayOfYear(int _rawDay){ 		//original constructor
			rawDay = _rawDay;
		}

		DayOfYear(string _month, int _day){	//modification constructor
			if(_day > 31){
				cout << "Error: amount of days cannot be more than 31";
			}else{
				month = _month;
				day = _day;
			}
		}

		void print(){

			int dayArray[12] = {31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
			int monthMarker;

			for(int i = 0; i < 12; i++){
				if(rawDay <= dayArray[i]){
					monthMarker= i;
					break;
				}
			}

			switch (monthMarker){
			case 0:
				month = "January";
				day = 31 - dayArray[i]-rawDay;
				break;
			case 1:
				month = "February";
				day = 28 - dayArray[i]-rawDay;
				break;
			case 2:
				month = "March";
				day = 31 - dayArray[i]-rawDay;
				break;
			case 3:
				month = "April";
				day = 30 - dayArray[i]-rawDay;
				break;
			case 4:
				month = "May";
				day = 31 - dayArray[i]-rawDay;
				break;
			case 5:
				month = "June";
				day = 30 - dayArray[i]-rawDay;
				break;
			case 6:
				month = "July";
				day = 31 - dayArray[i]-rawDay;
				break;
			case 7:
				month = "August";
				day = 31 - dayArray[i]-rawDay;
				break;
			case 8:
				month = "September";
				day = 30 - dayArray[i]-rawDay;
				break;
			case 9:
				month = "October";
				day = 31 - dayArray[i]-rawDay;
				break;
			case 10:
				month = "November";
				day = 30 - dayArray[i]-rawDay;
				break;
			case 11:
				month = "December";
				day = 31 - dayArray[i]-rawDay;
				break;
			}
			cout << month << " " << day;
		}
};
