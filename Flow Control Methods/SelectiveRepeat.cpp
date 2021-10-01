/* This code is contributed by Sourajita Dewasi. In Selective Repeat Protocol, there is a window in sender's sideand a same sized receiver buffer.
So if out of order packet arrives it's not taken in, if it's required in the receiver's buffer. 
There is independent acknowledgement. And for a lost data packet or acknowledgement slectively that data 
packet is retransmitted.*/ 

/*We are assuming the window size =4. both at sender and receiver's side. 
There might be different order of transmission but the no of retransmissions are same.
The order of transmission will depend upon the acknowledgement timer and Timeout timer*/


#include<iostream>

 int tmp1, tmp2, tmp3, tmp4, tmp5, i, windowsize = 4, noofPacket, morePacket;
 
using namespace std;
int main()
{
   
    char c;
    int receiver(int);
    int simulate(int);
    int negack(int);
    
    for(int i = 0;i < 10;i++)
        rand();
        noofPacket = rand()%10;
    cout<<"Number of frames is: "<<noofPacket;
    morePacket = noofPacket;
    
    while(morePacket >= 0)
    {
        tmp1 = simulate(windowsize);
        windowsize -= tmp1;
        tmp4 += tmp1;
        
        if(tmp4 > noofPacket)
            tmp4 = noofPacket;
            
        for(i = noofPacket - morePacket; i <= tmp4; i++)
       cout<<"\nSending Frame "<<i;
            
        tmp2 = receiver(tmp1);
        tmp3 += tmp2;
        
        if(tmp3 > noofPacket)
           tmp3 = noofPacket;
           
        tmp2 = negack(tmp1);
        tmp5 += tmp2;
        
        if(tmp5 != 0)
        {
           cout<<"\nNo acknowledgement for the frame "<<tmp5;
           cout<<"\nRetransmitting frame "<<tmp5;
        }
        morePacket -= tmp1;
        
        if(windowsize <= 0)
           windowsize = 4;
    }
    cout<<"\n Selective Repeat Protocol Ends. All packets are successfully transmitted.";
}

int receiver(int tmp1)
{
    int i;
    for(i = 0;i < 5;i++)
        rand();
        i = rand() % tmp1;
        return i;
}

int negack(int tmp1)
{
    int i;
    for(i = 0;i < 5;i++)
        rand();
        i = rand() % tmp1;
        return i;
}

int simulate(int windowsize)
{
    int tmp1, i;
    for(i = 0;i < 5;i++)
        tmp1 = rand();
    if(tmp1 == 0)
        tmp1 = simulate(windowsize);
        i = tmp1 % windowsize;
    if(i == 0)
        return windowsize;
    else
        return tmp1 % windowsize;
}