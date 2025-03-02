/**
 * Classe TempSensor permet de manipuler le capteur de température  
 * il implémeent la classe Sensor
 */

#ifndef TEMPSENSOR_H
#define TEMPSENSOR_H

#include "sensor.hpp"

class TempSensor : public Sensor{
    private :
        std::string m_name;
        int m_frequency;
        double m_threshold;

    public:
        void setName(const std::string & name) override;
        void setFrequency(int frequency) override;
        void setThreshold(double threshold) override;
        std::unique_ptr<Sensor> clone() const override;
        void display() const override;
};




#endif //TEMPSENSOR_H