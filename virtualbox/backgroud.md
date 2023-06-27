# 前言
因為平常都是用ssh到虛擬機，因此希望自己的工作列是乾淨一點...
所以才需要讓VM背景執行<br/>

# 操作流程
- 停止正在運行的VM
- 開啟windows的power shell
- 進入到virtual box的資料夾，下面是預設的位置
    ```
    cd 'C:\Program Files\Oracle\VirtualBox'
    ```
- 下指令啟動虛擬機
    ```
    .\VBoxManage.exe startvm "<VM name>" --type headless
    ```
# REF
- https://medium.com/@chainchainer/%E6%8A%80%E8%A7%80%E9%BB%9E-%E5%A6%82%E4%BD%95%E8%AE%93virtualbox%E4%B8%8A%E7%9A%84%E8%99%9B%E6%93%AC%E6%A9%9F%E5%9C%A8%E8%83%8C%E6%99%AF%E6%A8%A1%E5%BC%8F%E4%B8%8B%E5%9F%B7%E8%A1%8C-cd05eaa0dda1
- https://superuser.com/questions/135498/run-virtualbox-in-background-without-a-window