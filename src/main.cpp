#include "humidity.hpp"
#include "tempSensor.hpp"

int main(){

    //humidity sensor 
    std::unique_ptr<Humidity> humiditySensor= std::make_unique<Humidity>();
     humiditySensor->setName("Humidity sensor");
     humiditySensor->setFrequency(1000);
     humiditySensor->setThreshold(3);
     humiditySensor->display();

     std::cout<<"\n\n";
     // clone sensor

     auto cloneHumidity=humiditySensor->clone();
     cloneHumidity->setName("Humidity clone 1");
     cloneHumidity->setThreshold(2.3);
     cloneHumidity->setFrequency(800);
     cloneHumidity->display();
     
     std::cout<<"\n\n";

     auto cloneHumidity_2=cloneHumidity->clone();
    
     cloneHumidity_2->setName("Humidity clone 2");
     cloneHumidity_2->setThreshold(5);
     cloneHumidity_2->setFrequency(500);
     cloneHumidity_2->display();

     std::cout<<"\n\n";
     //tempareture 
     std::unique_ptr<TempSensor> temp=std::make_unique<TempSensor> ();
     temp->setFrequency(100);
     temp->setName("temperature sensor");
     temp->setThreshold(3);
     temp->display();
     
     std::cout<<"\n\n";
     //clone temp 
     auto cloneTemp=temp->clone();
     cloneTemp->setFrequency(1020);
     cloneTemp->setName("cloneTemperature sensor");
     cloneTemp->setThreshold(8);
     cloneTemp->display();


    return 0;
}