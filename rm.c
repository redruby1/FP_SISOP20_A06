#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main (int argc, char *argv[])
{
      int i;
      if(argc < 2)
      {
        printf(2, "usage rm files ... or rm -r ... or rm * \n");
        exit();
      }
      
      else if(argc == 2)
      {
        if(!strcmp(argv[2], "*"))
        {
          
        }
        
        else
        {
          if(unlink(argv[2] > 0)
          {
          unlink(argv[2])
          }
        }
      }
      
      else
      {
        if(!strcmp(argv[2], "-r")
        {
        
        }
        
        else
        {
          for(i = 1; i<argc; i++)
          {
            if(unlink(argv[i]) < 0)
            {
                printf(2, "rm: %s failed to delete\n", argv[i]);
                break;
            }
         }
      }
      
      exit();
 }
              
