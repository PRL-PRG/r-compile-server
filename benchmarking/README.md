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
rebench rebench.conf
```

Of course, you need to have both the server and the client compiled to be able to run the benchmarks.