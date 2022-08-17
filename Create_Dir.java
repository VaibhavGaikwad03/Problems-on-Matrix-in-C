/*
Write a java program to accept directory name from user and create that directory.
*/

import java.lang.*;
import java.io.*;
import java.util.*;

class Directory
{
    public void Create_Dir(String DirName)
    {
        File fobj = new File(DirName);

        if(!fobj.exists())
        {
            fobj.mkdirs();
            System.out.println("Directory created succesfully");
        }
        else
        {
            System.out.println("Directory already exists");
        }
    }
}


class Create_Dir
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Directory name to create : ");
        String str = sobj.nextLine();

        Directory dobj = new Directory();

        dobj.Create_Dir(str);
    }
}