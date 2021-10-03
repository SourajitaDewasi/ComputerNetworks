#include <iostream>
#include<ctime>
#include<cstdlib>
#include<math.h>

using namespace std;

//Let each station transmission time is 1 units.
int flag1=0, flag2=0; double result1,result2; int n1, n2; int i=0; int j=0; int check=0;
 struct Process{
    int StartingTime;
    int Collision;
    int Received;
 }P[4];

int AlohaC(int CollisionA, int CollisionB){
    result1=pow(2,CollisionA);
    result2=pow(2,CollisionB);
    n1 = (int)result1;
    n2=(int)result2;
    flag1 = rand()%n1;
    flag2 = rand()% n2;
    
    if(flag1==0 && flag2==0){
        cout<<"\n Collision happens again";
    }
    
    if(flag1>flag2){
        cout<<"\n Collision doesn't happen. Second station transmits it's current data packet. First station waits";
        check=0;
        return check;
    }
    
   else{
        cout<<"\n Collision doesn't happen. First Station transmits it's current data packet. Second station waits";
        check=1;
        return check;
    }
}

int main() {
    srand(time(NULL));
    //Assuming Station 1 starts at 0, Station 2 at 1, Station 3 at 1, Station 4 at 2
	P[0].StartingTime=0;
	P[1].StartingTime=1;
	P[2].StartingTime=1;
	P[3].StartingTime=2;
	for(i=0; i<5; i++){
	    P[i].Collision=0;
	    P[i].Received=0;
	}
	for( i=0; i<5; i++){
	    for( j=i+1;j<5;j++){
	        if(P[i].StartingTime==P[j].StartingTime){
	            cout<<"\n Collision happened. Negative Acknowledgement. Back up algorithm works";
	            AlohaC(P[i].Collision, P[j].Collision);
	             if(check==0){
	               P[j].StartingTime++; P[j].Received=1;
	                cout<<"\n Current Packet of Second Station is transmitted";
	        }
	       if(check==1){
	                P[i].StartingTime++;P[i].Received=1;
	                cout<<"\n Current Packet of First Station is transmitted";
	        }
	        }
	        else{
	             cout<<"\n Current Packet"<<i<<" can be Transmitted.";
	             P[i].Received=1;
	        }
	    }
	}
	
	for(i=0;i<5;i++){
	    if(P[i].Received==1){
	        cout<<"\n Data Packet of Station "<<i+1<<" is acknowledged";
	    }
	    
	}
	return 0;
}
