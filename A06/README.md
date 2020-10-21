## UVA Online - 11096 Nails

### Goal: 
##### Given number of cases, initial length of rubber band, and number of nails find final length of rubber band to 5 decimal places

### Thought Process:

###### Read in the number of nails, and begin the loop. Store all the points, and sort by x-coordinate left to right. Any points with the same x-coordinates then need to be sorted by y-coordinates high to low. From there, calculate the distance from the start to end from each consecutive point in the sorted structure and add to a running total. Print out the final length with 5 decimal places.
