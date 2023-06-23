#include <stdio.h>
int main(void) {
 int choice=0;
  char a[20],b[100],command[200],c[20];
 int d=1;

printf("=========================================================================\n");
 printf("-----------------------File Management Project---------------------------\n");
printf("=========================================================================\n");
 printf("Welcome, The Main Menu is given below:\n");//done
 printf("1- List all Files and Directories\n");//done
 printf("2- Create New Files\n");//done
 printf("3- Delete Existing Files\n");//done
 printf("4- Rename Files\n");//done
 printf("5- Edit File Content\n");//done
 printf("6- Search Files\n");//done
 printf("7- Details of Particular File\n");//done
 printf("8- View Content of File\n");//done
 printf("9- Sort File Content\n");//done
 printf("10- List only Directories(Folders)\n");//done
 printf("11- List Files of Particular Extension\n");//done
 printf("12- Compress File OR Directory\n");//done
 printf("13- UN-Compress FileOR Directory\n");//done
 printf("14- Sort Files in a Directory\n");//done
 printf("15- Restart Computer\n");//donecd
 printf("16- Shutdown Computer\n");//done
 printf("17- Change Directory\n");//done
 printf("18- Execute a C file\n");//done
 printf("19- Execute a SH file\n");//done
 printf("20- Show Current working Directory\n");//done
 printf("21- Create New Directory\n");//done
 printf("22- Remove Directory\n");//done
 printf("23- Zip File OR Directory\n");//done
 printf("24- UN-Zip FileOR Directory\n");//done
 printf("0- Exit\n");
  while(d==1){
 printf("\nWhat action you want to Perform?\nEnter 1-19 OR 0 for --Exit\n");
  scanf("%d", &choice);
  
  if(choice==0){
  return 0;	//Exit
  }
  
  else  if(choice==1){
  printf("Listing Files and Directories");	//Listing Files and Directories"
     system("ls");	
  }
  
  else  if(choice==2){			//Create New Files
   system("echo \"Create New Files here..\"");
   system("echo \"Which type of file you want to create !\"");
   system("echo \"1- .c\"");
   system("echo \"2- .sh\"");
   system("echo \"3- .txt\"");
   system("echo \"Enter your choice from 1-3\"");
   scanf("%d", &choice);
   printf("Enter File Name: ");
   scanf("%s",a);
   
   if(choice==1){
   snprintf(command, sizeof(command), "touch %s.c",a);
   }
   else if(choice==2){
  snprintf(command, sizeof(command), "touch %s.sh",a);
   }
   else if(choice==3){
   snprintf(command, sizeof(command), "touch %s.txt",a);
   }
   system(command);
   
   //scanf("%s",a);
   //printf("Enter File Content: ");
   //fgets(b, sizeof(b), stdin);
   //snprintf(command, sizeof(command), "touch %s.txt\necho \"%s\" > %s.txt", a,b,a);
   //system(command);
   //system("touch %s.txt\necho \"%s\ > filename.txt",a,b);// printf("Array: %s\n", a);
   //system("touch %s.txt\necho \"Hello, World!\" > filename.txt",a);
  }
  
  
  else  if(choice==3){		//Delete file 
     system("ls");
     printf("Choose file to delete:");
      scanf("%s",a);
      snprintf(command, sizeof(command), "rm %s",a);
      printf("%s",command);
        system(command);		
  }
  
  
   else  if(choice==4){		//Rename file 
     system("ls");
     printf("Enter file name which you want to remane ");
    scanf("%s",a);
    printf("Enter the new name: ");
    scanf("%s",c);
   snprintf(command, sizeof(command), "mv %s %s", a, c);
   printf("%s",command);
   system(command);
  }
  
  
  else  if(choice==5){		 //Edit File Content
   system("ls");
    printf("Enter file name in which you want to add content(.c and .txt only))");
    scanf("%s",a);
    printf("Enter content to add");
    scanf("%s",b);
   snprintf(command, sizeof(command), "echo \"%s\" >> %s",b,a);
   system(command);	
  }
  
  else  if(choice==6){		 //E- Search Files
  printf("Enter File Name: ");
   scanf("%s",a);
  sprintf(command, "find / -name \"%s\" 2>/dev/null", a);
    system(command);	
  }
  
  else  if(choice==7){	//Details of Particular File
     
 printf("1-Dispaly details of all files: \n2-Display details of specific files: ");
 printf("\n3--File Type of specific files: \n4--File Size of specific files: ");
 scanf("%d", &choice);

    if(choice==1){		//File Information and File Type and  File Permissions 
    system("ls -l");	//File Modification Time and File Ownership 
    }
    
    else if(choice==2){
    system("ls");	//details stats of a particular file
    printf("Enter file: ");
    scanf("%s",a);
     sprintf(command, "stat %s", a);
     system(command);
    }
    
    else if(choice==3){
    system("ls");	//File Type details
    printf("Enter file name and extension: ");
    scanf("%s",a);
    sprintf(command, "file %s", a);
     system(command);
    }
    else if(choice==4){	
    system("ls");
    printf("Enter file name and extension: ");
    scanf("%s",a);
    sprintf(command, "ls -lh %s", a);
     system(command);		
    }
    
    else{
    printf("\nwrong entry");
    }
     }	
  
   else  if(choice==8){			//View Content of File
      system("ls");
      printf("Choose file to show content:");
      scanf("%s",a);
      sprintf(command, "cat %s", a);
     system(command);		
  }
  
   else  if(choice==9){		// Sort File Content
       system("ls");
      printf("Choose file to sort content(Ascending by Alphabets): ");
      scanf("%s",a);
      sprintf(command, "sort %s", a);
     system(command);		
  }
  
   else  if(choice==10){	//List only Directories(Folders)
     system("ls -dF */");		
  }
  
  
  else  if(choice==11){	//List Files of Particular Extension
      printf("Enter extensio to find files:(dont add .--> !.c only c) ");
      scanf("%s",a);
       sprintf(command, "ls -F *.%s", a);
       system(command);		
  }
   else  if(choice==12){	//Compress Files
 system("ls");
 printf("Enter Files names with extension(For multiple files add space between them): ");
  scanf(" %[^\n]s", b);
 printf("Enter Name for Tar file: ");
 scanf("%s",a);
 snprintf(command, sizeof(command), "tar -cvf %s.tar %s",a,b);
 system(command);	
  }
  
  else  if(choice==13){	//UnCompress Files
 system("ls");
 printf("Enter Name for Tar file(without Extension): ");
 scanf("%s",a);
 snprintf(command, sizeof(command),"tar -xvf %s.tar",a);
 system(command);	
  }
  
  else  if(choice==14){//Sort Files in a Directory 
 printf("\n1--Sort by modification time+detals (oldest first): \n2--Sort by modification time (newest first): \n3--Sort by file size (smallest first): \n4--Sort by file size (largest first): ");
  scanf("%d", &choice);
  if(choice==1){
  system("ls -lt");
  }
  else if(choice==2){
  system("ls -lrt");
  }
  else if(choice==3){
  system("ls -lS");
  }
  else if(choice==4){
  system("ls -lrS");
  }
  else {
  printf("Invalid Entry");
 }	
  }
  
  else  if(choice==15){
     system("shutdown -h now");		//shutdown 
  }
  
  else  if(choice==16){
     system("shutdown -r now");		//restart
  }
  
  else  if(choice==17){			//change directory
  int k=1;
   system("ls");
  while(k==1){
     printf("1..Go back\n");
     printf("2..open\n0..Dont Want to Change Directory ");
     scanf("%d", &choice);
     if(choice ==0){
     k=2;
     }
    else if(choice ==1){
     system("cd -");
  }
  else if(choice ==2){
  printf("Enter Directory name ");
    scanf("%s",a);
      //snprintf(command, sizeof(command), "cd %s",a);
      //snprintf(command, sizeof(command), "ls %s", a);
    	//system(command);
    	chdir(a);
  }
  else{
  printf("function not implemented yet or invalid entry");
}
}
  }
  else  if(choice==18){ //Execute a C file
      system("ls");
      printf("Choose C file to execute(Only name without C extensio): ");
      scanf("%s",a);
      sprintf(command, "gcc -o  pro *%s.c\n./pro", a);
      system(command);
  }
  else  if(choice==19){ //Execute a Shell file
      system("ls");
      printf("Choose Shell file to execute(Only name without sh extensio): ");
      scanf("%s",a);
      sprintf(command, "\n./pro", a);
      system(command);
  }
  else  if(choice==20){	//Print Current Directory
     system("pwd");		
  }
  
  else  if(choice==21){	//Create new Directory
      printf("Enter Directory name to create: ");
      scanf("%s",a);
      snprintf(command, sizeof(command), "mkdir %s", a);
      system(command);		
  }
   else  if(choice==22){	//remove Directory
      printf("Enter Directory name to remove: ");
      scanf("%s",a);
      snprintf(command, sizeof(command), "rmdir %s", a);
      system(command);		
  }
   else  if(choice==23){	//Zip files
 system("ls");
 strcpy(b, "");
 printf("Enter Files names with extension(For multiple files add space between them): ");
  scanf(" %[^\n]s", b);
 printf("Enter Name for Zip file: ");
 scanf("%s",a);
 snprintf(command, sizeof(command), "zip %s.zip %s",a,b);
 system(command);	
  }
  
   else  if(choice==24){	//UnZip files
 system("ls");
 printf("Enter Name for Zip file(without Extension): ");
 scanf("%s",a);
  snprintf(command, sizeof(command), "unzip %s.zip",a);
 system(command);	
  }
  
   
  }
  }
 
 
   

