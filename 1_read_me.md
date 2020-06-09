1. Implementation of commands for file manipulation 

    In this part we have to do implement the commands through the system calls. This commands are show, count, erase, inform, append, list.    
      
      1.List    
        This command present in the console the contents of the file. For doing this first I opened the file with open() function. And I      want to see what is in the file so I used to read() function and with printf  I showed them in the console. If file does not exist      then there is a error for user with using the stderr descriptor.  
        
      2.Count  
        This command counts the number of lines within a file. And line number is defined as the number of /n characters in the content.       For doing this first I opened file if file does not exist it will give a error with  stderr descriptor. After with read() function       I took the contents and copied in a array. I called this length. I created a for loop. It will continue end of the file and if one       of the array characters are equals to /n it will  increase the line counter.  
        
      3.Erase  
          This command erase the file by given file name. To apply it I used remove() function. But first of all I checked the file           existing. For this I used open() function if it return -1 then its mean file does not exist and program should make a error.
          
      4.Inform    
          This command informs the user about file. For doing this I used sttat struct. First I opened the file and I checked                 existing.And after using the stat struct I showed file name, size, time of last access and modification, link, user ID and I-node. 
          
      5.Append     
          Thiscommand appends the contents of filename2 at the end of filename1. To apply it  first I opened the files and I checked          existing of files. And after I readed filename2 and copied the contents an array. And after I used write() function for filename1.      And this writing job will continue until there is a no reading character in filename2 and I made this with while loop. 
          
      6.List  
          This command lists all the files and directories  of  the specified path. For doing this I used dirent.h library. I took a            path with DIR and using the stat and dirent structs  I create a variants. I checked the path existing. After with chdir I changed        the current directory to the specified in path. And  I create a while loop which is continue until there is no reading name in          specified path. After with lstat() function, it will return information about the file, I learned the files names.
  
    For main program I create a switch-case which is users can choose what they want and with switch-case I led them to functions. 
