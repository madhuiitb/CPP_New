#pragma once
class Car{ // Class Name
private: // Access Specifier
    float fuel{0}; // Attributes
    float speed{0}; //Uniform Initi
    int passengers{1};
    static int totalCount;
public:
    void FillFuel(float amount); // Methods
    void Accelerate();
    void AppliedBrakes();
    void AddPassengers(int passengers);
    void showDetails()const;

    static void ShowCount();
    /// It thows an garbage value  for the passengers,
    // need to something on this.
    // Now Constructors arrived
};
