/**
 * Classe Sensor permet de manipuler des capteurs. c'est une interface qui sera implémentée par 
 * tous les capteurs. 
 * 
 *  utilisateur des smart pointer pour des allocation dynamique 
 */

#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>
#include <string>
#include <memory>

class Sensor{
    public:
        virtual ~ Sensor()=default;
        virtual void setName(const std::string & name)=0;
        virtual void setFrequency(int frequency)=0;
        virtual void setThreshold(double threshold)=0;
        virtual std::unique_ptr<Sensor> clone()const =0;
        virtual void display()const=0 ;

};





#endif //SENSOR_H