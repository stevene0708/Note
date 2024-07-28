# 紀錄

### 過程
- proxmox 照著網路上教學建立ARM VM，但啟動後還是會遇到Error: start failed: QEMU exit 1 
- 有嘗試過journalctl看不出哪裡錯誤，dmesg也是 
- 沒想法，直接到proxmox的shell下 qm start \<id\> 才會有比較看得懂的error msg，但error msg寫duplicate ehci ==> usb
- 過了一天，還是沒頭緒只好關閉hotplug usb選項就可以了，但又跑出其他warning，只好將scsi control改virtIO control，原本virtIO control single，並把disk關iothread即可
- 剛剛想要Reproduce發現條件只要virtIO control single ＋ Hotplug: USB + vm config set arch:aarch64 就會發生

### 小結
- 尚不知道root cause，有機會再來trace
