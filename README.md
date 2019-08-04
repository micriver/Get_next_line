<p align="center">
  <div align="center">
   <img src="assets/gnl_graph.png" width="425px"</img><br>
  </div>
</p>

# Get_next_line

For this project, I was tasked with writing a function that would allow me to read a line ending with a ```'\n``` character from a file descriptor. 

I practiced working with dynamic memory allocation, commands such as ```malloc```, ```open```, ```read```, and ```close```. I continued working with pointers and I learned new C syntax.

After completion, I was able to add this function to my [Libft](https://github.com/micriver/Libft.git) for use in future projects.

**Project Document:**
[get_next_line.pdf](https://github.com/micriver/docs/get_next_line.en%20.pdf)

All functions were written according to 42's coding standard,
[the Norm](https://github.com/micriver/docs/norme.en%20.pdf).


## Installation

Download the repository by copying and pasting the commands below.

```bash
git clone https://github.com/micriver/get_next_line.git
cd get_next_line
```

## Usage

After cloning the repository, you can compile the ```get_next_line.c``` function with one of the mains provide in the directory called ```/filetests```, like so:

```bash
gcc -I get_next_line.h get_next_line.c \ 
libft.a <main-file-from-/filetests> -o <output_name>
```
Then read the next line (or all the lines) from your input file with:

```bash
./<output_name> <input_file>
```

### Still have to add compile.sh usage!!
