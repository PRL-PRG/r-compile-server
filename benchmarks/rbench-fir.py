#!/usr/bin/env -S uv run --script
# /// script
# requires-python = ">=3.12"
# dependencies = ["bench"]
#
# [tool.uv.sources]
# bench = { git = "https://github.com/PRL-PRG/bench.git", rev = "085fac1713663b93b0f5c8778f335122068f297f" }
# ///
"""Measure FIŘ with rbench."""

import argparse
from collections import defaultdict
from dataclasses import field
import os
from pathlib import Path
import platform
import re
import shutil
import signal
from statistics import median
import subprocess
import sys
import tempfile
import time


SCRIPT = Path(__file__).resolve()
ROOT = SCRIPT.parent.parent
R_HOME = ROOT / "R"
SERVER = ROOT / "server"
LIBRARIES = SERVER / "target/rbench-classpath"
BASE_ENV = SERVER / "target/classes/org/prlprg/session/latest-baseenv.RDS"
READY = re.compile(r"RCS_READY ([1-9][0-9]*)\n")


def wait_for_port(server, log, deadline):
    deadline = min(deadline, time.monotonic() + 30)
    with log.open(encoding="utf-8", errors="replace") as lines:
        while time.monotonic() < deadline:
            if server.poll() is not None:
                raise RuntimeError(
                    f"Compile server exited with status {server.returncode}"
                )
            offset = lines.tell()
            line = lines.readline()
            if line.endswith("\n"):
                match = READY.fullmatch(line)
                if match:
                    port = int(match[1])
                    if port > 65535:
                        raise RuntimeError(f"Invalid compile server port {port}")
                    return port
            else:
                lines.seek(offset)
                time.sleep(0.05)
    raise RuntimeError("The compile server did not start within 30 seconds")


def stop_server(server):
    if server.poll() is None:
        server.terminate()
        try:
            server.wait(timeout=5)
        except subprocess.TimeoutExpired:
            server.kill()
            server.wait()


def terminate_group():
    # rbench gives the replicate its own process group.
    if os.getpgrp() == os.getpid():
        previous = signal.signal(signal.SIGTERM, signal.SIG_IGN)
        try:
            os.killpg(os.getpgrp(), signal.SIGTERM)
        finally:
            signal.signal(signal.SIGTERM, previous)


def read_frames(path, name, iterations):
    head = f"====== {name}, iteration "
    with path.open(encoding="utf-8", errors="replace") as output:
        lines = [line.rstrip("\n") for line in output if line.startswith(head)]
    if len(lines) != 2 * iterations:
        raise RuntimeError(
            "The R harness did not return the expected number of samples"
        )
    prefix = re.escape(head)
    ms = r"[0-9]+\.[0-9]{3} ms"
    for i in range(iterations):
        if lines[
            2 * i
        ] != f"====== {name}, iteration {i} started ======" or not re.fullmatch(
            rf"{prefix}{i} completed in {ms} \(gc {ms}, forced-gc {ms}, cpu {ms}\) ======",
            lines[2 * i + 1],
        ):
            raise RuntimeError(f"Invalid timing frame for call {i + 1}")
    return lines


def run_harness(args, work, file, deadline, port):
    profile = SCRIPT.with_name("fir-profile.R")
    expression = """
        local({
            harness <- new.env(parent = globalenv())
            # The harness flushes stdout after forced GC and before the timer starts.
            harness$flush <- compiler::cmpfun(function(con) {
                .rbench_fir_before_iteration()
                base::flush(con)
            })
            source(Sys.getenv("RCS_RBENCH_HARNESS"), local = harness)
            .rbench_fir_verify()
        })
    """
    calls = args.warmups + args.iterations
    env = {
        **os.environ,
        "TMPDIR": str(work),
        "R_ENABLE_JIT": "0",
        "R_JIT_STRATEGY": "3",
        "RCS_RBENCH_PORT": str(port),
        "RCS_RBENCH_THRESHOLD": str(args.threshold),
        "RCS_RBENCH_WARMUPS": str(args.warmups),
    }
    r_output = work / "r.log"
    try:
        with r_output.open("wb") as output:
            run = subprocess.run(
                [
                    str(args.r),
                    "--no-echo",
                    "--vanilla",
                    "-e",
                    expression,
                    "--args",
                    str(file),
                    str(calls),
                    str(args.size),
                    str(profile),
                ],
                cwd=file.parent,
                env=env,
                stdout=output,
                timeout=max(0, deadline - time.monotonic()),
                check=False,
            )
        if run.returncode != 0:
            raise RuntimeError(f"The R harness exited with status {run.returncode}")
        return read_frames(r_output, file.stem, calls)
    finally:
        if r_output.exists():
            with r_output.open(encoding="utf-8", errors="replace") as source:
                shutil.copyfileobj(source, sys.stderr)


def run_fir(args, work, file, deadline):
    if (platform.system(), platform.machine()) != ("Linux", "x86_64"):
        raise RuntimeError("FIŘ benchmarks require Linux x86-64 with RCP")
    if not args.r.samefile(R_HOME / "bin/R"):
        raise RuntimeError(
            "Build and use the vendored R with `make -C client/rcp setup`"
        )
    if not LIBRARIES.is_file() or not BASE_ENV.is_file():
        raise RuntimeError(
            "Build the compiler server with `make -C server rbench-build`"
        )

    log = work / "server.log"
    classpath = os.pathsep.join(
        [str(SERVER / "target/classes"), LIBRARIES.read_text().strip()]
    )
    java_env = {
        **os.environ,
        "R_HOME": str(R_HOME),
        "R_BIN": str(args.r),
        "CC": args.cc,
    }
    with log.open("wb") as output:
        server = subprocess.Popen(
            [
                args.java,
                f"-Djava.io.tmpdir={work}",
                "-cp",
                classpath,
                "org.prlprg.server.CompileServer",
                "--port",
                "0",
            ],
            cwd=ROOT,
            env=java_env,
            stdout=output,
            stderr=subprocess.STDOUT,
        )
    try:
        port = wait_for_port(server, log, deadline)
        print(f"Compile server PID {server.pid}, port {port}", file=sys.stderr)
        frames = run_harness(args, work, file, deadline, port)
        if server.poll() is not None:
            raise RuntimeError(f"Compile server exited with status {server.returncode}")
        return frames
    except (OSError, RuntimeError, subprocess.TimeoutExpired, KeyboardInterrupt):
        terminate_group()
        raise
    finally:
        stop_server(server)
        print("Compile server log", file=sys.stderr)
        with log.open(encoding="utf-8", errors="replace") as source:
            shutil.copyfileobj(source, sys.stderr)


def run_replicate(args):
    if not args.r.is_file():
        raise RuntimeError(f"Missing R binary {args.r}")
    deadline = time.monotonic() + args.timeout
    with tempfile.TemporaryDirectory(dir=args.scratch) as work:
        work = Path(work)
        # Setup functions can write caches beside the benchmark.
        corpus = work / "corpus"
        shutil.copytree(args.corpus, corpus)
        file = corpus / args.benchmark
        if not file.is_file():
            raise RuntimeError(f"Missing benchmark file {args.corpus / args.benchmark}")
        frames = run_fir(args, work, file, deadline)
        # Publish the batch after the harness verifies all samples.
        print("\n".join(frames), flush=True)


def worker(argv):
    parser = argparse.ArgumentParser()
    parser.add_argument("scratch", type=Path)
    parser.add_argument("corpus", type=Path)
    parser.add_argument("benchmark", type=Path)
    parser.add_argument("size", type=int)
    parser.add_argument("r", type=Path)
    parser.add_argument("java")
    parser.add_argument("cc")
    parser.add_argument("threshold", type=int)
    parser.add_argument("warmups", type=int)
    parser.add_argument("iterations", type=int)
    parser.add_argument("timeout", type=float)
    args = parser.parse_args(argv)
    try:
        run_replicate(args)
    except subprocess.TimeoutExpired:
        print(
            f"The replicate exceeded its {args.timeout:g} second limit", file=sys.stderr
        )
        return 124
    except (OSError, RuntimeError) as error:
        print(error, file=sys.stderr)
        return 1
    return 0


def summarize(report):
    medians = defaultdict(list)
    for execution in report.executions:
        if execution.is_failure():
            continue
        runtime = [
            sample.value
            for iteration in execution.iterations
            if not iteration.warmup
            for sample in iteration.samples
            if sample.metric == "runtime"
        ]
        if runtime:
            medians[execution.suite, execution.benchmark].append(median(runtime))
    if medians:
        print("\nProcess medians (ms)")
    for (suite, name), values in sorted(medians.items()):
        print(
            f"  {suite}/{name}  {median(values):.3f} "
            f"[{min(values):.3f} .. {max(values):.3f}] ({len(values)} processes)"
        )


def main():
    from bench import (
        BenchError,
        Metric,
        SharedBenchParams,
        SystemProbe,
        Time,
        bench_app,
    )
    from bench.core.process import interrupted

    env_checkout = os.environ.get("RBENCH_ROOT")

    class Params(SharedBenchParams):
        rbench_root: Path | None = field(
            default=Path(env_checkout) if env_checkout else None,
            metadata={
                "help": "Path to the r-benchmarks checkout. Defaults to RBENCH_ROOT."
            },
        )
        R: Path = R_HOME / "bin/R"
        java: str = "java"
        cc: str = "gcc"
        benchmarks: Path | None = field(
            default=None, metadata={"help": "Use a different benchmark directory."}
        )
        runs: int = field(
            default=5, metadata={"help": "Separate replicates per benchmark."}
        )
        warmups: int = field(default=50, metadata={"help": "Warmup calls per process."})
        jit_threshold: int = field(
            default=10, metadata={"help": "Call threshold for each JIT tier."}
        )
        iterations: int = field(
            default=10, metadata={"help": "Measured calls per process."}
        )
        timeout: float = field(
            default=1800.0, metadata={"help": "Timeout per process in seconds."}
        )

        def __post_init__(self):
            super().__post_init__()
            if self.jobs != 1:
                raise BenchError("Use one worker for peak performance measurements")
            if self.runs < 1 or self.iterations < 1:
                raise BenchError("Use positive run and iteration counts")
            if not 1 <= self.jit_threshold or self.warmups < 3 * self.jit_threshold + 2:
                raise BenchError(
                    "Use a positive JIT threshold and at least 3 * threshold + 2 warmup calls"
                )
            if self.warmups + self.iterations > 2**31 - 1:
                raise BenchError("The total call count must fit in an R integer")
            if not 0 < self.timeout < float("inf"):
                raise BenchError("Use a finite positive timeout")

    class FirCompileTime(Metric):
        def __init__(self):
            super().__init__("fir_compile_ms", unit="ms", direction="lower better")

        def process(self, data):
            requests = [
                {"kind": kind, "ms": int(ns) / 1_000_000}
                for kind, ns in re.findall(
                    r"\bRCS_COMPILE (closure|version) (\d+)[ \t]*$",
                    data.stderr or "",
                    re.MULTILINE,
                )
            ]
            if requests:
                yield self.get_sample(
                    sum(request["ms"] for request in requests),
                    extra={"requests": requests},
                )

    def suites(params):
        if params.rbench_root is None:
            raise BenchError(
                "Pass --rbench-root with the r-benchmarks checkout", exit_code=2
            )
        checkout = params.rbench_root.expanduser().resolve()
        if not (checkout / "rbench.py").is_file():
            raise BenchError(f"No rbench.py in {checkout}", exit_code=2)

        sys.dont_write_bytecode = True
        sys.path.insert(0, str(checkout))
        import rbench as rb

        env = {
            key: os.environ[key]
            for key in (
                "PATH",
                "HOME",
                "SHELL",
                "USER",
                "TMPDIR",
                "LD_LIBRARY_PATH",
                "TZ",
            )
            if key in os.environ
        }
        env.update(rb.DEFAULT_ENV)
        env["RCS_RBENCH_HARNESS"] = str(rb.BENCHMARKS_FOLDER / "harness.R")
        for key in ("R_LIBS", "R_LIBS_USER", "R_LIBS_SITE"):
            env[key] = " "

        def command(ctx):
            p = ctx.params
            corpus = (p.benchmarks or rb.BENCHMARKS_FOLDER).expanduser().absolute()
            return [
                sys.executable,
                str(SCRIPT),
                "--worker",
                scratch,
                str(corpus),
                str(Path(ctx.suite) / f"{ctx.benchmark}.R"),
                str(ctx.data.arg),
                str(p.R.expanduser().absolute()),
                p.java,
                p.cc,
                str(p.jit_threshold),
                str(p.warmups),
                str(p.iterations),
                str(p.timeout),
            ]

        return (
            rb.ALL_SUITES.with_cwd(ROOT, override=True)
            .with_env(env, override=True)
            .with_shuffle(rb.SHUFFLE_SEED)
            .with_command(command)
            .with_controller(lambda ctx: rb.InProcessWarmup(ctx.params.warmups))
            .with_success(rb.RbenchHarnessSuccess())
            .with_metric(rb.RbenchHarnessMetric(), Time(), FirCompileTime()),
        )

    try:
        with tempfile.TemporaryDirectory(prefix="rcs-rbench-") as scratch:
            app = (
                bench_app(params=Params, probe=SystemProbe())
                .generator(suites)
                .with_matrix(
                    run=lambda ctx: range(ctx.params.runs),
                    implementation=["fir"],
                )
                .with_label(lambda b: f"run{b.variant['run']}")
                .with_runs(1)
                .with_timeout(lambda ctx: ctx.params.timeout + 10)
            )
            report = app.run_cli()
        if interrupted():
            return 130
        summarize(report)
        return int(bool(report.failures))
    except BenchError as error:
        print(error, file=sys.stderr)
        return error.exit_code
    except KeyboardInterrupt:
        return 130


if __name__ == "__main__":
    if sys.argv[1:2] == ["--worker"]:
        raise SystemExit(worker(sys.argv[2:]))
    raise SystemExit(main())
