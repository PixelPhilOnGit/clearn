# 编译c代码&反汇编

```shell
# 生成hello.o 文件
gcc -g -c hello.c
# 反汇编
objdump -d hello.o

# 清楚看到每行c代码对应哪些汇编指令
objdump -d -S hello.o

# 查看对应生产商指令
objdump -d -S -M intel hello.o
```

# CPU中程序员最关心的部分
  - 控制器
  - 寄存器
  - 运算器

# cpu指令集
不同架构指令不同

## 怎么查看对应操作系统的指令集
```shell
# 1. windows查看命令
systeminfo

# 2. linux查看指令
lscpu
```

## 指令
有的操作码需要跟操作数，有的不需要
```
操作码       操作数        功能
mov           A，B       将B的值赋值给A
add           A, B       将A和B的值相加，并将结果赋给A
push          A          将A的值存储在栈中
pop           A          从栈中读取出值，并将其赋给A
call          A          调用函数A
ret           无
cmp           A, B       比较指令，指令执行完成后，Pc条件码寄存器会自动开始执行下一条指令
jne           A          jump if not equal, 
```

## 寄存器rdp, rsp

```
rbp(register base pointer): 栈基址寄存器（栈帧指针），指向当前栈帧的栈底地址
rsp(register stack pointer): 栈顶寄存器(栈指针)，指向栈顶元素

```