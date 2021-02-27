#include <bits/stdc++.h>
#include "shortestPath.h"
#include "generateSamples.h"

using namespace std;
int sampleSize;
int noOfScenario;
int noOfUser;
int noOfServer;
int timeSlots;

int main()
{
    generateSamples();

    for(int i = 0 ; i < sampleSize ; i++){
        for(int j = 0 ; j < noOfUser ; j++){
            for(int k = 0 ; k < noOfScenario ; k++){
                createGraph(); //for user j under scenario k
                findShortestPath() //from server Stj to dummy vertex D for user j under scenario k
                //store cost of shortest path -> w^k,l/ij;
            }

            for(int k = 0 ; k < noOFServer ; k++){
                //w^k/ij = 1/L
            }
        }
        gMap();
        //record optimal solution
    }

    int noOfScenarioLarge;
    generateSampleScenario(noOfScenarioLarge);

    for(int i = 0 ; i < sample ; i++){
        for(int j = 0 ; j < noOfUser ; j++){
            for(int k = 0 ; k < noOfScenarioLarge ; k++){
                createGraph(); //for user j under scenario k
                findShortestPath() //from server Stj to dummy vertex D for user j under scenario k
                //store cost of shortest path -> w^k,l/ij;
            }

            for(int k = 0 ; k < noOFServer ; k++){
                //w^k/ij = 1/L
            }

            gMap();
        }
    }
}
