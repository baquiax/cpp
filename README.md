# cpp-awakens

A basic C++ examples

## Testing

For tests this project uses [Google Test](https://github.com/google/googletest).

Install it in a Debian based OS.

```
sudo apt install libgtest-dev
```

In some situations you need to make and install the binaries

```
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make
sudo cp *.a /usr/lib

```

To compile a test you should to run:
```
g++ -o sample_test.o sample_test.cpp -lgtest -lpthread 
```

----
💻 [baquiax.dev](https://github.com/baquiax/cpp)