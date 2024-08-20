# CLion DLL Example

This is a free to use CLion DLL Example.
Use it for litterly anything but give credits.

### Use Visual Studio Toolchain
![settingUp](https://i.imgur.com/3QTid34.png)

### Additional Information
- **Toolchain Configuration**: Ensure your toolchain is set to Visual Studio. Without this, many standard library functions will not function as expected.
- **Mappings**:  
  If your project involves games like Minecraft, where mappings are necessary, use [MCP Mapping Viewer](https://mcp.thiakil.com). This project uses the `stable_22` mappings. Make sure to apply the correct mappings for your specific use case to avoid errors.
  *What are mappings?*  
  Mappings translate obfuscated code or names (common in modding or reverse engineering) back into human-readable names. Applying the correct mappings helps you understand and modify the code more easily.
- **Using Windows-Specific Libraries**:  
  If you want to use Windows API functions like `PlaySoundA`, ensure your `CMakeLists.txt` includes the following line:
  ```cmake
  target_link_libraries(Example PRIVATE winmm)

### If You're Not Using the Visual Studio Toolchain
Using GCC/MinGW toolchains on Windows might limit support for certain C++ standard library features. These adjustments ensure compatibility.
- You can not use `std::cout << "Random text \n";` instead use `printf("Random text \n");`
- Using Strings: Avoid using `std::string random;`. Instead, opt for: `char* random;`

### Why Choose CLion Over Visual Studio?
- Although Visual Studio is popular, here are several reasons to consider CLion:
- Better Organization: CLion's project structure and interface are more intuitive, especially if you're familiar with other JetBrains products like IntelliJ IDEA.
- Superior Refactoring: CLion's refactoring tools are reliable and user-friendly, which is essential for maintaining clean code.
- Enhanced Functionality: CLion offers advanced coding tools, better CMake integration, and features like code analysis and navigation.
- Robust Package Management: CLion simplifies dependency management with a powerful package manager.
- Smaller Project Files: CLion’s project files are typically smaller and more manageable than those created by Visual Studio.

###### Im a JetBrains kid

# Discord Server:
<a href="https://discord.gg/7JXXvkufJK"><img src="https://invidget.switchblade.xyz/7JXXvkufJK" alt="https://discord.gg/7JXXvkufJK"/></a>
