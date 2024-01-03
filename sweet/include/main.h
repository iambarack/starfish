/***************************************************************************//**
  @author       windyskies
  @date         Thursday,   2 February 2023
  @file         main.h
  @brief        Sweet (C based shell tool generator)
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tuple {
    char *name;
    char *ctx;
    char *help;
};

struct tuple util(struct tuple*, char*);
struct tuple* read_line(struct tuple *data, char* line);

struct tuple sweet(struct tuple* program, char* line) {
    //char **args; char name[64], ctx[128], usage[256];

    printf(" ∧,,,∧\n(  ̳• · • ̳)\n/    づ: Hi, I'm swweeet and I will generate your cli toool.\n\n");


    printf("\nPlease type application [name], [shell_commands] and [usage_description]\n\n"); //callback shell app

    //struct tuple program = {"[1/3] name>", "[2/3] ctx>", "[3/3] help>"};
    struct tuple *ptr = program; char *lptr = line;

    struct tuple* app = read_line(ptr,lptr);

    printf("\n(˃ ᵕ ˂) swweeet is initializing your cli tool\n\n"); //callback shell app edit shellscript
    
    return *app;
    
    // while(*endptr != 0) {
    //     //printf("q: %s\n", queue);
    //     printf("%s> ", *endptr);
    //     read_line(program.name); printf("chars: %s", program.name);
        
    //     //printf("curr *ptr %s\n", *endptr);
        
    //     *endptr++;
    // }
}

struct tuple* read_line(struct tuple* data, char* line) {

    struct tuple copy = *data; //dereference
    
    char arr[3][256]; strcpy(arr[0], copy.name); strcpy(arr[1], copy.ctx); strcpy(arr[2], copy.help); // = {(data->name), *(data->ctx), *(data->help)};


    //printf("arrx::%s\n", arr[1]); // <<test>>
    //data->name = "a"; printf("name:test:%s\n", copy.name); 

    for (size_t i = 0; i < 3; i++)
    {
        char* input = arr[i];

        printf("%s ",input);
            
        //printf("sz: %d", sizeof(line)); check: SIZE OVERFLOW FOR LONG STRINGS
        if(!fgets(line, sizeof(line), stdin)) {
            fputs("error::stdio\n", stderr); exit(0); 
        }

        //BUG:: check if name has spaces
        if (strcmp(line, "\n") == 0 || strcmp(line, " \n") == 0)
        {
            printf("\n\terror > %s\b::cannot be empty \n\nprogram ",input);
            i--;
        } else {
            strcpy(arr[i], line);
        }
    }
    data->ctx = arr[1];
    data->help = arr[2];
    data->name = arr[0];

    

    // tuple data = {
    //     arr[0], arr[1], arr[2]
    // };

    //struct tuple* resx = &data;
    return data;
}