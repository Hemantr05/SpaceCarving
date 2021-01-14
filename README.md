# SpaceCarving

The approach is specifically designed to:

(1) build 3D shapes that allow faithful reproduction of all input photographs, 

(2) resolve the complexinteractions between occlusion, parallax, shading, and their effects on arbitrary collections of photographs of a scene, and

(3) follow a “least commitment” approach to 3D shape recovery.


# How to run

``` g++ carve.cpp -o carve `pkg-config --cflags --libs opencv` ```



# Reference

[a link][http://www.cs.cmu.edu/~seitz/papers/tr692.pdf]
