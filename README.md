# Cs210_Project3

// Questions in reflection after completing the program.

•	Summarize the project and what problem it was solving.
Is this project we are told we are writing software for a grocer. We are tasked with reading a from a file of items that were sold during the day. We use C++ to display a menu and Python to read from the file. We then display data on what was sold for the day in different forms depending on user input.

•	What did you do particularly well?
I think from a functional standpoint the program is fairly sound. The integration of Python and C++ specifically works to and pass information efficiently between the two languages.

•	Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
One of the bigger things to improve is in how Python reads from the file each time it is called. On the one hand reading each time from the file would be better if the input file were to change while the program is in use. However, if this was always going to be a static source it would be more efficient to possibly only read the data once instead of each time a function is called.

•	Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?
I think the most difficult part was simply getting Python and C++ to communicate and work together. I made it slightly more difficult adding the data to a dictionary. I think after adding the data to a dictionary it made the remaining Python code much easier to write.

•	What skills from this project will be particularly transferable to other projects or course work?

Getting into the habit of working with multiple languages is critical in regards to robust application development. Reading from a file or database is also critical to most enterprise applications.

•	How did you make this program maintainable, readable, and adaptable?
I tried my best to write the functions clearly. I also added some comments to make functions clearer if I added additional functionality. In addition, most of the functions for reading from files and parsing through data is reusable if we were to get additional files to read from. 

