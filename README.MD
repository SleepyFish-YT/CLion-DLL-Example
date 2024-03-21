# CLion DLL Example

This is a free to use CLion DLL Example.
Use it for litterly anything but give credits.

## Setting up
###### Use Visual Studio Toolchain
![settingUp](https://i.imgur.com/3QTid34.png)

## Usage examples
- Legit JNI clients for any types of games

## Additional Information
- Change the toolchain to Visual Studio to work. If your not doing so you are unable to use any std:: functions.
- If you want to use stuff like PlaySoundA then add this to your CMakeLists: (I already added this on default)
```c++
  target_link_libraries(Example PRIVATE winmm)
```

## If you're not using Visual Studio Toolchain read this
- You can not use std::cout << "Random text \n"; (I don't know why but u cant) instead use printf("Random text \n")
- Don't use std::string random; (I also don't know why but u also cant) and instead use char* random;
