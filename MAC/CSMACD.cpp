/* This code is contributed by Sourajita Dewasi. In CSMA/CD, we detect the nodes of connection to send the data packet from a station. Most of the time
this leads to collision which is resolved by the binary backoff algorithm.*/

/*Assume that there are 2 stations A and B at the end of the link which are trying to send their data 
packet. A has 3 data packets to be sent while B has 2 data packets to be sent.*/

#include <iostream>
#include<ctime>
#include<cstdlib>
#include<math.h>

using namespace std;


struct dataPacket{
    int Sent;
    int Collision;
    int Received;
}A[3],B[2];
int flag1=0, flag2=0; double result1,result2; int n1, n2; int i=0; int j=0; int check=0;

int CSMA(int CollisionA, int CollisionB){
    result1=pow(2,CollisionA);
    result2=pow(2,CollisionB);
    n1 = (int)result1;
    n2=(int)result2;
    flag1 = rand()%n1;
    flag2 = rand()%n2;
    
    if(flag1==0 && flag2==0){
        cout<<"\n Collision happens again";
    }
    
    else if(flag1>flag2){
        cout<<"\n Collision doesn't happen. B transmits it's current data packet. A waits";
        check=0;
        return check;
    }
    
   else{
        cout<<"\n Collision doesn't happen. A transmits it's current data packet. B waits";
        check=1;
        return check;
    }
}
int main() {
    srand(time(NULL));
	//Initializing the data packets at Station A
	for (i=0; i<3; i++){
	    A[i].Sent=0;
	    A[i].Collision=0;
	    A[i].Received=0;
	}
	
	//Initializing the data packets at Station B
	for (i=0; i<2; i++){
	    B[i].Sent=0;
	    B[i].Collision=0;
	    B[i].Received=0;
	}
	//Assuming in order release. Checking if last data packet is transmitted.
	//Omitting the case where there is no collision. It happens when A started to transmit, B don't get chance until A completes and vice-versa.
	for(i=0,j=0;A[3].Received!=1 && B[2].Received!=1;){
	   cout<<"\n Starting transmission of A and B at same time for collision";
	       A[i].Sent=1;
	       B[j].Sent=1;
	       CSMA(A[i].Collision,B[j].Collision);
	       if(check==0){
	                j++; B[j].Received=1;
	                cout<<"\n Current Packet of B is transmitted";
	        }
	       if(check==1){
	                i++;A[i].Received=1;
	                cout<<"\n Current Packet of A is transmitted";
	        }
	}cout<<"\n Now the remaining packets of the other station is sent without collision because one station has completed it's transmission of data packets. All packets are successfully transmitted in both colliding stations";
	
	return 0;
}