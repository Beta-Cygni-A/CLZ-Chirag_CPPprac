# Fuel Cost Calulator Documentation

(IN DEVELOPMENT, BETA DOCS!!!!)

Main idea:

This program is for calculating gas cost for shared vehicles.
It works by tracking how far the user went on a specfic day in a specfic vehicle.

Setup:

What the user does is create a vehicle entry that has it's name and average mpg.
They then create a user account and add themselves as a user of the vehicle.
Everytime they drive the vehilce, they must log:
- the date (they must specify format):
    - YYYY/MM/DD
    - MM/DD/YYYY
    - MM/DD/YY

- log mileage driven by:
    - miles/kilometers driven
    - (start of trip and end of trip odometer readings in miles/kilometers)

- log fuel bought by:
    - (quantity of fuel bought and at what price per liter/gallon)
    - (amount paid and amount bought)
    - (amount paid paid and price per gallon/liter)

Calculate:

The user enters the log by:
    - manually typing out written log
    - loading file/program's database

Once all users have entered their logs, the user may calculate any number of user's:
    - total amount owed to other users
    - total cost of fuel
    - total miles driven
    - miles left on tank by specfic user(s)

Note: A very important feature is joint-miles. This can be calculated by:
    - joint travel users making logs specifying joint travel
    - odometer readings that are inside or match another user's odometer entry of the same date

## Implmentation Notes:

- all headers in headers.h
- link to header only library used HERE
- style guide yet to be chosen
- Core Goals are in order of importance: security, portability, readability, performance, modern C++
- Code in a modular, easily extensible and re-usable fashion
- If you are implementing a feature, working on this project, please say what you are working on in the Dev Talk and or open an issue and say you will work on the issue. Please do this so we don't waste time doing a feature someone else is already doing.
- Fork project, make your changes, test them, if they work, push to dev-branch, then open pull request to main-branch.
- have info stored in a comma seperated entry file ( csv? ), or mysql database
- plan is:
    - meet sometime soon and discuss design, code style, usage of git, and repo managment
    - comment more code
    - finish documentation
    - proceed to fill out the functions
    - test eachone by commenting out the unneeded/unmade code
    - design a menu
    - maybe do an easter egg
    - improve the code
    - upgrade to cmake
    - test on multiple platforms and on multiple compilers
- LD_SUB_menu() will load a database and allow user to login. Once logged in, user may edit database, add vehicle to database, edit their miles, payments, and info (name, vehilces in use...), calculate how many miles drive, homw much owed to what user, how much a user owes you..., if admin remove vehicle from database