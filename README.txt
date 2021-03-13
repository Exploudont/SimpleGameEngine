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