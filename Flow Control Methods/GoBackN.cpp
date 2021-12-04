/*This code is contributed by Sourajita Dewasi. */

/*In Go Back N, there is a window in sender's side but only one unit receiver buffer. So if out of order packet 
arrives it's not taken in. There is cumulative acknowledgement. And for a lost data packet or acknowledgement 
the entire window is retransmitted.*/

#include <iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
 int noofframes=6,N=4;
 int count=0;
 srand(time(NULL));
 int i=1;
 while(i<=noofframes)
 {
     int x=0;
     for(int j=i;j<i+N && j<=noofframes;j++)
     {
         cout<<"Sending the Frame "<<j<<endl;
         count++;
     }
     for(int j=i;j<i+N && j<=noofframes;j++)
     {
         int flag = rand()%2;
         if(!flag)
             {
                 cout<<"\n Acknowledgment for Window Received whose first packet is "<<j;
                 x++;
             }
         else
             {   cout<<"\n Data Packet in Cumulative Acknowledgement Not Received whose first packet is "<<j;
                 cout<<"\n Retransmitting the Same Window \n";
                 break;
             }
     }
     cout<<endl;
     i+=x;
 }
 cout<<"\n Total number of transmissions : "<<count;
 return 0;
}
