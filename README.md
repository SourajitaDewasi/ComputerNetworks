# ComputerNetworks

## 1. Go Back N 
In Go Back N, there is a window in sender's side but only one unit receiver buffer. So if out of order packet 
arrives it's not taken in. There is cumulative acknowledgement. And for a lost data packet or acknowledgement 
the entire window is retransmitted. 

## 2. Selective Repeat Protocol 
In Selective Repeat Protocol, there is a window in sender's sideand a same sized receiver buffer.
So if out of order packet arrives it's not taken in, if it's required in the receiver's buffer. 
There is independent acknowledgement. And for a lost data packet or acknowledgement slectively that data 
packet is retransmitted.

## 3. Stop and Wait Protocol
Stop and Wait Protocol: Send one packet and wait for it's independent acknowledgement before sending
the next packet. If the data packet is lost, the acknowledgement doesn't come, it means the data packet
needs to be retransmitted by the user.Even if the acknowledgement is lost, the sender retransmits the 
data packet. Seeing an already sent data packet, the receiver sends an acknowledgement but silently 
discards the duplicate packet.

## 4. Slotted ALOHA
Slotted ALOHA is Pure ALOHA but now with time slots so that vulnerable time is less. Because the previous
packet will be completed and can't overlap. Only the packet which starts at same time can conflict or be in 
collision. The maximum efficiency of ALOHA is 1/2e and slotted ALOHA is 1/e.

## 5. CSMA/CD
In CSMA/CD, we detect the nodes of connection to send the data packet from a station. Most of the time
this leads to collision which is resolved by the binary backoff algorithm.

## 6. Time Division Multiplexing
Time Division Multiplexing: means equal division of time reserved for each station in
Round Robin Technique but without conducting a poll on which station has the requirement to transmit 
data packets to avoid wastage of efficiency in reservation for stations which don't have data packets
to transmit. Since there is only one packet at a time reserved in channel there can be no collision.
