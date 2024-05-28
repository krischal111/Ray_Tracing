# R2T2(RealTime Ray Tracing)
r2t2 is a realtime raytracing renderer we built as the final project for the Computer Graphics (EX603) course at Pulchowk Campus. It started off as an implementation of the [Raytracing in One Weekend](https://raytracing.github.io/books/RayTracingInOneWeekend.html) book, and we added more features on top.
- Parallel rendering on all available CPU cores (with OpenMP)
- An immediate mode gui (SDL+DearImGUI) with camera controls
- Triangle rendering and uv mapping
- OBJ file support (with tinyobj)
- Incremental rendering (averaging samples across time)

## Showcase
![](https://github.com/binitkc220/r2t2/blob/master/rendered_images/Tilicho_Lake.png)
> Tilicho lake(located in the Manang district of Nepal), ~8000 triangles, uv mapped satellite Imagery rendered by our Ray Tracer

<br><br>
![](https://github.com/binitkc220/r2t2/blob/master/rendered_images/spheres_high_resolution.png)
> Rendered image of random spheres with different materials in them

<br><br>
![](https://github.com/binitkc220/r2t2/blob/master/rendered_images/earth.png)
> Sphere with uv mapped image of Earth Map along with light source above

<br><br>
![](https://github.com/binitkc220/r2t2/blob/master/rendered_images/sphere_diffuse_dielectric.png)
> Diffuse and dielectric materials, perlin noise and uv mapping with image texture

<br><br>
![](https://github.com/binitkc220/r2t2/blob/master/rendered_images/soft_focus.png)
> Showcasing soft focus, large aperture in camera and circular bokeh due to circular aperture shape

[Presentation(Youtube)](https://www.youtube.com/watch?v=hNLaD_19Pg8&t=79s&ab_channel=BinitKc)
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

<a href="https://github.com/krischal111/Ray_Tracing/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=krischal111/Ray_Tracing" />
</a>
