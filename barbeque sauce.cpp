#include <iostream>
#include <string>
using namespace std;

class Barbeque{
	string my_Brand;
	string my_Model;
	bool hasCoalsVar;
	bool isLitVar;
	bool isCookingVar;
	public:
		Barbeque(string brand, string model){
			this->my_Brand = brand;
			this->my_Model = model; 
		}
		
		void loadCoals(){
			cout << "Loading " << my_Brand << " " << my_Model <<  " with coals!" << endl;
		}
		void light(){
			if (hasCoalsVar) {
				cout << "Lightning the grill!" << endl;
			} else {
				cout << "You can't light this " << my_Brand << " " << my_Model <<  " until you load it with coals!" << endl;
			}
		}
		void cook(){
			if (isLitVar) {
			cout << "Cooking Food!" << endl;
			} else {
				cout << "You can't cook on this " << my_Brand << " " << my_Model <<  " until it has been lit!" << endl;
			}
		}
		void reset(){
			hasCoalsVar=false;
			isLitVar=false;
			isCookingVar=false;
		};
		
		bool hasCoals(){
			return hasCoalsVar;
		};
		bool isLit(){
			return isLitVar;
		};
		bool isCooking(){
			return isCookingVar;
		};
};

int main(){
	Barbeque bbq("Burman", "Grilled Caesar Salad");
	bbq.loadCoals();
	if (bbq.hasCoals()){
		bbq.light();
	} 
	
	if (bbq.isLit()) {
		bbq.cook();
	} else {
		cout << "bbq should be lit so this is an error in your logic !";
	}
	
	bbq.reset();
	cout << "Let's make some errors..." << endl;
	bbq.light();
	bbq.cook();
	bbq.loadCoals();
	bbq.cook();
}
