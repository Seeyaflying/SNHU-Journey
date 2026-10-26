# CS 230 Portfolio Reflection: The Gaming Room

## Client and Software Requirements

The Gaming Room contracted me to develop a game design that extended Draw It or Lose It to operating systems beyond Android.
A simple guessing game: players had to identify images in progressive stages.
The design required that all teams and players in the game have access to the same game data.
Duplicate team and game names needed to be prevented, while individual game instances required their own identifiers.
The design also had to be a client-server structure that was scalable.
I had to write the software design document to help with development by outlining technical needs like memory and storage and how the operating system would affect game design.

## What I Did Well in Developing the Documentation

The area in which I exceeded my expectations was the client-centered design document.
I considered multiple design aspects, such as operating system (OS) compatibility for Linux, Mac, and Windows, as well as the design considerations for mobile systems.
In my design decisions, I also analyzed the pros and cons of using various platforms.
For client-server architecture, I analyzed the game data being managed centrally vs. game data distributed on each client.
By making these design decisions in my document, I provided an analysis and reasoning of the design, instead of just providing a list of technologies to be used.
Good software design should provide enough information for the client and for the designers that will implement the software, and design documents must do just that.

## What I Found Helpful About the Design Process

Going through the design doc prior to writing the software itself really highlighted the importance of having a plan for the structure of an application before you start writing any code.
It allowed me to properly identify the client’s requirements, think through any potential technical issues, and work out how the various parts of the application would be interacting with each other.
It also gave me a good insight into how you could separate the client-side concerns from the server-side concerns and how a REST-style API would allow different clients to talk to the same server.
The design doc in effect acted as a blueprint, which made the development process a lot more structured as I could refer to it when making decisions about how to implement the various bits of functionality.
It also served as a good reminder that if you can identify the problems early on, then you can significantly reduce the amount of rework that you’ll end up doing later on.

## What I Would Revise

If I could go back and do one thing to my work, it would be to improve the level of detail in the explanation of the architectural decisions and how those decisions relate to the client’s actual requirements.
The comparison of the various operating platforms was useful in helping me to understand the range of options available, but I think the document could have been improved by having a much more detailed comparison of the scalability, security, maintenance, and deployment cost of the various platforms.
I would have also included a number of additional diagrams to show how the client communicates with the server and how the game, team, and player data are all managed.
That would have made it much easier for the developers to follow and would have helped the client to understand why we had arrived at the solution we did.
In future projects, I would make sure that every design decision was reviewed in the light of the requirements to ensure that the document didn’t just state what the system was to do but also explained why the proposed solution was the right one.

## Interpreting and Implementing User Needs

I interpreted the client’s requirements by looking at the need to expand Draw It or Lose It to other platforms with the same game functionality.
The design would need to support multiple users, have the ability to store game and team information, and be structured in a way that would allow for future growth.
I went with the client-server model to separate the client application from the server side and considered a REST-style API as a way of enabling communication between the two.
That would allow different client platforms to talk to the same application services rather than having a completely different server implementation for each platform.
Understanding the client’s needs is obviously key, as the software is ultimately there to solve a problem.
You can have a technically sound application that still doesn’t work for the user if it doesn’t have the features they require, if it doesn’t meet their expectations, or if it’s not suitable for the devices they use.
It’s all about understanding what the client is trying to achieve and making the right decisions to support that.

## My Approach to Software Design and Future Strategies

My approach to software design was to take the client’s requirements and work out the major components of the application.
Then I’d go through the various technologies and platforms to see what would be appropriate and document the decisions that would be made in the course of the design.
I quickly learned that software design is not just about picking a language and writing code.
It’s about thinking about how the system will be used, how the various components will communicate with each other, how the data will be stored and managed, and how the application will be maintained as the requirements evolve.
In subsequent projects, I would start by splitting the requirements into functional and non-functional, identifying the constraints and working out the priorities of the features.
I would use architectural diagrams, data models, interface definitions, and clearly documented design decisions to make the proposed solution as easy to understand as possible.
I would also look at security, scalability, performance and maintainability from the outset.
I would then go back to the requirements throughout the development and testing process to ensure that the solution still met the client’s needs.
This would result in software that was better structured, more maintainable and more adaptable to change.

### Disclaimer: 
All files from this class will be in this folder as well inside of a folder called Coursework. 
I will have the final documentation that I made outside of this folder.




