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

It is not a bad idea to have `../../R` compiled for debugging.
To do that you can use the `../../tools/build-gnur.sh` script with `DEBUG=true`.
