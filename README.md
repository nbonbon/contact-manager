# Setup
```
meson setup builddir
```

# Build
```
cd builddir
meson compile
```

# Run Tests
```
cd builddir
meson test
```

# GTest Setup
https://mesonbuild.com/Using-wraptool.html

```
mkdir subprojects
meson wrap install gtest
```