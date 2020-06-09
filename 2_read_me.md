 2. Implementation of a Command Line Interpreter     
 This interpreter is an application which is read a string from the console and then execute this string as a command. 
 The program display % symbol for a insication that is ready to read a new command. For doing this interpreter 
 I created 3 function these are read_command, parse_line, and execute.    
 
 In main program, I took a string from user , it will be my command. After I send this string to read_command function. 
 In this function getline() makes extracts characters from the stream as unformatted input and stores them into s as a c-string, 
 until either the extracted character is the delimiting character, or n characters have been written to s 
 (including the terminating null character). And than return coomand. If command equals to “ends” program will stop. 
 
 In the next step I sent this command to parse_line. And I chopped this string to tokens because I need arguments for execute.
 And I sent this tokens as a argument to execute function.   
 
 I create a process with fork() and with waitpid() I checked the execution of the calling process until a child specified by pid argument has changed state.
 The value of pid can be:      
 
 -  < 0 thats meaning wait for any child process 
 -   0  means wait for child process whose process group ID is equal to that of the calling process. 
 
 And it will countinue in a while loop until there is a no child process.
 And all of this code if there is a error program will  give a error with  stderr descriptor.
 
