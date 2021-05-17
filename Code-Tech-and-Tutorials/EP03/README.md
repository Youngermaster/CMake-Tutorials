# Execution commands

## Windows

```
cmake -S . -B out/build -DGLFW_BUILD_DOCS=OFF
MSBuild.exe .\out\build\OLAS.sln -property:Configuration=Release
.\out\build\Release\OLAS.exe
```