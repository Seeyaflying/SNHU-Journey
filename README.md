# SNHU-Journey

A curated showcase of my coursework through Southern New Hampshire University's Computer Science program — the projects I'm most proud of, organized by class and built to demonstrate the skills I've developed along the way.

## Purpose

This repository is my public portfolio: the work I want hiring managers, recruiters, and fellow developers to see. Every project here is polished, documented, and ready to explain. It's not a dump of every assignment I've ever completed — it's a deliberate selection of the work that best represents my abilities and growth.

## How this repository is organized

Each class gets its own top-level folder, named by course code so the structure stays predictable across terms:

SNHU-Journey/ ├── CS-230/ │ ├── final-project/ │ └── README.md └── README.md


Each class folder holds only the **showcase-quality work** from that course — typically the final project and any standout assignments that demonstrate meaningful skills. The full archive of labs, notes, and in-progress work stays private; what you see here is the best of each class.
## IT-145: Foundation in Application Development

**Prerequisites:** IT-140 or CS-110

**Course description:** Using programming as a problem-solving technique in business and engineering applications. Students write computer code in a logical, structured, and organized manner while incorporating the key concepts of object orientation, and learn to write, review, and document interactive applications using Software Development Kits and Integrated Development Environment tools.

**Competencies covered:**
- **CS-20295** — Write programs by applying concepts and principles of object-oriented programming
- **CS-20296** — Implement appropriate language constructs for an object-oriented programming language
- **CS-20297** — Write programs using object-oriented conventions in accordance with industry standard best practices

### Projects in this folder

- **Pet** — A Java application demonstrating object-oriented programming concepts, with the program logic in a Java script file

## CS-210: Programming Languages

**Prerequisites:** IT-145

**Course description:** Developing functional programs that comply with industry regulations and best practices using various programming languages. Special attention is paid to the importance of developing code that is not only functional, but also secure, efficient, and professional.

**Competencies covered:**
- **CS-20401** — Utilize various programming languages to develop secure, efficient code
- **CS-20402** — Design functional programs that comply with industry regulations and best practices
- **CS-30403** — Write professional, well-documented, and readable code

### Projects in this folder

- **Calculator** — A functional calculator application
- **Corner Grocery** — A grocery store application
- **Project 2: Airgead Banking** — A banking application
- **TempConvert** — A temperature conversion application


## GAM-207: Information Technology and Digital Games

**Prerequisites:** IT-145

**Course description:** An introduction to digital games and information technology covering game genres and platforms, interface design, game implementation, artificial intelligence, business economics of the game industry, game marketing and design, e-collaboration, and e-commerce. Students learn to use software packages to design and implement digital games, and how to use the Internet to market and distribute them. The course culminates in the conception, design, and prototype of an original digital game — designed for students interested in IT and games, including original game concepts, design and implementation, and executive leadership in the game industry. No prior programming knowledge is required.

**Course outcomes:**
- Create input device functionality within a game engine that effectively enables control of a game's player character
- Incorporate 3D objects within a game engine that create unique functionality in game levels
- Implement game logic within a game engine for driving functionality
- Create graphical user interfaces in a game engine for enhancing the user experience
- Articulate the importance of game design considerations and the development process

### Projects in this folder

- **Game Project in Unreal**

## CS-250: Software Development Lifecycle

**Course description:** An exploration of the different methodologies and stages involved in the software development life cycle, with a focus on applying the SDLC within an agile development environment using the Scrum framework. The course culminates in a Sprint Review and Retrospective, where students take on the role of Scrum Master to analyze the work completed during the SNHU Travel development project and present lessons learned to leadership.

**Competencies covered:**
- Explain the different methodologies and stages involved in the software development life cycle
- Apply the stages of the software development life cycle within an agile development environment
- Evaluate various software development methodologies and tools

### Projects in this folder

- **Sprint Review and Retrospective** — A paper taking on the role of Scrum Master, analyzing how the Scrum-Agile team's roles, user stories, communication, and organizational tools contributed to the SNHU Travel project, and assessing the effectiveness of the Agile approach
- **Agile Presentation** — A PowerPoint for leadership explaining the key facets of the Scrum-Agile approach, contrasting waterfall and Agile methodologies, and outlining the factors to consider when choosing between them


## CS-230: Operating Platforms


**Course description:** A deeper understanding of operating platforms and architectures through the analysis and evaluation of the characteristics, advantages, and weaknesses of each. The course also covers the value of utilizing software design templates and how to apply them to solve problems.

**Competencies covered:**
- **CS-30406** — Utilize software design templates and patterns to efficiently solve a problem
- **CS-30407** — Analyze the characteristics of and techniques specific to various systems architectures
- **CS-30408** — Evaluate the characteristics, advantages, and weaknesses of various platforms

### Projects in this folder
- **CS-230 Project Three Software Design**  

## What belongs here

I keep a simple filter for what makes it into this portfolio:

- **Final, polished projects** — completed work with clean code and clear documentation
- **Projects that demonstrate skills** relevant to the roles I'm targeting
- **Work I can confidently explain** in an interview, from architecture to implementation
- **Projects with a README** describing what it does, how it works, and what I learned

Everything else — labs, scratch work, graded assignments with answers, personal notes — stays in my private archive. This repo is intentionally curated so that what a recruiter sees is focused and impressive, not overwhelming.

## Why this repo is curated, not comprehensive

Early in my journey I considered keeping everything in one public repository and simply hiding the private folders with a `.gitignore`. I moved away from that approach for a few reasons:

- **A `.gitignore` can't make a folder private** — it only stops it from being uploaded. A single `git add .` on the wrong day can push something sensitive into public history.
- **A public repo with a visible "private/" folder raises questions** — it reads as disorganized rather than intentional.
- **Recruiters don't want a raw dump** — they want to quickly see your best work and understand what you can do.

Instead, I keep two separate things: this public portfolio of my best work, and a private archive of the complete journey. The line between them is clean and impossible to cross by accident.

## How I keep this repo clean

- **I stage specific files and folders** — never `git add .` — so nothing unintended gets committed.
- **A `.gitignore` acts as a safety net** for local files that should never be public.
- **No secrets, ever** — API keys, passwords, and personal information have no place in committed files.
- **This README is updated each term** to reflect new courses and newly promoted projects.