#include "tempSensor.hpp"

void TempSensor::setName(const std::string & name){
    this->m_name=name;
}
void TempSensor::setFrequency(int frequency){
    this->m_frequency=frequency;
}

void TempSensor::setThreshold(double threshold){
    this->m_threshold=threshold;
}

std::unique_ptr<Sensor> TempSensor::clone()const{
    return std::make_unique<TempSensor>();
}

void TempSensor::display()const{
    std::cout<<"Temperature sensor \n"
    <<"\nName :" <<m_name <<"\n"
    <<"\nFrequency :" <<m_frequency << "Hz" <<"\n"
    <<"\nThreshold :" <<m_threshold << "V" <<"\n\n";

}