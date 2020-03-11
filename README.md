# Short East Math ( SEMATH )
A small C++ library meant to do simple math functions not included in cmath.
Simply include this in your project and make calls via the 'semath" namespace.
A special thanks to YellowAfterLife for his help with many of our trigonometry based functions.

Code Example ( main.cpp):

```cpp


#include "semath.h"
#include <iostream> //used to use std::cout to print messages

//Make sure to include both "semath.h" and "semath.cpp" in your project directory.

int main( int argc, char* args[] )
{
  std::cout << "Result of <get_direction( 0, 0, 300, 300):" << get_direction( 0, 0, 300, 300)  << ".\n";
  std::cout << "Result of <get_distance( 0, 0, 300, 300):" << get_distance( 0, 0, 300, 300)  << ".\n";

  return 0;
}

```

Donate to make SEMATH greater
=========================================
Work on open source projects like this is not possible without funding. The amount of time it takes to update the codebases, create examples, tutorials and more is quite expensive. Please consider either a one-time or monthly donation to keep this engine going and more frequently updated. 

We have a [Patron Page](https://www.patreon.com/pawbyte?ty=h) that you can help fund future open source projects and the updates to this one.

There is also a [PayPal](http://gamepencil.pawbyte.com/donate/) one time donation method as well. 

I appreciate your generousity and moving this project forward. 



Discord Chat
======
Come and  [join our discord server](https://discord.gg/aNX3Fcx)!  Bounce ideas off each other, hangout and discord open source,gaming, etc.

Forums
======
Become a member on our [forum](http://community.pawbyte.com/)!  Here, you can find help and talk directly with the developers of this project!

Developers
----------
[theweirdn8](https://github.com/theweirdn8)
![](https://avatars0.githubusercontent.com/u/3193947?v=4&s=100)
