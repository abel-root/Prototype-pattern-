/**
 * Classe Humidity permet de manipuler le capteur d'humidité 
 * il implémeent la classe Sensor
 */

#ifndef HUMIDITY_H
#define HUMIDITY_H

#include "sensor.hpp"

class Humidity : public Sensor {

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



#endif //HUMIDITY_H