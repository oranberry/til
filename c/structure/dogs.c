struct dog
{
    char name[31];
    char owner_name[51];
    char breed[31];
    char gender[11];
    int age;
    char start_date[51];
    char end_date[51];
};

void add(struct dog list[], int *num_dogs);
void delete (struct dog list[], int *num_dogs);
void calculate_cost(struct dog list[], int num_dogs);
void search(struct dog list[], int num_dogs);
void print(struct dog list[], int num_dogs);

// maintains an array of dog structure and the total number of dogs
// takes input as operation code, then calls a function to perform the requested action:
// add a new dog (calling the add function)
// delete a dog from the record (calling the delete function)
// calculate cost for a dog's stay (calling calculate_cost function)
// search for a dog (calling search function)
// print record of all dogs (calling print function)
// prints an error message if the user enters an illegal code
// repeats until the user enters the command 'q' (for exiting the program)
int main()
{

    return 0;
}

void add(struct dog list[], int *num_dogs)
{
    // prompts the user for information about a new dog and then add it into the array.
    // prints an error message and returns prematurely if the dog already exits
    // by checking dog's name and owner's name or the array is full.
}
void delete (struct dog list[], int *num_dogs)
{
    // prompts the user for information about  an existing dog and then delete it from the array.
    // Prints an error message and returns prematurely
    // if the dog doesn’t already exists by checking dog’s name and owner’s name.
}
void calculate_cost(struct dog list[], int num_dogs)
{
    // prompt the user to enter a dog’s name and its owner’s name.
    // Prints an error message if the dog can’t be found in the array;
    // otherwise, prompts the user to enter the rate and calculate the total number of days stayed and the cost.
}
void search(struct dog list[], int num_dogs)
{
    // prompt the user to enter a dog’s name and its owner’s name.
    // Search the dog in the array by name and its owner’s name.
    // If the dog is found, prints the attendance ;
    // if not, prints a message.
}
void print(struct dog list[], int num_dogs)
{
    // prints a listing of all dogs in the array,
    // in the order in which they are entered into the array.
}