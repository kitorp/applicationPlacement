#include "generateSamples.h"


void setLocation(){
    int gridSize;
    pair<int, int> userLocation[noOfUser];
    pair<int,int> serverLocation[noOfServer];

    for(int i = 0 ; i < noOfUser ; i++){
        int x = rand()% gridSize;
        int y = rand()% gridSize;
        userLocation[i] = make_pair(x,y);
    }

    for(int i = 0 ; i < noOfServer ; i++){
        int x = rand()% gridSize;
        int y = rand()% gridSize;
        serverLocation[i] = make_pair(x,y);
    }


}
void setNodeValue(){

int requestSize[noOfUser];
int energyBudget[noOfServer];

    for(int i=0 ; i<noOfServer ; i++){
        energyBudget[i] = 100 + (rand() % ( 200 - 100 + 1 ) );
    }

    for(int i=0 ; i<noOfUser ; i++){
        requestSize[i] = 50 + (rand() % ( 100 - 50 + 1 ) );
     }

}



void generateSample(){
     setLocation();
     setNodeValue();
}
