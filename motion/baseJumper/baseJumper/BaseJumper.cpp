#include"BaseJumper.h"

BaseJumper::BaseJumper() : distance(0), velocity(0, 0){

}

BaseJumper::BaseJumper(float dist, Vector2 v) : distance(dist), velocity(v){

}

BaseJumper::~BaseJumper(){

}