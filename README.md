# IoTivity
This repo contains **IoTivity v1.2.1** source codes with all necessary Modification and Libs 
which are required to build IoTivity in Mac OSX. Just clone this repo or download zip.
All necessary Libs are given in this repo.

##Prerequites
###Scons
  1. Install Homebrew

  ```$ /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"```
  2. Install Scons 
  
  ```$ brew install scons```

###XCode
You must have XCode installed in your Mac.

##Build Command
Run following command in parent directory to build IoTivity:

```$ scons TARGET_OS=ios TARGET_ARCH=arm64 TARGET_TRANSPORT=IP WITH_TCP=YES RELEASE=no LOGGING=YES```

##Environments
* Mac OSX version : macOS Sierra 10.12
* iPhone 6 (Architecture : arm64)

**N.B.:** iPhone 6 is used to run sample iOS application(URL given below). As the architecture of 
      iPhone 6 is **arm64**, that's why we use **TARGET_ARCH=arm64**. If you are going to run your app
      in different iPhone, use that phone's architecture as target architecture.
      
##Result
If the build is successfully done, then the output of the build can be found in following folder:

`IoTivity/out/ios/arm64/debug/`
      
##Sample Applications
The following two applications show how to use **IoTivity** in iOS application.

####IoTivitySimpleServer
https://github.com/KamrujjamanAkon/IoTivitySimpleServer-iOS

####IoTivitySimpleClient
https://github.com/KamrujjamanAkon/IoTivitySimpleClient-iOS
