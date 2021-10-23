#include<iostream>
using namespace std;

// base class
class vehicle_company {
    public:
        string brand = "ford";
};
// derived class
class type : public vehicle_company{		// single level inheritance
    public:
        string type = "pickup";
        void honk(){ 
            cout<<"tut tut! \n";
        }
};

class model : public type{			// multi level inheritance  
    public:
        string model_ = "2020 raptor";
		struct raptor{
			string air_compressor; 
			string engine;
			int hp; 
			int torque; // lb - ft of torque
			string shift;
			int transmission;//- speed automatic transmission;
		};
        struct raptor specification;
        model(){
        struct raptor *ptr = &specification;
        	ptr->air_compressor = "twin - turbocharged"; 
			specification.engine = " 3.5L EcoBoost V6 engine" ;
			ptr->hp = 450; 
			specification.torque = 510; // lb - ft of torque
			(*ptr).shift = "paddle - shifted";
			(*ptr).transmission =  10 ;//- speed automatic transmission
		
        }
        void details(){ 
            cout<<"brand:"<<brand<<endl;
			cout<<"type:"<<type<<endl;
			cout<<"model:"<<model_<<endl;
			
        }
};

int main (){
    model mycar;
    mycar.details();
    cout << mycar.specification.air_compressor + " " + mycar.model_;

    return 0;
}

 