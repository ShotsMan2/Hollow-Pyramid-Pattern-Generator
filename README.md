# Hollow Pyramid Pattern Generator

This project is an algorithmic implementation in C designed to render a **Hollow Symmetrical Pyramid** on the console. It demonstrates advanced control flow by differentiating between the "boundary" (edges) of the shape and the "void" (internal empty space).

## 📐 Mathematical Logic

The algorithm constructs the shape by managing three distinct zones for each row $i$:

1.  **Leading Spaces (Alignment):**
    Determines the horizontal position of the start.
    $$Space_{lead} = N - i$$

2.  **Boundary Rendering:**
    * **Peak ($i=1$):** A single star is placed.
    * **Other Rows ($i>1$):** Two stars are placed (Left Border & Right Border).

3.  **Internal Void (Spacing):**
    The empty space between the borders grows dynamically.
    $$Space_{internal} = 2i - 3$$

### Visual Breakdown (N=5):
* **Row 1:** Peak `*`
* **Row 2:** Border `*`, Space(1), Border `*` -> `* *`
* **Row 3:** Border `*`, Space(3), Border `*` -> `* *`
* **Row 4:** Border `*`, Space(5), Border `*` -> `* *`
* **Row 5:** Border `*`, Space(7), Border `*` -> `* *`

## ⚙️ Code Structure

* **Outer Loop:** Iterates through the vertical height ($1$ to $N$).
* **Conditional Logic:** Uses `if-else` blocks to handle the unique geometry of the pyramid's peak versus its body.
* **Inner Loops:** Separately handle indentation and internal gap width.

## 🚀 Usage

1.  Compile the source code:
    ```bash
    gcc main.c -o hollow_pyramid
    ```
2.  Run the executable:
    ```bash
    ./hollow_pyramid
    ```

---
*This repository demonstrates conditional loops and coordinate-based rendering in C.*
