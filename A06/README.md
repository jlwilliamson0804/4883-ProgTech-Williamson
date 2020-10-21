## UVA Online - 11096 Nails

### Goal: 
##### Given number of cases, initial length of rubber band, and number of nails find final length of rubber band to 5 decimal places

### Thought Process:

###### Read in the number of nails, and begin the loop. Store all the points, and sort by x-coordinate left to right, sorting left to right should remove any criss crossing. Any points with the same x-coordinates then need to be sorted by y-coordinates high to low, this should give the shape without any crossing lines and a good perimeter. From there, calculate the distance from the start to end from each consecutive point in the sorted structure and add to a running total. Check the total with the beginning length of the rubber band, and if greater Print out the final length with 5 decimal places, else print the original length with 5 decimal places.
