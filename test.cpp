#include<iostream>
#include<string>
#include<memory>


class Entity{
   public: 
      Entity(){
         std::cout<<"Kreiran Entity!"<<std::endl;
      }
      ~Entity(){
         std::cout<<"Izbrisan Entity"<<std::endl;
      } 
      void Print(){
         //Empty
      }
};

int main(){

   std::unique_ptr<Entity> entity = std::make_unique<Entity>();
   entity->Print;

std::cin.get();

}