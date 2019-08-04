<p align="center">
  <div align="center">
   <img src="assets/gnl_graph_2.png" width="500px"</img><br>
    <em><i>Whatever dies, really does not die...</i></em>
  </div>
</p>

# Get next line

For this project, I was tasked with writing a function that would allow me to read a line ending with a ```'\n'``` character from a file descriptor without knowing its size beforehand.. 

I practiced working with dynamic memory allocation - both on the heap and the stack as well with commands such as ```malloc```, ```open```, ```read```, and ```close```.

After completion, I was able to add this function to my [Libft](https://github.com/micriver/Libft.git) for use in future projects.

**Project Document:**
[get_next_line.pdf](https://github.com/micriver/get_next_line/blob/master/docs/get_next_line.en.pdf)

All functions were written according to 42's coding standard,
[the Norm](https://github.com/micriver/docs/norme.en%20.pdf).


## Installation

Download the repository by copying and pasting the commands below.

```bash
git clone https://github.com/micriver/get_next_line.git
cd get_next_line
```

## Usage

After cloning the repository, you can compile the ```get_next_line.c``` function with one of the ```main.c``` files from ```/filetests```, with the command:

```bash
sh filetests/compile.sh
```
You can then return lines from an input file with:

```bash
./test_gnl filetests/<input_file>
```

![Poem.txt output](https://github.com/micriver/get_next_line/blob/master/assets/test_gnl_run_command.png)
