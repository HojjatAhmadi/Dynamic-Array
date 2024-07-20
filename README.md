#dynamic array
in this commit I try to create some method for static array that you can **insert and delete** value from array and after use each method , size of array was *change*
heare we have a tabel to describe method:
| name | Description | example |
| :---        |    :----   |    :-----------    |
| constuctor | we have two constructor , *first* by use array in argument , *seceond* by use pointer array in argument , and also we have a length of array in first arg in each constructor | `dy_array<int> *array = new dy_array<int>(5 , {1,2,3,4,5});` |
| insert | You can easily use it just by using the argument in the method, after using this method the added value will be saved in the back of the array. | `array->insert(6);` |
| print | you can print array by using *print* method | `array->print();` |
| erase | you can delete target value by using this method | `array->erase(2);` |

###I try to update this class and add important method's :)
