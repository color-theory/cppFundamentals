# 1. Principals of Programming and Software Engineering

## 1.1 Software Engineering and Object-Oriented Design

* Coding without a solution design increases debugging time.
* Software engineering facilitates development of programs.

**Software engineering** facilitates development of programs.

## An Examination of Problem Solving

* A solution specifies a system of interacting objects.
* An object is an instance of a class.

**Problem solving** refers to the entire process of taking the statement of a problem
and developing a computer program that solves that problem.

**Solution**-A computer program consisting of a system of interacting classes of objects.

**Object**-Has a set of characteristics and behaviors related to the _solution_.

**Class**-A set of objects having the same type.

## Aspects of an Object-Oriented Solution

* Modules implement algorithms, which often manipulate data.

**Modules**-Self-contained units of C++ code. Can be a function, method, class,
several functions or classes, or other blocks of code.

**Algorithm**-A step-by-step recipe for performing a task within a finite period of time.

## Abstraction and Information Hiding

* Specify what to do, not how to do it.
* Write specifications for each module before implementing it.
* Specifications do not indicate how to implement a module.
* Specify what a module does, not how it does it.
* Specify what you will do to data, not how to do it.
* An ADT is not a fancy name for a data structure.
* Develop Algorithms and ADTs in tandem.
* All modules and ADTs should hide something.

**Abstraction**-Separates the purpose of a module from its implementation.

**Functional (or Procedural) Abstraction**- Separating the purpose of a module from
its implementation.

**Data Abstraction**-focuses on what data operations do, not implementation.

**Abstract Data Type(ADT)**-A collection of data _and_ a set of operations on data.

**Data Structure**-How you will implement the ADT. A construct that you define in a
programming language to store a collection of data.

**Information Hiding**-A Principal that says to hide certain details from public,
and make them closed for modification.

## Principals of Object-Oriented Programming

* Objects encapsulate attributes or data and behaviors or operations.
* Encapsulation hides inner details
* Inheritance supports reusing software
* Polymorphism allows an object's behavior to be determined at runtime
* An overloaded operator has multiple meanings

**Encapsulation**-Objects combine data and operations
**Inheritance**-Classes can inherit properties from other classes.
**Polymorphism**-Objects can determine appropriate operations at execution time.

## Object-Oriented Analysis and Design

* Analysis explores a problem, not a solution
* Object-oriented analysis explores a problem in terms of its objects
* Design explores a solution to a problem
* object oriented design explores a solution's objects and their collaborations.

**Requirements**- What a solution must be and do.

**Object-oriented Analysis(OOA)**-Understanding of the problems and requirements of a
solution and expressing them in terms of the objects within world objects, software
systems, or ideas. Describe the problem.

**Object-oriented Design(OOD)**-Describing a solution in terms of software objects
and how those objects will collaborate with one another to fulfill the requirements
of the problem.

**Collaborate**-When objects send messages to one another...call each other's operations.

## Applying UML to OOA/D

* The Unified Modeling Lanugage visually represents object-oriented solutions as diagrams
* A use case is a textual story
* A scenario describes the system's behavior under certain circumstances from the
perspective of the user
* A UML sequence diagram shows the interactions among objects over time.
* A UML sequence diagram represents an object as a box.
* An activation bar on an object's timeline represents a responsibility of the
object's class
* A stereotype identifies a special characteristic of an element.
* A UML class diagram shows the unchanging relationships among classes of objects
* An association indicates the classes know about each other.
* Aggregation indicates that one class contains an instance of another class
* Composition is a stronger form of aggregation; the lifetimes of the container
and the contained objects are the same.
* Generalization indicates a family of classes related by inheritance.
* UML diagrams are not documentation.
* Uml is a tool for exploration and communication

### Object-Oriented Analysis and the Use Case
1. Describe the problem domain in terms of scenarios involving the solution that
satisfies user goals.
2. Discover noteworthy objects, attributes, and associations within scenarios

### UML Sequence Diagram
1. Visual representation of the flow of messages sent between objects during a
single scenario.
2. Indicates the responsibilities of an object.
3. Indicates the collaborations among objects.

### UML Class(Static) Diagram
1. Shows the attributes and operations of individual classes.
2. Shows the unchanging relationships among the classes in a solution.

## The Software Life Cycle

* The software life cycle describes the phases of software development.
* RUP gives structure to the software development process.

**Life Cycle**-The phases through which software will progress from
conception to replacement to deletion from the hard disk forever.

**Rational Unified Process(RUP)**-Widely used process that uses and gives
structure to OOA/D.

## Iterative and Evolutionary Development

* Iterative Development forms a solution after many iterations; each iteration
builds on the previous iteration until a complete solution is achieved.

* A critique of each iteration influences the next iteration

* Iterative development enables you to adapt a solution to a changing
environment.

### Iterative and Evolutionary Development
1. Determines timebox lengths at start of a project.
2. Keeps timebox lengths short (2 to 4 weeks)
3. Gets end-user and domain-expert feedback from iteration n to influence
the direction of iteration n+1

## Rational Unified Process Development Phases

* **Inception**- Feasibility study, project vision, rough time and cost estimates
* **Elaboration**- refined project vision, iterative development of core system,
development of system requirements, more accurate time and cost estimates
* **Construction**- iterative development of remaining system
* **Transition**-Testing and deployment of system.

* The inception phase defines a project's scope and feasibility.
* The elaboration phase developes a core system and addresses high-risk elements
* The elaboration phase refines a system's requirements and cost
* The construction phase develops the remaining system
* During the transition phase, beta testing and system development occur.

Analysis, Design, Implementation, and Testing all occur during each phase of the RUP
except for testing, which starts during the elaboration phase. and increases in volume
until transition.

## What about Waterfall?

* The Waterfall method is outdated and should no longer be used.

It is important to be careful during certain phases of the RUP as by making certain
mistakes, it can quickly become waterfall. IE: Inception is not only about specifying
requirements. We also make sure that the system is feasible, estimate how much the system
will cost to develop, and identify high risk issues. Inception does not equal Waterfall's
 requirements phase.

The elaboration phase is not only about designing the system. We also perform analysis,
coding, and testing. If this phase only has one iteration, then it effectively becomes
a waterfall method.

## 1.2 Achieving a Better Solution

* Time performing Analysis and Design is well spent.

## Evaluation of Designs and Solutions

* Highly cohesive modules perform one well-defined task
* A robust module performs well under unusual conditions
* Loosely coupled modules are independent
* A module's interface is the only way to interact with that module

**Cohesion**- When a module performs one well-defined task, it is said to be highly
cohesive. This brings several benefits. It promotes easy to understand code, It is easy
to reuse in other software, it is easier to maintain, it is more robust, and promotes
low coupling.

