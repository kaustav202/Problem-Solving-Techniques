Often, In order to do find a desired info we need to compute the sub problems first. This is the key concept in using recursion.. no need to know all of it at once, compute the smaller problem first and use it with current value 
to solve the entire problem.

Or in other words didvide the problem into unit cases (who's solution we know) and keep asking the next element for it's result until the base case is reached.

Note: The direction of recursion ( start to end or end to start ) and the order of operation ( before or after the return statement ) can be toggled to alter the computation direction. 

Branching -> Often for a given computation, we may need to compute more than one sub problem and it results in branching of or a tree like recursive function call.
This may lead to redundancy if the same sub problem is computed again and again. It is overcome by storing it to make sure that the already computed result is not computed again ( Memoization ).

