# Simple Game Engine
Is a simple game engine.

# Components

## Geometry
Is a package that contains all geometric structures, used into a game.
vertices:
- vec2D (x, y)
- vec3D (x, y, z)
- vec4D (x, y, z, w)

lines:
- line2D (vec2D, vec2D)
- line3D (vec3D, vec3D)
- line4D (vec4D, vec4D)

## Logging System
Simple console loggins system.
If is enable print the level of the log and the message.
Level of logs:
- INFO
- WARNING
- ERROR
- FATAL
- DEBUG

## Texture
A texture is an image applied on a Mesh.
In base of API there are varius implementation of the Texture:
- TextureOpenGL
- TextureVulkan (in progress)

The texture have:
- image (Image)
- id
- type (TextureType)


### Image
Is the structure at the base of Texture.
It si compose to:
- file path: lotation of the image file
- width
- height
- raw image datas

### TextureType
The texture type define how to read and manipolate the texture.
It can be:
- COLOR_TEXTURE (RGB)
- ALPHA_TEXTURE
- NORMAL_MAP
- DISPACEMENT_MAP
- LIGHT_MAP


