```
 			 ____  _                 _       	 ____  _    	  _ _ 
			/ ___|(_)_ __ ___  _ __ | | ___  	/ ___|| |__   ___| | |
			\___ \| | '_ ` _ \| '_ \| |/ _ \ 	\___ \| '_ \ / _ \ | |
			 ___) | | | | | | | |_) | |  __/ 	 ___) | | | |  __/ | |
			|____/|_|_| |_| |_| .__/|_|\___| 	|____/|_| |_|\___|_|_|
			                  |_|                                  

```
<strong>Project description</strong>

<hr>

this project is a simple shell program created by Iheb Chatti and foued Dadi, it can be executed from the command line. This simple shell contains a number of basic functions from various shell programs


<strong> Commands </strong>

<hr>


<table style="width: 507px;">
<tbody>
<tr style="height: 77px;">
<td style="width: 188px; height: 77px;">&nbsp; &nbsp; &nbsp;<strong>&nbsp;Commads</strong></td>
<td style="width: 494px; height: 77px;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;<strong>Description</strong></td>
</tr>
<tr style="height: 48px;background-color:#C0C0C0">
<td style="width: 188px; height: 48px;">&nbsp;ls</td>
<td style="width: 494px; height: 48px;">&nbsp;list directory contents</td>
</tr>
<tr style="height: 48px;">
<td style="width: 188px; height: 48px;">&nbsp;pwd</td>
<td style="width: 494px; height: 48px;">&nbsp;print the path of the current working directory</td>
</tr>
<tr style="height: 48px;background-color:#C0C0C0">
<td style="width: 137px; height: 48px;">&nbsp;printenv</td>
<td style="width: 369px; height: 48px;">&nbsp;prints out the name and values of the variables in the environement</td>
</tr>
<tr style="height: 48px;">
<td style="width: 137px; height: 48px;">&nbsp;help</td>
<td style="width: 369px; height: 48px;">&nbsp;displays information about shell built-in commands</td>
</tr>
<tr style="height: 48px;background-color:#C0C0C0">
<td style="width: 137px; height: 48px;">&nbsp;cd</td>
<td style="width: 369px; height: 48px;">&nbsp;change the current working directory</td>
</tr>
<tr style="height: 48px;">
<td style="width: 137px; height: 48px;">&nbsp;exit</td>
<td style="width: 369px; height: 48px;">&nbsp;exit the shell program</td>
</tr>
</tbody>
</table>


<strong> Files </strong>

<hr>


<table style="width: 683px; float: left;">
<tbody>
<tr style="height: 64px;">
<td style="width: 188px; height: 64px;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; <strong>FILE NAME</strong>&nbsp;</td>
<td style="width: 494px; height: 64px;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;<strong>DESCRIPTION</strong></td>
</tr>
<tr style="height: 48px;background-color:#C0C0C0">
<td style="width: 188px; height: 48px;">&nbsp;tokenizer.c</td>
<td style="width: 494px; height: 48px;">&nbsp;File that contains a function to tokenize commands</td>
</tr>
<tr style="height: 48px;">
<td style="width: 188px; height: 48px;">&nbsp;string_ops.c</td>
<td style="width: 494px; height: 48px;">&nbsp;File containing helper functions like "_strdup and _strlen..."</td>
</tr>
<tr style="height: 48px;background-color:#C0C0C0">
<td style="width: 188px; height: 48px;">&nbsp;sig_handler.c</td>
<td style="width: 494px; height: 48px;">&nbsp;File containing function that handles signal</td>
</tr>
<tr style="height: 48px;">
<td style="width: 188px; height: 48px;">&nbsp;shell.h&nbsp;</td>
<td style="width: 494px; height: 48px;">&nbsp;Header file&nbsp;</td>
</tr>
<tr style="height: 48px;background-color:#C0C0C0">
<td style="width: 188px; height: 48px;">&nbsp;shell.c</td>
<td style="width: 494px; height: 48px;">&nbsp;File that contains the main function&nbsp;</td>
</tr>
<tr style="height: 48px;">
<td style="width: 188px; height: 48px;">&nbsp;get_env.c</td>
<td style="width: 494px; height: 48px;">&nbsp;Function that gets the environement&nbsp;&nbsp;</td>
</tr>
<tr style="height: 48px;background-color:#C0C0C0">
<td style="width: 188px; height: 48px;">&nbsp;free_array.c</td>
<td style="width: 494px; height: 48px;">&nbsp;File containing function that frees an array</td>
</tr>
<tr style="height: 48px;">
<td style="width: 188px; height: 48px;">&nbsp;find_path.c</td>
<td style="width: 494px; height: 48px;">&nbsp;File that contains a function that finds the PATH</td>
</tr>
<tr style="height: 48px;background-color:#C0C0C0">
<td style="width: 188px; height: 48px;">&nbsp;built_ins.c</td>
<td style="width: 494px; height: 48px;">&nbsp;File where the code source of built_ins is located</td>
</tr>
<tr style="height: 48px;">
<td style="width: 188px; height: 48px;">&nbsp;README.md</td>
<td style="width: 494px; height: 48px;">&nbsp;Readme file filled with informations about the program</td>
</tr>
<tr style="height: 48px;background-color:#C0C0C0">
<td style="width: 188px; height: 48px;">&nbsp;AUTHORS</td>
<td style="width: 494px; height: 48px;">&nbsp;File indicating the authors of this program&nbsp;</td>
</tr>
</tbody>
</table>


<strong> Learning Objectives </strong>

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
General

    Who designed and implemented the original Unix operating system
    Who wrote the first version of the UNIX shell
    Who invented the B programming language (the direct predecessor to the C programming language)
    Who is Ken Thompson
    How does a shell work
    What is a pid and a ppid
    How to manipulate the environment of the current process
    What is the difference between a function and a system call
    How to create processes
    What are the three prototypes of main
    How does the shell use the PATH to find the programs
    How to execute another program with the execve system call
    How to suspend the execution of a process until one of its children terminates
    What is EOF / “end-of-file”?


<strong>AUTHORS</strong>

<hr>

Iheb Chatti
Foued Dadi