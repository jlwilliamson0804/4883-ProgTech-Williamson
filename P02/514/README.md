## UVA Online Judge 514-Rails

##### Thought process for solution
###### given the input of trains, the wanted order, and a holding station can we create the wanted train?
###### First thought is to build the incoming train, and the theoretical wanted train. 
###### Then, loop through incoming train. If it matches add it to a built train. If it doesn't match, check to see if the holding station matches and if so then take from holding and add to the built train until it doesn't match. If neither matches, then put train into holding station. 
###### Finally compare the built train to the theoretical wanted train, if match then "Yes", if not match then "No".
