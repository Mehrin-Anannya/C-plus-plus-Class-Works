class Car{

    private: 
      int chasisNumber;
    public:
     int dateOfBuilt;
     int capacity;
     int speed;

     int speedUp(int increment){
           return this->speed + increment;
     }
};