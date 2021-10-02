/* This code is contributed by Sourajita Dewasi. Time Division Multiplexing: means equal division of time reserved for each station in
Round Robin Technique but without conducting a poll on which station has the requirement to transmit 
data packets to avoid wastage of efficiency in reservation for stations which don't have data packets
to transmit. Since there is only one packet at a time reserved in channel there can be no collision. */

#include <iostream>
using namespace std;
int Sum=0;
int i=0;
int MaxPacket=2;
//This is the maximum number of packets that can be transmitted by a Station in the given time slot.
//We are also assuming equal packet size of data or considering the max packet nos transmission as on the largest packet size.
int main() {
	int Stations[5]={0,1,2,3,4}; 
	/*Let in Station 0 no of packets to be transfered are 6.
	in Station 1 no of packets to be transfered are 0.
	in Station 2 no of packets to be transfeered are 2.
	in Station 3 no of packets to be transfeered are 1.
	in Station 4 no of packets to be transfeered are 0. */
	int Check[5]={6,0,2,1,0};
	
	//run to check if there is any data packet to transmit in any station initially
		for( i=0; i<5; i++){
        Sum=Check[i]+Sum;
    }
    
	//running the TDM function
	while(Sum>1){
	for( i=0; i<5; i++){
	    cout<<"\n\n Time Slot for Station "<<i;
	     cout<<" in form of Transmission Time";
	      if(Check[i] == 0){
	            cout<<"\n Reserved Time Wasted";
	           }
	      else if(Check[i]<MaxPacket){
	          
	           cout<<"\n Time alloted for transmission of "<<Check[i]<<"th packet from station "<<i;
	           cout<<"\n "<<Check[i]<<" packet Transmitted";
	           Check[i]--; Sum--;
	       }
	        else{
	           cout<<"\nTime alloted for transmission of "<<Check[i]<<"th packet from station "<<i;
	           cout<<"\n "<<Check[i]<<"th packet Transmitted";
	           cout<<"\n Time alloted for transmission of "<<Check[i]-1<<"th packet from station "<<i;
	           cout<<"\n "<<Check[i]-1<<"th packet Transmitted";
	           Check[i]= Check[i]-MaxPacket;Sum=Sum-MaxPacket;
	       }
	    }
	}
	return 0;	
    
}



