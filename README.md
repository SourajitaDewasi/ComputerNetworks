# ComputerNetworks
Algorithms Learned During Computer Network Course

## Flow Control Methods: [Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/tree/main/Flow%20Control%20Methods)
Used to observe proper flow of data from sender to receiver.
Flow control is actually set of procedures that explains sender about how much data or frames it can transfer or transmit before data overwhelms receiver.

The receiving device also contains only limited amount of speed and memory to store data. This is why receiving device should be able to tell or inform the sender about stopping the transmission or transferring of data on temporary basis before it reaches limit. 
[Reference used: GeekFor Geeks ](https://www.geeksforgeeks.org/flow-control-in-data-link-layer/)

### 1. Go Back N [Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/Flow%20Control%20Methods/GoBackN.cpp)
In Go Back N, there is a window in sender's side but only one unit receiver buffer. So if out of order packet 
arrives it's not taken in. There is cumulative acknowledgement. And for a lost data packet or acknowledgement 
the entire window is retransmitted. 

### 2. Selective Repeat Protocol [Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/Flow%20Control%20Methods/SelectiveRepeat.cpp)
In Selective Repeat Protocol, there is a window in sender's sideand a same sized receiver buffer.
So if out of order packet arrives it's not taken in, if it's required in the receiver's buffer. 
There is independent acknowledgement. And for a lost data packet or acknowledgement slectively that data 
packet is retransmitted.

### 3. Stop and Wait Protocol [Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/Flow%20Control%20Methods/StopWait.cpp)
Stop and Wait Protocol: Send one packet and wait for it's independent acknowledgement before sending
the next packet. If the data packet is lost, the acknowledgement doesn't come, it means the data packet
needs to be retransmitted by the user.Even if the acknowledgement is lost, the sender retransmits the 
data packet. Seeing an already sent data packet, the receiver sends an acknowledgement but silently 
discards the duplicate packet.

## Medium/Media Access Control Protocols (MAC): [Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/tree/main/MAC)

### 1. Slotted ALOHA [Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/MAC/SlottedALOHA.cpp)
Slotted ALOHA is Pure ALOHA but now with time slots so that vulnerable time is less. Because the previous
packet will be completed and can't overlap. Only the packet which starts at same time can conflict or be in 
collision. The maximum efficiency of ALOHA is 1/2e and slotted ALOHA is 1/e.

### 2. CSMA/CD [Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/MAC/CSMACD.cpp)
In CSMA/CD, we detect the nodes of connection to send the data packet from a station. Most of the time
this leads to collision which is resolved by the binary backoff algorithm.

### 3. Time Division Multiplexing [Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/MAC/SlottedALOHA.cpp)
Time Division Multiplexing: means equal division of time reserved for each station in
Round Robin Technique but without conducting a poll on which station has the requirement to transmit 
data packets to avoid wastage of efficiency in reservation for stations which don't have data packets
to transmit. Since there is only one packet at a time reserved in channel there can be no collision.

### 4. ALOHA [Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/MAC/ALOHA.cpp)
[Reference Link](https://www.tutorialspoint.com/aloha-protocol-in-computer-network)
In ALOHA, each node or station transmits a frame without trying to detect whether the transmission channel is idle or busy. If the channel is idle, then the frames will be successfully transmitted. If two frames attempt to occupy the channel simultaneously, collision of frames will occur and the frames will be discarded. These stations may choose to retransmit the corrupted frames repeatedly until successful transmission occurs.
