#include<bits/stdc++.h>
#include <chrono>
#include<windows.h>
using namespace std;
 
void init_code(){
    #ifndef ONLINE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
 
int main() {
   init_code();
  // Get the current time point
    auto now1 = std::chrono::system_clock::now();

    // Get the duration since the epoch
    auto duration1 = now1.time_since_epoch();

    // Convert the duration to milliseconds
    auto millis1 = std::chrono::duration_cast<std::chrono::milliseconds>(duration1).count();
    millis1*=0.001;
    // Print the current time in milliseconds since the epoch
    std::cout << "Current time in seconds since the epoch: " << millis1 << std::endl;
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
s.push(4);
s.push(5);
 s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
s.push(5);
 s.push(1);
    s.push(2);
    s.push(3);
Sleep(7000);
// Get the current time point
    auto now2 = std::chrono::system_clock::now();

    // Get the duration since the epoch
    auto duration2 = now2.time_since_epoch();

    // Convert the duration to milliseconds
    auto millis2 = std::chrono::duration_cast<std::chrono::milliseconds>(duration2).count();
    millis2*=0.001;
    // Print the current time in milliseconds since the epoch
    std::cout << "Current time in seconds since the epoch: " << millis2 << std::endl;
if(s.size()>5 && millis2-millis1<5){
    cout<<"rate limit exceed. wait 5 seconds before sending next request";
    while(s.size()>5)
      s.pop();
  }
 else if(s.size()>5 && millis2-millis1>=5){
    if(s.size()>=10)
      cout<<"rate limit exceed. wait 5 seconds before sending next request";
     while(s.size()>5)
      s.pop();
  }
   return 0;
}
