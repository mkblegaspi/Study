// Local Variables and Function Arguments
// Local variables
// Local variables exist inside a scope
//  - A scope is defined by a pair of braces {}
// A local vaiable comes into existence where it is defined
//  - Memory is automatically allocated for it on the program's stack
//  - It will then be initialized
//  - If we do not specify an initial value, it is "default initialized"
// It is destroyed at the end of its scope
/*
  {               // Start of a scope
    int i;        // Allocate memory for i, defaujlt initialize it
    ...           // Code that uses i
  }               // End od scope - release memory used by i isn't longer "in scope"
*/