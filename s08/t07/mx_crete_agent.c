#include "create_new_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength) 
{
    if(name == NULL) return NULL;

    t_agent *newagent = malloc(16);
    newagent->name = mx_strdup(name);

    newagent->power = power;

    newagent->strength = strength;
    
    return newagent;
}

