//  Created by Neophyte Movers' Captain, Farhene Sultana, for Hunter's Codefest 2020
/**  @file   Climate.hpp
 **/

#ifndef CLIMATE_H_
#define CLIMATE_H_

#include <iostream>

class Climate
{
    public:
        //Constructor
        Climate() = default;
        
        //Paramterized Constructor
        Climate(std::string name, std::string type, bool humidity, std::string temperature, std::string air_pressure);

        /** @return name of climate 
        **/
        std::string getClimateName();          
        
        /** @return type of the climate 
        **/
        std::string getClimateType();          
        
        //sets humidity_ to true
        void setClimateHumidity(); 

        /** @return whether climate is humid or not 
        **/
        bool getClimateHumidity();            
        
        /** @return whether temperature is high or low usually 
        **/
        std::string getClimateTemperature();   
        
        /** @return whether air pressure is high or low 
        **/
        std::string getClimateAirPressure();  

        virtual void display() = 0; //will be overridden by the other classes





    protected:
        std::string name_;          // name of climate
        std::string type_;          // type of the climate
        bool humidity_;             // humid or not
        std::string temperature_;   // high or low temperatures
        std::string air_pressure_;  // high or low air pressure

} //end of Climate.hpp