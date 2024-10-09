MinGW官网下载地址

[Downloads - MinGW-w64](https://www.mingw-w64.org/downloads/)

Github下载地址 

[Releases · niXman/mingw-builds-binaries (github.com)](https://github.com/niXman/mingw-builds-binaries/releases)





**MinGW 全称 Minimalist GNU for Windows**

[go系列&运维系列&Windows系列：MingW-W64-builds那么多版本，他们的区别是什么呢？_mcf posix-CSDN博客](https://blog.csdn.net/weixin_54626591/article/details/141887810)

编译器



CPU架构

- i686  32位

- x86_64 32位
- aarch63 ARM64



12.2.0 gcc版本号



线程模型的类型

- mcf

- posix 
    - linux，unix，macOS
- win32
    - windows



异常处理机制

- dwarf
    - 32位 only 
    - 32位CPU推荐？
    - 一种在 Linux 上处理异常的机制
- seh (**Structured Exception Handling**)
    - 64位 only
    - 64位CPU推荐
- sjlj  setjump/longjump
    - 32位 64位 通用
    - 但性能不如前两者



MinGW-w64、UCRT 和 MSVCRT 是 Windows 平台上常用的 C/C++ 运行库

- MinGW-w64
    - 是一个基于 GCC 的编译器套件，可以用于编译 Windows 平台上的 C/C++ 程序。MinGW-w64 使用的是 POSIX 标准的运行库，因此可以很好地兼容 Unix/Linux 程序。MinGW-w64 的默认运行库是 MSVCRT（Microsoft Visual C++ Runtime），但也可以使用其他运行库

- UCRT Universal CRT
    - 是微软提供的一个通用 C 运行库，可以用于编译 Windows 平台上的 C/C++ 程序。UCRT 提供了许多与标准 C 库兼容的函数，并支持新的 C11 和 C++11 标准。UCRT 适用于 Windows 10 或更高版本的操作系统。
- **MSVCRT**  Microsoft Visual C++ Runtime
    - 是微软提供的一个 C++ 运行库，可以用于编译 Windows 平台上的 C/C++ 程序。MSVCRT 提供了许多与标准 C 库兼容的函数，但不支持新的 C11 和 C++11 标准。MSVCRT 在 Windows 操作系统中已经内置，并且随着 Visual Studio 版本的升级而不断更新。



CRT： C Runtime Library



[Windows的C标准库为CRT](https://learn.microsoft.com/en-us/cpp/c-runtime-library/crt-library-features?view=msvc-170)(C runtime Library)，从VS2015以后，CRT重写，改名为**UCRT**(UCRT相当于Linux上的glibc)，之前为**MSVCRT**





[不同平台的C/C++标准库_msvcrt ucrt-CSDN博客](https://blog.csdn.net/lewif/article/details/126973634)

[C++ 前置知识手记1. MSVCRT 和 UCRT 和 LIBC MSVCRT 全称 Microsoft Visual - 掘金 (juejin.cn)](https://juejin.cn/post/7187346266311884858)

[MinGW-w64 for Windows - vector_qiu - 博客园 (cnblogs.com)](https://www.cnblogs.com/vectorqiu/p/17333558.html)





64位 amd64=x64=x86_64

32位 IA-32=x86

64位 arm64=aarch64



[【CPU 架构】x86、x86_64、x64、arm64、aarch64_x86架构和x64-CSDN博客](https://blog.csdn.net/be_racle/article/details/134764629)