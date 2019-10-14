// include necessary headers
#include <iostream>
#include <string>

class Engine {
	
	private:
	
		std::string description = "generic";
		
	public:
			
		Engine(){
		
		}
		
		Engine(std::string description){
			this->description = description;	
		}
	
		~Engine() {
			
		}
	
		void print(){ std::cout << "An engine of type: " << description <<std::endl; } ;

};



class Seat {
	
	private:
	
		std::string description = "generic";
		
	public:
			
		Seat(){
		
		}
		
		Seat(std::string description){
			this->description = description;	
		}
	
		~Seat() {
			
		}
	
		void print(){ std::cout << "A seat of type: " << description <<std::endl; } ;

};

class Wheel {
	
	private:
	
		std::string description = "generic";
		
	public:
			
		Wheel(){
		
		}
		
		Wheel(std::string description){
			this->description = description;	
		}

		~Wheel(){
		
		}
		
		void print(){ std::cout << "A wheel of type: " << description <<std::endl; } ;

};


class SteeringWheel {
	
	private:
	
		std::string description = "generic";
		
	public:
			
		SteeringWheel(){
			
		}
		
		~SteeringWheel(){
			
		}


		SteeringWheel(std::string description){
			this->description = description;	
		}
	
		void print(){ std::cout << "A steeringWheel of type: " << description <<std::endl; } ;

};


class Car {
	
	private:
	
		std::string 	brand = "generic";
		std::string		model = "model";

		Engine			engine;			// engine is an object of the class Engine
		Seat			seat[4];		// seat contains four objects of the class Seat
		SteeringWheel	steeringWheel;	// steeringWheel is an object of the class SteeringWheel 
		Wheel			wheel[4];		// wheel contains four objects of the class Wheel

	
	public:
	
	//Seat carSeats[4];

	Car() {

		engine=Engine();
	 
		// create wheels and seats 
		for (int i=0;i<4;i++) {

			wheel[i]= Wheel();
			seat[i]= Seat();

		}
	
		// create a steering wheel 
		steeringWheel=SteeringWheel();

	}
	
	
	Car(std::string myBrand, std::string myModel, std::string myKindOfEngine, std::string myKindOfWheel, std::string myKindOfSeat, std::string myKindOfSteeringWheel){
		
		this->brand = myBrand;
		this->model = myModel;
		
		engine=Engine(myKindOfEngine);
		
		// create wheels and seats 
		for (int i=0;i<4;i++) {

			wheel[i]= Wheel(myKindOfWheel);
			seat[i]= Seat(myKindOfSeat);

		}
	
		// create a steering wheel 
		steeringWheel=SteeringWheel(myKindOfSteeringWheel);

	}
	
	
	~Car(){
		
	};
	
	void print(){
		
		std::cout << "This car is a " << brand <<" "<< model <<" that is composed by: " << std::endl; 

		// the print function of the car calls the print functions of its elements
		
		engine.print();
		
		
		for (int i=0;i<4;i++) {

			seat[i].print();
		}
    
		for (int i=0;i<4;i++) {

			wheel[i].print();
		}
		
		steeringWheel.print();
		
		std::cout << std::endl; 

	};
	

};

int main() {

	Car c;		
	c.print();	
	
	Car c2("Peugeot","205 Gti", "four cylinders in line", "Konig","Recaro", "Momo");		
	c2.print();	

}