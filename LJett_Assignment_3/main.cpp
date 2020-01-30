#include "pet.h"

int main(int argc, char **argv){
   Pet myFirstPet;
   Pet mySecondPet;

   myFirstPet.SetName("Piper");
   myFirstPet.SetAge(3);
   myFirstPet.SetType("Dog");
   myFirstPet.SetWeight(14.00);

   mySecondPet.SetName("Lucy");
   mySecondPet.SetAge(11);
   mySecondPet.SetType("Cat");
   mySecondPet.SetWeight(11.00);

   myFirstPet.Print();
   mySecondPet.Print();

   return 0;
}
