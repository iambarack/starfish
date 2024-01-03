## a tool to run fast tests in c:

``` text
# write simple tests without having to configure the original file.
# it is as simple making a to-do list
```
### Installation
``` bash
$ sh install.sh
$ chmod u+x ard.sh
$ brew install gnu-sed # if you are using MacOS
```

### How to run
``` bash
$ ard water.c ard.debug.z
```

### Usage & Examples

> a simple reference of ard.[filename].z
```md
[#line_number] _specifier _variable_name --> syntax
     \  |  /                 ^^^^^^^^^^
       \|/       refers to the variable in your [filename].c
    ^^^^^^^^^
 #line that you want to append test script

## check the instructions from bottom if you do not know specifiers in c
```
> examples:
``` bash
# [make] a new file
$ touch ard.[filename].z

# [open] wiz.[filename].z
$ nano ard.[filename].z

# [write] test cases in "ard.[filename].z" file
[16] d _firstvariable_ 
[19] f _secondvariable_

# [run] the following from terminal:
$ ard filename.c ard.filename.z
```
#### >>> to auto-run the testfiles install [gci from github <<<](https://github.com/windyskies/starfish/gci)


### Version Notes

``` text
# v1.11 --> @previous --< fix alias err
# v1.12 --> @current --< beautify ard.file.c
# v1.2 --> upcoming --< new feature: [will auto-recognize ard.#.z files]
# v2.0 ---> @release ----< !!auto-add tests!! [using only variable names]
# v3.0 --> upcoming --< new feature: [multi language support]
```

### Instructions

Use [this printf() reference](https://www.tutorialspoint.com/c_standard_library/c_function_printf.htm) for _specifiers, and [optional] further [reference for data types](https://www.tutorialspoint.com/cprogramming/c_data_types.htm).
