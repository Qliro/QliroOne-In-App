# QliroOne SDK for Android

## Installation

### Gradle

1. Add qliroone to your dependencies
```groovy
dependencies {
  ...
    implementation 'com.qliro:qliroone:1.0.1'
  ...
}
```

### Manual

1. Download the [latest release](https://github.com/Qliro-AB/QliroOne-In-App/releases/latest) and add it to your project.
Typically to `my-project/app/libs/qliroone.aar`.

2. Make sure that the projects dependecies in `build.gradle` implements the library.
```groovy
dependencies {
  ...
    implementation fileTree(dir: 'libs', include: ['*.aar'])
  ...
}
```
