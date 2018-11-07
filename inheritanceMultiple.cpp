#include <iostream>

using namespace std;


class Shape
{
   public:
      void gift(){
          cout<<"from A";
      }
};

// Base class PaintCost
class PaintCost
{
   public:
      void gift(){
          cout<<"from B";
      }
};


class Rectangle: public Shape, public PaintCost
{

};

int main( )
{
   Rectangle Rect;
   Rect.gift();

   return 0;
}
