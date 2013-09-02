__QArgParser__ <- The most pint-sized argument parser lib for QT..(should be a gist)


__USAGE EXAMPLE__<br>
command line args:-
```bash
you@yourbox:~$ ./myApp  firstKey=Value1 --secondKey Value2 thirdKey=val3.1,val3.2,val3.3 --enable-foo
```

Code:-
```cpp
QString param1   = QArgByKey("firstkey",'='); // Returns `Value1` from first pair
QString param2   = QArgByKey("--secondkey"); // Returns `Value2` from second pair
QString param3-1 = QArgByKey("--thirdkey",'=').split(',').at(0); // Returns `val3.1`
bool fooEnabled  = qApp->arguments().contains("--enable-foo"); //To check for `--enable-foo`
```
