#include<bits/stdc++.h>
#include "bird.h"
using namespace std;

void BirdoesSomthing(Bird* &bird){
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
}
int main()
{
    Bird* bird1=new sparrow();
    BirdoesSomthing(bird1);
    // Only One vlau of Eagle to change all function call 
    // than maintanence is easy to use for vendor because only can add new bird in Bird interface 
    // easy to use for client Only change Eagle to change
    Bird* bird2=new Eagle();
    BirdoesSomthing(bird2);

    // nahi Bana sakte kyuki Bird ek interface class hai 
    // or interface ka ap Object ya instantiated nahi bana sakte
    // ap kisi bhi interface and abstract class ka object and instantiated nahi bana sakte
    // Bird* b=new Bird();

// Only Bird Class se hi excess kar paoge 
    // sparrow* sp=new sparrow();
    // sp->eat();
    return 0;
}