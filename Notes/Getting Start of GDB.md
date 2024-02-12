# GDB Debugeer

## use gdb

```bash
gdb -g <program_name> -o <object_name>
```

## run command

```bash
gdb <object_name>

# Now we enter the command line of gdb

run # or enter r

```

## quit command
to quit the command line of gdb.
```bash
quit
```

## list command
to see our source codes
```bash
list
```

## break command

```bash
break <function_name>
break <line_number>

## display breaks
info break
```

## step command
into any function
```bash
step # or s
```

## print command
to print value or pointer
```bash
print <variable_name>
print <variable_pointer>
```

## shell command
```bash
shell <bash_command or other shell command>
```

## set logging on
```bash
set logging on
```

## watchpoint
```bash
watchpoint <variable_pointer> # or watch
```

## how to debug core file
how to open core file
```bash
# we can use the ulimit command
ulimit -c unlimited
```
```bash
gdb -g <object_name> <core_file>
```

```bash
./a.out &
gdb -p <pid>
```
