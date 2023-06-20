#ifndef electronicsOP_H
#define electronicsOP_H

class electronicsOP {
    private:
    float battery_voltage;
    bool left_turn_signal;
    bool right_turn_signal;
    bool headlights;
    bool highbeams;
    bool hazards;
    bool horn;
    bool brake_lights;
    bool reverse_lights;
    int wipers;
    int gear;
    bool ignition;


   public: //need cleanup, probably i dont need all getters/setters some will be replaced with adc / timers functions

    electronicsOP();
    ~electronicsOP();
   

    void setBatteryVoltage(float voltage);
    float getBatteryVoltage();

    void setLeftTurnSignal(bool state);
    bool getLeftTurnSignal();

    void setRightTurnSignal(bool state);
    bool getRightTurnSignal();

    void setHeadlights(bool state);
    bool getHeadlights();

    void setHighbeams(bool state);
    bool getHighbeams();

    void setHazards(bool state);
    bool getHazards();

    void setHorn(bool state);
    bool getHorn(bool state);








    

};


#endif // electronicsOP_H