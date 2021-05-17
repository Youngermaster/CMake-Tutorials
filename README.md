# CMake-Tutorials

This a repo with some examples of CMake courses I made

## How to build in CMake

### Windows

Use:

```
Cmake -S . -B out/build
cd out/build
MSBuild.exe [name of the solution] -property:Configuration=Release
```

The flag `-property:Configuration=Release` to add the release option, or if you want the `Debug`
version use this flag `-property:Configuration=Debug`.