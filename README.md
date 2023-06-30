# Ray_Tracing

r2t2 is a realtime raytracing renderer we built as the final project for the Computer Graphics (EX603) course at Pulchowk Campus. It started off as an implementation of the [Raytracing in One Weekend](https://raytracing.github.io/books/RayTracingInOneWeekend.html) book, and we added more features on top.
- Parallel rendering on all available CPU cores (with OpenMP)
- An immediate mode gui (SDL+DearImGUI) with camera controls
- Triangle rendering and uv mapping
- OBJ file support (with tinyobj)
- Incremental rendering (averaging samples across time)

### Last Rendered Image 🥳
![alt text](https://github.com/binitkc220/Ray_Tracing/blob/uv_mapping_light/asset/gen/image.png)

### Installation

``` shell
git clone https://github.com/binitkc220/Ray_Tracing/ --recurse-submodules
git submodule update --init --recursive --depth=1
make
```

### Running

``` shell
./bin/release/rt > image.ppm
```

