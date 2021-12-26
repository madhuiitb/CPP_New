#pragma once

class Car{
private:
  float fuel;
  float speed;
  int passingers;
public:
  Car();
  ~Car();
  void FillFuel(float amount);
  void Accelerate();
  void Brake();
  void AddPassengers(int count);
  void Dashboard();
};
