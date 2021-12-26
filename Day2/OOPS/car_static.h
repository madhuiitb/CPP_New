#pragma once

class Car{
private:
  float fuel;
  float speed;
  int passingers;
 static int totalCount;
public:
  Car();
  Car(float amount);

  void FillFuel(float amount);
  void Accelerate();
  void Brake();
  void AddPassengers(int count);
  void Dashboard();
    ~Car();
    static void ShowCount();
};
