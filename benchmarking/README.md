# Benchmarks for the compile server

We reuse the benchmark suite from [RBenchmarking](https://github.com/reactorlabs/RBenchmarking/tree/master).

## Running the benchmarks

We need [ReBench](https://rebench.readthedocs.io/en/latest/) to run the benchmarks. 
To install it:

```bash
pip install rebench
```

Depending on your system, you might need to create a virtual env:

```bash
python -m venv rebench
source rebench/bin/activate
```

To run the benchmark:

```bash
./run.sh rebench.conf Benchmarks path/to/rsh_client path/to/gnur e:EXECUTOR <other rebench args>
```

For instance, to run the benchmarks for Rsh:

```bash 
./run.sh rebench.conf Benchmarks ../client ../server ../external/R/  "e:RSH"
```

`EXECUTOR` is one of `GNUR-R`, `RSH` or `all`. If you have more than 1 rebench argument (including `e`), 
quote all the arguments together.

Of course, you need to have both the server and the client compiled to be able to run the benchmarks.