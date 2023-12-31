# Independent_Study
Dr. Gourd's CSC 450 course
This course emphasizes a hands-on approach to practical learning in computer hardware security. Students will engage in a series of well-crafted experiments using a dedicated hardware platform known as HaHa. Through these experiments, participants will gain insights into the inner workings of computer systems, exploring security vulnerabilities, ethical hacking, and implementing countermeasures to safeguard hardware.

The HaHa board, a custom-designed hardware platform, serves as an experimental development board for comprehensive teaching and learning in various aspects of hardware security. It supports over a dozen experiments that cover essential hardware security fundamentals, diverse attack types, and countermeasures. These attacks encompass reverse engineering, counterfeiting/cloning, side-channel, fault injection, and physical tampering (e.g., hardware Trojan, mod-chip).

Developed by Prof. Swarup Bhunia in collaboration with students and partners at the Electrical and Computer Engineering Department of the University of Florida, the HaHa board facilitates hands-on exploration of hardware security concepts. The course, offered annually for the past five years, includes 19 experiments (including Experiment 0) tailored for the HaHa board.

The unique aspect of this course is its adaptability to online learning, as it doesn't necessitate access to a physical lab. While most experiments can be conducted by connecting the HaHa board to a computer, a few, like Experiment 9, may require access to a USB Oscilloscope, such as Analog Discovery 2. Instructors can tailor the selection of experiments based on course duration and other considerations.


I was not able to complete two of the Experiments that I set out to do (Experiment 5 and 7) due to errors that I was unable to solve or find work arounds to. 

**Write UP**
For this independednt study I expended my understanding of hands-on hardware security for computer application. I attempted each experiment with the hope to understand the facets of ethical hacking. Each experiment showed me the various levels that a hardware system can be compromised. 
For this independent study I used a HaHa (Hardware Hacking Board) and an Analog Discorvery 2 to perfrom the various 'attacks' and manipulations, as well as the countermeasures explained in each experiment write-up. I learned, in this study, the hardawre layout and how the hardware is interconnected and seemigly 'secure.' I then learned the methods and applications to put in use to access information and/or force an outcome from the hardware. This allowed me to gain exposer to hacking methods that have real-world implications. 

This study was extremely intrestion for me to do becuase it tested my trust in the hardware that I use and the security that I assume is present on my devices. The study allowed me to have an inside look into how programmers and hackers can manipulate your hardware and force different performances and outcomes baced on specific commands and forced connections. 

I had some challenges when doing this study. I ariginally could not figure out how to program certain data onto my board using the GOWIN application; I had this issue in every experiment that I worked on that used this application, but, I found a work around for some of the experiments and I believe it was slightly user error. I had slight issues when having to use Linux commands to compile various codes in ubuntu; just because I had to edit files in the VIM which I am not too familiar with. I also had some issue understanding the listed steps in experiment 4 and some of the later experiments (the overall language was hard to understand). 

That being said I had success as well. I was able to successfully (in experiment 0) program my LED lights to use the position data of the board to represent the tilt of the board, which in the beginning was very satisfying to program into the board. Another success I had was in the ubuntu virtual machine, which I used to use Linux which the experiment required. I successfully wrote a DES cypher for use to encryption and decryption and was able to force an unlock by use of an invalid password from an encryption alogrithm (by use of overflow). I was also successfully able to perform the Bus Snooping attack and it was very satisfying as I have never really used connective hardwware other then a Raspberry Pi and I was able to read particular signals based on input and pin position which was very cool. 

Expanding this in the future would be an interesting task. As hardware security developes so does the methods to break these securities, so when expanding this there would be a lot of new information to hand pick from. Just in the context of this study I believe the overall documentation of the existing experiments would have to be done to expand to more experiments as the documentation is quite sparce and sometimes confusing. If possible it would be an interesting expansion to add other hardware tools to the study for use with the HaHa board to show variation in security faults in the hardware based on attached malware.


**Experiment Status**

-Experiment 0-completed, added screenshots, added source code and updated documentation to help with future notes. 

-Experiment 1-completed, added screenshots, added source code and updated documentation to help with future notes.

-Experiment 2-completed, added screenshots, added source code (I believe it is the corect source code that I used) and updated documentation to help with future notes.
-Experiment 3-complete, added screenshots and updated documentation to help with future notes. 

-Experiment 4-Half complete, had issues with GOWIN unable to get the device programmed, still have documentation for parts that I was able to do as well as answers to questions I was able to complete without the oscilloscope.

-Experiment 5-Not complete, attached to Experiment 4. 

-Experiment 6-Complete, BoM and Schematic attached as well as updated documentation to help with future notes. 

-Experiment 7-Not complete, was unable to finish this Experiment. 
