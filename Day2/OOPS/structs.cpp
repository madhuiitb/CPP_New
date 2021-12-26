#include<iostream>
using namespace std;

struct Point{
  int x;
  int y;
};

void DrawLine(Point start, Point end){
  cout<<"X point1 value::- "<<start.x<<endl;
  cout<<"Y point1 value::- "<<start.y<<endl;

  cout<<"\n\nX point2 value::- "<<end.x<<endl;
  cout<<"Y point2 value::- "<<end.y<<endl;
}

void DrawLine(int x, int y, int a, int b){

}

int main(){
  Point p1={1,2};
  Point p2={20,30};
  DrawLine(p1,p2);
}
