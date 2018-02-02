#include "PID.h"


/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    this-> Kp = Kp;
    this-> Ki = Ki;
    this-> Kd = Kd;
}

double PID::CalculateSteering(double cte) {
    // initialize variables
    double steering, D_cte;
    cte_int = cte_int + cte;
    D_cte = cte - cte_old;
    cte_old = cte;
    // Calculate steering angle
    steering = Kp * cte + Ki * cte_int + Kd * D_cte;
    // return the steering angle
    return steering;
};


