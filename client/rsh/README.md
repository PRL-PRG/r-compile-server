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

## FIŘ stubs

Code the server compiles from FIŘ contains *stubs*: versions the server hasn't compiled yet, which
run a fallback until it has (see `../../server/doc/lazy-versions.md`). `src/fir_stubs.cpp` is what
connects them to the server:

```r
rsh::rsh_fir_connect("0.0.0.0", 8980L)  # from now on, a stub's first call asks for its version
rsh::rsh_fir_drain()                    # wait until every request so far is answered
```

Until `rsh_fir_connect` is called, stubs run their fallbacks forever. The `deterministic` argument
makes a stub's second call wait for the compiled version (the server's tests use it).
