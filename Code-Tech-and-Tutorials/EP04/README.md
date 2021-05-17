# Execution commands

## Windows

```
cmake -S . -B out/build --config Release -DGLFW_BUILD_DOCS=OFF -DGLFW_BUILD_EXAMPLES=OFF -DGLFW_BUILD_TESTS=OFF
MSBuild.exe .\out\build\OLAS.sln 
.\out\build\Release\OLAS.exe
```