PC版编译出来的库不能调用默认的实现，估计是PC编译的库还是有问题。

Android版本可以正常使用默认实现。
1、可以注册默认Callback
2、自定义JavaCallback可以不完全实现父类方法，交给默认实现
3、自定义JavaCallback实现回调时也可以安全调用super方法