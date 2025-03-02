#include "humidity.hpp"

void Humidity::setName(const std::string & name){
    this->m_name=name;
}
void Humidity::setFrequency(int frequency){
    this->m_frequency=frequency;
}

void Humidity::setThreshold(double threshold){
    this->m_threshold=threshold;
}

std::unique_ptr<Sensor> Humidity::clone()const{
    return std::make_unique<Humidity>();
}

void Humidity::display()const{
    std::cout<<"Temperature sensor \n"
    <<"\nName :" <<m_name  <<"\n"
    <<"\nFrequency :" <<m_frequency << "Hz" <<"\n"
    <<"\nThreshold :" <<m_threshold << "V" <<"\n\n";

}