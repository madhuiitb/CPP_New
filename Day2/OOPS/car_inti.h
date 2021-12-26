#pragma once

class Car{
private:
  float fuel{ 0 };
  float speed{ 0 };
  int passingers{ 1 };
public:
  Car();
  Car(float amount);

  void FillFuel(float amount);
  void Accelerate();
  void Brake();
  void AddPassengers(int count);
  void Dashboard();
    ~Car();
};
