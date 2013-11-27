Authentication library

## Requirements

FSBAuth Platform Requirements:

* iOS6.x or newer
* ARC

## Installation

#### Cocoapods
* Add local copy of [FSBTech podspecs repo](https://github.com/FSBTech/fsb-public-specs)
* Include `pod 'FSBAuth','~>0.0.2'` in the project's 'Podfile'
* Run `pod install`

#### Manual

## Usage
``` objectivec
[[FSBAuth shared] login:nil];
```

## ARC Support
FSBAuth fully supports ARC out of the box, there is no configuration necessary. 
