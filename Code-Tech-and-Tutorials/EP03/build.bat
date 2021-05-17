cmake -S . -B out/build -DGLFW_BUILD_DOCS=OFF -DGLFW_BUILD_EXAMPLES=OFF -DGLFW_BUILD_TESTS=OFF
MSBuild.exe .\out\build\OLAS.sln -property:Configuration=Release
.\out\build\Release\OLAS.exe