/***************************************************************************//**
  @author       windyskies
  @date         Thursday,   2 February 2023
  @brief        Sweet (C based shell tool generator)
*******************************************************************************/

#include "include/main.h"

int main(int ac, char **av){ 

  char line; struct tuple conf = {"[1/3] name>", "[2/3] ctx>", "[3/3] help>"};

  struct tuple* cptr =&conf; sweet(cptr, &line); 
  
  printf("app-name::%s\nshell-payload::%s\nusage::%s", conf.name, conf.ctx, conf.help);

  printf("here %s ::::", cptr->name);
  return 0; //sweet->calls the tiny-little-shell from 'main.h'
}