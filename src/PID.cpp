#include "PID.h"

using namespace std;


PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
  this->Kp = Kp;
  this->Ki = Ki;
  this->Kd = Kd;

  p_error = 0;
  i_error = 0;
  d_error = 0;
}

void PID::UpdateError(double cte) {
  d_error = cte - p_error;  // Use p_error as previous CTE
  p_error = cte;
  i_error += cte;
}

double PID::TotalError() {
  return Kp * p_error + Ki * i_error + Kd * d_error;
}
