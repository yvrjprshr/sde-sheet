# What is an Operating System? What does it do?


An Operating System (OS) is an interface between a computer user and computer hardware. An operating system is a software which performs all the basic tasks like file management, memory management, process management, I/O Management, Device Management, Security, Networking.

An operating system is software that enables applications to interact with a computer's hardware. The software that contains the core components of the operating system is called the kernel.

It provides an environment, in which user can execute program easily


# What are the most popular operating systems?


1) Android
2) Windows
3) IOS


# What are the functions of operating systems?


- Provide Interface
- Security
- Control over system performance
- Job Accounting
- Error detecting aids
- Memory Management
- Processor Management
- Device Management
- File Management


# What is kernel? What are the different types of kernels?


Kernel is central component of an operating system that manages operations of computer and hardware. It basically manages operations of memory and CPU time. It is core component of an operating system. Kernel acts as a bridge between applications and data processing performed at hardware level using inter-process communication and system calls. 

Kernel loads first into memory when an operating system is loaded and remains into memory until operating system is shut down again. It is responsible for various tasks such as disk management, task management, and memory management. 

Types of Kernels:

- Monolithic Kernel
- Micro Kernel
- Hybrid Kernel
- Exo Kernel
- Nano Kernel


# Difference Between Monolithic Kernel and Micro Kernel


Monolithic Kernel:
- user services and kernel services share the same memory space
- Execusion of the process is faster
- Monolithic Kernel is bigger in size (cuz same memory space sharing)
- Entire server fails when one service fails
- When a service is added, the entire OS needs to be modified
- Example: Linux

Micro Kernel:
- User Services and Kernel Services are kept in separate address space
- Micro Kernel in smaller in size (cuz separate memory space sharing)
- Operations are slower
- It is easily extendible (no need to modify os when a new service is added)
- Example: Mimic, Symbian


# What are Device Drivers


A device driver is a piece of software that allows the kernel of the OS to communicate with Different hardware in the system.

Device Driver in computing refers to a special kind of software program or a specific type of software application that controls a specific hardware device that enables different hardware devices to communicate with the computer’s Operating System.

Device Drivers are essential for a computer system to work properly because without a device driver the particular hardware fails to work accordingly, which means it fails in doing the function/action it was created to do. Most use the term Driver, but some may say Hardware Driver, which also refers to the Device Driver. 


# What is Paging?


Paging is a memory management scheme in which data is stored to and retrieved from the secondary storage for use in the main memory. The part of secondary storage that is used for paging is known as virtual memory.

In paging, a process is divided into fixed-size contiguous blocks known as pages and is stored on the secondary storage.

A page is the smallest unit of data for memory management used in virtual memory. And the main memory is also divided into fixed size continuous blocks known as frames.

Pages from the secondary memory are mapped into frames in the main memory and frames must be kept as the same size of pages.

In order to have maximum utilization of memory, This process of transferring of pages between main memory and virtual memory is referred to as Paging in Windows and swapping in Linux. 


# What is a process in Operating System?


A process is a program in execution.

For example when we write a program in c++, we save, compile and run it and the moment we run it, it is transferred to main memory and becomes a process.

When a process executes, it passes through many different stages like start, ready, running, waiting, and terminate state.


# what are the various attributes associated with process?


OS maintains a Process Control Block(PCB). PCB is nothing but a data structure that stores information about a process. There are various attributes stored in PCB and they are:-

- Process ID: Unique idntifier assigned by OS
- Process State: represents current state of process like ready, running etc...
- Priority: process with high priority gets the CPU first
- Program Counter: pointer to the address of the next instruction to be executed for this process.
- CPU Registers: Each process has its own set of CPU registers which is used to hold the data of process during execution
- List of open files: maintains the list of files in main memory which are necessary for the process
- List of open devices: maintains the list of devices which were opened during the execution of process


# What is a thread in os?


A thread is the smallest unit of execution within a process. A thread is also called leightweight process.

It breaks up a task into smaller units that can be executed concurrently and thus provide concurrency with in a process.

It exists within a process and uses process resources such as code data and files.

Since a thread is lightweight as compared to process, it helps to improve the execution performance by running in parallel with other threads.

And just like a process, each thread has its own attributes such as thread id, program counter, register set and a stack.

Threads enhances the throughput of the system because when a process is split into threads, the function of each thread is considered as one job and then number of jobs done in unit time increases.

In a multi-processor environment, threads can be distributed over a series of processors and can run in parallel on different processors.


# What is a deadlock?

A deadlock in OS is a situation in which more than one process is blocked because it is holding a resource and also requires some resource that is acquired by some other process.

The four necessary conditions for a deadlock situation are:-
- mutual exclusion : A resource can only be shared in mutually exclusive manner. It implies, if two process cannot use the same resource at the same time.

- no preemption : The process which once scheduled will be executed till the completion. No other process can be scheduled by the scheduler meanwhile.

- hold and wait : A process waits for some resources while holding another resource at the same time.

- circular wait : All the processes must be waiting for the resources in a cyclic manner so that the last process is waiting for the resource which is being held by the first process.

# Banker's Algorithm [Deadlock Avoidance Algorithm]


Banker's ALgorithm is a deadlock avoidance algorithm. It manages resources allocation. It is also called deadlock detection algorithm. 

Banker's Algorithm checks 3 things before allocation of resources:
1) Max: How many maximum resources can be requested by each process
2) Allocated: How many resources each process currently hold
3) Available: How many resources are available or not allocated to any process in the system


# What is virtual memory?


Virtual Memory is a storage scheme that provides user an illusion of having a very big main memory. This is done by treating a part of secondary memory as the main memory.

In this scheme, User can load the bigger size processes than the available main memory by having the illusion that the memory is available to load the process.

Instead of loading one big process in the main memory, the Operating System loads the different parts of more than one process in the main memory.

By doing this, the degree of multiprogramming will be increased and therefore, the CPU utilization will also be increased.


# What is demand paging?


Demand paging is a paging technique used in virtual memory system, where the pages that are stored in secondary storage are retrieved only when demanded by the CPU. It is also known as lazy swapper.


# What is page fault ? 


Page fault occurs when the page referenced by the CPU is not found in the main memory and has to be fetched from the secondary storage.

It notify the OS that it must retrieve the pages from virtual memory in order to continue the execution.


# What is thrashing?


Thrashing is a state where the CPU spends most of its time in swapping pages between main memory and secondary memory, rather that doing productive work such as executing the instructions.

To know more clearly about thrashing, first, we need to know about page fault and swapping.

- Page fault: We know every program is divided into some pages. A page fault occurs when a program attempts to access data or code in its address space but is not currently located in the system RAM.

- Swapping: Whenever a page fault happens, the operating system will try to fetch that page from secondary memory and try to swap it with one of the pages in RAM. This process is called swapping.

Thrashing is when the page fault and swapping happens very frequently at a higher rate, and then the operating system has to spend more time swapping these pages. This state in the operating system is known as thrashing. Because of thrashing, the CPU utilization is going to be reduced or negligible.

The basic concept involved is that if a process is allocated too few frames, then there will be too many and too frequent page faults. As a result, no valuable work would be done by the CPU, and the CPU utilization would fall drastically. and this situation will be called thrashing.



# What is the difference between segmentation and paging?


Paging =>
------
1) The size of a page is fixed
2) Procedures and data can not be separated in paging
3) It is faster
4) The size of the page is determined by the CPU and available memory

Segmentation =>
------------
1) The size of a segment is not fixed
2) Procedures and data can be separated in segmentation.
3) It is slower compared to paging.
4) The size of the segment is determined by the user


# what are the different states of a process?


New − The process is being created.

Ready − The process is waiting to be assigned to a processor.

Waiting − The process is in waiting state until an event occurs like I/O operation completion or receiving a signal.

Running − In this state the instructions are being executed.

Terminated − the process has finished execution.


# Scheduling algorithm and types of scheduling algorithm

A scheduling algorithm is an algorithm which intends to improve efficiency by reducing the waiting time to a minimum while allocating resources to various competing tasks.


Types of scheduling algorithms:

- FCFS Scheduling Algorithm
- Priority Scheduling Algorithm
- Round Robin Scheduling Algorithm
- Multilevel Queue Scheduling Algorithm
- Shortest Remaining Time Scheduling Algorithm
- Shortest Job First Scheduling Algorithm

