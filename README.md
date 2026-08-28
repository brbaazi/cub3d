# cub3D 🎮

**cub3D** is a 3D game project from the **42 School curriculum**.

The project is inspired by **Wolfenstein 3D** and uses **raycasting** to create a 3D view from a 2D map.

The player can move around the map, rotate the camera, and see walls with different textures.

## 🎯 Project Goal

The main goal of cub3D is to understand the basic ideas behind **3D graphics** and game development.

The project uses mathematics, raycasting, textures, and the **MiniLibX** graphics library to create a simple first-person game.

## 🧠 What I Learned

During this project, I learned how to:

* Implement raycasting
* Calculate distances and angles
* Render a 3D view from a 2D map
* Handle player movement
* Handle keyboard events
* Detect collisions with walls
* Load and render XPM textures
* Parse and validate `.cub` map files
* Work with RGB colors
* Manage memory
* Use MiniLibX
* Build a game loop
* Organize a large C project

## 🛠️ Technologies

* **C**
* **MiniLibX**
* **Libft**
* **get_next_line**
* **Makefile**
* **Math / Trigonometry**
* **Raycasting**
* **XPM Textures**

## 🎮 Controls

| Key   | Action        |
| ----- | ------------- |
| `W`   | Move forward  |
| `S`   | Move backward |
| `A`   | Move left     |
| `D`   | Move right    |
| `←`   | Rotate left   |
| `→`   | Rotate right  |
| `ESC` | Exit the game |

## 📁 Project Structure

```text
cub3D/
│
├── execution/
│   ├── destroy_win.c
│   ├── find_xy_axis.c
│   ├── get_color_and_other.c
│   ├── load_img_addr.c
│   ├── normalize.c
│   ├── picture_to_xpm.c
│   ├── raycasting.c
│   ├── rendering_textures.c
│   ├── run_the_game.c
│   └── start_simulation.c
│
├── parsing/
│   ├── extract_rgb.c
│   ├── find_pp.c
│   ├── ft_realloc.c
│   ├── gc_malloc.c
│   ├── get_paths.c
│   ├── init_player.c
│   ├── pars_map.c
│   ├── pars_path.c
│   ├── space_rounded.c
│   ├── usual_functions.c
│   └── valid_map.c
│
├── texture/
│   ├── east_texture.xpm
│   ├── north_texture.xpm
│   ├── south_texture.xpm
│   └── west_texture.xpm
│
├── maps/
│   ├── map.cub
│   ├── map2.cub
│   └── mapd.cub
│
├── include/
│   └── cub3d.h
│
├── get_next_line/
│   ├── get_next_line.c
│   ├── get_next_line.h
│   └── get_next_line_utils.c
│
├── libft/
│   ├── libft.h
│   └── ...
│
├── main.c
└── Makefile
```

## 🔍 Main Parts

### Parsing

The `parsing/` directory handles the `.cub` file.

It checks:

* Map format
* Textures
* Floor color
* Ceiling color
* Player position
* Map validity
* Walls and spaces

### Raycasting

The `execution/raycasting.c` file contains the main raycasting logic.

Rays are sent from the player's position to find walls.

The distance to each wall is then used to calculate the height of the wall on the screen.

### Textures

The `texture/` directory contains the textures used for the four wall directions:

* North
* South
* East
* West

The textures are loaded as **XPM images**.

### Player

The player can:

* Move forward
* Move backward
* Move left
* Move right
* Rotate left
* Rotate right

Collision detection prevents the player from walking through walls.

## 🗺️ Map Format

The game uses `.cub` files.

Example:

```text
NO ./texture/north_texture.xpm
SO ./texture/south_texture.xpm
WE ./texture/west_texture.xpm
EA ./texture/east_texture.xpm

F 100,100,100
C 135,206,235

1111111111
1000000001
1000N00001
1000000001
1111111111
```

### Map Characters

| Character | Meaning             |
| --------- | ------------------- |
| `1`       | Wall                |
| `0`       | Empty space         |
| `N`       | Player facing North |
| `S`       | Player facing South |
| `E`       | Player facing East  |
| `W`       | Player facing West  |

## 🚀 Compilation

Clone the repository:

```bash
git clone <your-repository-url>
cd cub
```

Compile the project:

```bash
make
```

Run the game:

```bash
./cub3D maps/map.cub
```

You can also use another map:

```bash
./cub3D maps/map2.cub
```

## 🧹 Make Commands

Compile:

```bash
make
```

Remove object files:

```bash
make clean
```

Remove all generated files:

```bash
make fclean
```

Recompile everything:

```bash
make re
```

## 📚 External Projects

This project also uses two projects developed during the 42 curriculum:

### Libft

My own C library containing useful functions for string manipulation, memory management, lists, and more.

### get_next_line

A function used to read a file line by line.

## 💡 What This Project Taught Me

cub3D was an important project for understanding how a simple 3D engine works.

I learned how to combine:

```text
2D Map
   ↓
Raycasting
   ↓
Wall Detection
   ↓
Distance Calculation
   ↓
3D Projection
   ↓
Textures
   ↓
Final Image
```
42 School Student

