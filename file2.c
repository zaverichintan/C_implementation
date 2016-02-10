//Program author - Chintan Zaveri
//Program details -To read and print file by line. use malloc.
//************************************************************


int main ()
{
    // the file we want to read from
    char filename[] = "test.txt";

    // open the file for reading
    FILE *file = fopen(filename, "r");

    // make sure the file opened properly
    if(NULL == file)
    {
        fprintf(stderr, "Cannot open file: %s\n", filename);
        return 1;
    }

    // set up the buffer to read the line into buffer.
    size_t buffer_size = 250;
    char *buffer = malloc(buffer_size * sizeof(char));

    // read each line and print it to the screen
    int line_number = 0;
    while(-1 != getline(&buffer, &buffer_size, file))
    {
        printf("%d: %s", ++line_number, buffer);
    }
    fflush(stdout);

    // make sure we close the file and clean up the buffer when we're
    // finished
    fclose(file);
    free(buffer);

    return 0;
}


