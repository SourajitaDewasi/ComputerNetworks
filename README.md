# ComputerNetworks
Algorithms Learned During Computer Network Course

## Flow Control Methods: 
Observes the proper flow of data from the sender to the recipient.
Flow control is a collection of methods that informs the sender how much data or frames they can move or transmit before the recipient becomes overwhelmed.

In addition, the receiving device has a limited quantity of speed and memory for storing data. This is why, before reaching a limit, the receiving device should be able to alert or inform the sender to temporarily halt data transmission or transfer.

[Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/tree/main/Flow%20Control%20Methods)

[Reference used: GeekFor Geeks ](https://www.geeksforgeeks.org/flow-control-in-data-link-layer/)

### 1. Go Back N 
In Go Back N, there is a window in sender's side but only one unit receiver buffer. So if out of order packet 
arrives it's not taken in. There is cumulative acknowledgement. And for a lost data packet or acknowledgement 
the entire window is retransmitted. 

[Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/Flow%20Control%20Methods/GoBackN.cpp)

### 2. Selective Repeat Protocol 
In Selective Repeat Protocol, there is a window in sender's sideand a same sized receiver buffer.
So if out of order packet arrives it's not taken in, if it's required in the receiver's buffer. 
There is independent acknowledgement. And for a lost data packet or acknowledgement slectively that data 
packet is retransmitted. 

[Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/Flow%20Control%20Methods/SelectiveRepeat.cpp)

### 3. Stop and Wait Protocol 
Stop and Wait Protocol: Send one packet and wait for it's independent acknowledgement before sending
the next packet. If the data packet is lost, the acknowledgement doesn't come, it means the data packet
needs to be retransmitted by the user.Even if the acknowledgement is lost, the sender retransmits the 
data packet. Seeing an already sent data packet, the receiver sends an acknowledgement but silently 
discards the duplicate packet.

[Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/Flow%20Control%20Methods/StopWait.cpp)


## Medium/Media Access Control Protocols (MAC): 
Media access control (MAC) protocols define a way for granting access to a shared media network to numerous devices. Prior to the invention of LANs, communication between computing devices was limited to point-to-point. That is, a dedicated channel was used to connect two devices. The data link layer of the open system interconnections (OSI) standard model for data transmission includes a sublayer called medium access control (MAC). It is in charge of transmission medium flow regulation and multiplexing. It manages the transfer of data packets through shared channels that are accessible from afar. 

[Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/tree/main/MAC)

### 1. Slotted ALOHA 
Slotted ALOHA is Pure ALOHA but now with time slots so that vulnerable time is less. Because the previous
packet will be completed and can't overlap. Only the packet which starts at same time can conflict or be in 
collision. The maximum efficiency of ALOHA is 1/2e and slotted ALOHA is 1/e.

[Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/MAC/SlottedALOHA.cpp)

### 2. CSMA/CD 
In CSMA/CD, we detect the nodes of connection to send the data packet from a station. Most of the time
this leads to collision which is resolved by the binary backoff algorithm.

[Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/MAC/CSMACD.cpp)

### 3. Time Division Multiplexing
Time Division Multiplexing: means equal division of time reserved for each station in
Round Robin Technique but without conducting a poll on which station has the requirement to transmit 
data packets to avoid wastage of efficiency in reservation for stations which don't have data packets
to transmit. Since there is only one packet at a time reserved in channel there can be no collision.

[Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/MAC/TDM.cpp)

 
### 4. ALOHA 
In ALOHA, each node or station transmits a frame without trying to detect whether the transmission channel is idle or busy. If the channel is idle, then the frames will be successfully transmitted. If two frames attempt to occupy the channel simultaneously, collision of frames will occur and the frames will be discarded. These stations may choose to retransmit the corrupted frames repeatedly until successful transmission occurs.

[Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/MAC/ALOHA.cpp)

[Reference Link](https://www.tutorialspoint.com/aloha-protocol-in-computer-network)

### 5. Polling 
This is Time Division Multiplexing means equal division of time reserved for each station in
Round Robin Technique but after conducting a poll on which station has the requirement to transmit 
data packets to avoid wastage of efficiency in reservation for stations which don't have data packets
to transmit. Since there is only one packet at a time in channel there can be no collision.
[Code Link](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/MAC/Polling.cpp)


### License Used: [MIT License](https://github.com/SourajitaDewasi/ComputerNetworks/blob/main/LICENSE)
