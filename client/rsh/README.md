## Building

```sh
$ make dependencies
$ make
```

For development run:

```sh
$ make setup
```

which will create the `compile_commands.json` file for clangd.

You can pass `R_HOME=...` to the make command to specify the R installation to use.
It is not a bad idea to have a copy of the `../external/R` compiled for debugging.
To do that you can use the `../../tools/build-gnur.sh` script with `-d` option.
