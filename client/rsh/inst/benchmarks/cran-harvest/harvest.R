#!/usr/bin/env Rscript
#
# Harvest realistic, user-facing R workloads from the most-downloaded CRAN
# packages and emit them as benchmarks for the rcp/rsh harness.
#
# WHAT IT COLLECTS
#   Only the code a *user* would actually run: the `\examples{}` sections of
#   each package's help pages (man/*.Rd). It deliberately ignores `tests/`,
#   `\dontrun{}` blocks (those need credentials / network / interactivity), and
#   everything else. `\donttest{}` IS kept -- that code is run by users, it is
#   merely skipped by some CRAN checks for time.
#
# DETERMINISM
#   Packages are installed from a dated Posit Public Package Manager snapshot
#   (see packages.csv -> snapshot_date), which pins exact versions for the
#   listed packages AND all transitive dependencies. Every candidate example is
#   validated the SAME way the harness verifies the --bc ("regular R") baseline:
#   in a throwaway subprocess (graphics to a null device, under set.seed(1)) it
#   is run interpreted to get a reference, then run byte-compiled and required to
#   match. An example is emitted only if it:
#     * loads + runs without error (interpreted AND byte-compiled), and
#     * produces an identical result + printed output when compiled.
#   So examples that throw errors or are non-deterministic under plain R are
#   dropped here instead of becoming failing benchmarks.
#
# THE HARNESS CONTRACT
#   Each emitted file defines `execute <- function(num_iter = 10L)` and lands in
#   <out>/<package>/<topic>.R -- a group folder under the benchmark root, exactly
#   like every other suite. run-benchmarks.sh discovers it automatically; nothing
#   else needs editing. The example body is what gets JIT-compiled and timed;
#   `library()` and the null device are set up once at source time. Packages are
#   resolved at run time via R_LIBS (set by run-benchmarks.sh), so the files
#   carry no absolute paths and are portable across machines/containers.
#
# USAGE
#   IMPORTANT: run this with THE R YOU BENCHMARK WITH. That R's version names the
#   library (lib/<R-version>) the runner later looks up, so they must match. The
#   *binary you launch* decides which R runs -- the R_HOME env var does NOT pick
#   it (a mismatch just prints "ignoring environment value of R_HOME" and uses
#   the binary's own R). So override the make variable, or call the binary:
#       make cran-harvest R_HOME=/path/to/your/R   # command line beats $R_HOME env
#       /path/to/your/R/bin/Rscript cran-harvest/harvest.R
#   Options (all optional):
#       --snapshot URL        override the CRAN snapshot (default: from packages.csv)
#       --binary              use Posit prebuilt Linux binaries (no compilation);
#                             distro codename auto-detected from /etc/os-release
#       --codename NAME       distro codename for --binary (e.g. noble, jammy)
#       --lib DIR             install/lookup library (default: ./lib/<R-version>)
#       --out DIR             output benchmark dir    (default: ../cran)
#       --manifest FILE       package list            (default: ./packages.csv)
#       --max-per-pkg N       cap examples per package, longest-running kept
#                             (default: 0 = keep all)
#       --ncpus N             parallel package installation (default: all cores)
#       --no-validate         export every example without running it (no
#                             determinism/timing filter, no cap, output-only
#                             verification deferred to benchmark run time)
#       --timeout S           hang-guard: drop an example whose validation does
#                             not finish in S seconds (default: 600; NOT a
#                             workload cap -- it only kills deadlocks)
#       --deps                also install Suggests (raises yield, much slower)
#       --no-install          skip installation; assume packages are present in --lib
#       --install-only        install packages into --lib, then stop (no generation)
#       --no-compile-deps     bake only the loaded package into BENCH_PACKAGES,
#                             not its dependency closure
#
# PACKAGE-LEVEL JIT
#   Each emitted file declares `BENCH_PACKAGES` -- the loaded package plus its
#   installed Depends/Imports closure. The unified harness runs
#   `rcp:::rcp_cmppkg()` over that list BEFORE timing, so calls from the example
#   into the package run JIT-compiled too, not just `execute`. This is the
#   counterpart of the byte-compiled package code the --bc baseline already gets
#   at install time.
#
# After `make cran-harvest`, `make benchmark` runs these alongside the synthetic
# suites with no further configuration.

find_self <- function() {
  args <- commandArgs(trailingOnly = FALSE)
  m <- grep("^--file=", args, value = TRUE)
  if (length(m)) {
    return(normalizePath(sub("^--file=", "", m[1])))
  }
  i <- match("-f", args)
  if (!is.na(i)) {
    return(normalizePath(args[i + 1]))
  }
  normalizePath("harvest.R")
}

parse_args <- function(args, defaults) {
  o <- defaults
  i <- 1
  while (i <= length(args)) {
    a <- args[i]
    take <- function() {
      i <<- i + 1
      args[i]
    }
    switch(a,
      "--snapshot" = o$snapshot <- take(),
      "--lib" = o$lib <- take(),
      "--out" = o$out <- take(),
      "--manifest" = o$manifest <- take(),
      "--max-per-pkg" = o$max_per_pkg <- as.integer(take()),
      "--timeout" = o$timeout <- as.numeric(take()),
      "--deps" = o$deps <- TRUE,
      "--no-install" = o$install <- FALSE,
      "--install-only" = o$install_only <- TRUE,
      "--no-compile-deps" = o$compile_deps <- FALSE,
      "--binary" = o$binary <- TRUE,
      "--codename" = o$codename <- take(),
      "--ncpus" = o$ncpus <- as.integer(take()),
      "--no-validate" = o$validate <- FALSE,
      stop("Unknown argument: ", a)
    )
    i <- i + 1
  }
  o
}

# Linux distro codename (e.g. "noble") for the Posit binary package mirror.
detect_codename <- function() {
  f <- "/etc/os-release"
  if (!file.exists(f)) {
    return(NA_character_)
  }
  m <- grep("^VERSION_CODENAME=", readLines(f, warn = FALSE), value = TRUE)
  if (!length(m)) {
    return(NA_character_)
  }
  gsub('^VERSION_CODENAME=|"', "", m[1])
}

HARVEST_DIR <- dirname(find_self())

# Packages install into a per-R-version library so the same tree can serve both
# the RCP R and the vanilla bc R (whose ABIs differ). The runner selects the
# matching one via R_LIBS. Key by major.minor -- R's package-ABI boundary
# and how R names its own user libraries -- so it is shared across patch releases.
RVER <- paste(R.version$major, sub("\\..*$", "", R.version$minor), sep = ".")

defaults <- list(
  snapshot     = NA_character_,
  lib          = file.path(HARVEST_DIR, "lib", RVER),
  out          = normalizePath(file.path(HARVEST_DIR, "..", "cran"), mustWork = FALSE),
  manifest     = file.path(HARVEST_DIR, "packages.csv"),
  max_per_pkg  = 0L, # 0 = keep all examples per package
  timeout      = 600,
  deps         = FALSE,
  install      = TRUE,
  install_only = FALSE,
  compile_deps = TRUE,
  binary       = FALSE,
  codename     = NA_character_,
  ncpus        = max(1L, parallel::detectCores()),
  validate     = TRUE
)
opt <- parse_args(commandArgs(trailingOnly = TRUE), defaults)

manifest <- utils::read.csv(opt$manifest, comment.char = "#", stringsAsFactors = FALSE)
packages <- manifest$package
if (is.na(opt$snapshot)) {
  date <- manifest$snapshot_date[1]
  cn <- if (opt$binary) {
    if (!is.na(opt$codename)) opt$codename else detect_codename()
  } else {
    NA
  }
  if (opt$binary && !is.na(cn)) {
    # Prebuilt Linux binaries from Posit PM -- no compilation. PM only serves
    # them when the request's User-Agent identifies the R version + platform.
    opt$snapshot <- sprintf("https://packagemanager.posit.co/cran/__linux__/%s/%s", cn, date)
    options(HTTPUserAgent = sprintf(
      "R/%s R (%s)", getRversion(),
      paste(getRversion(), R.version$platform, R.version$arch, R.version$os)
    ))
  } else {
    if (opt$binary) {
      message(
        "NOTE: --binary requested but no Linux distro codename detected; ",
        "falling back to source packages (pass --codename to force)."
      )
    }
    opt$snapshot <- sprintf("https://packagemanager.posit.co/cran/%s", date)
  }
}

dir.create(opt$lib, recursive = TRUE, showWarnings = FALSE)
opt$lib <- normalizePath(opt$lib)
.libPaths(c(opt$lib, .libPaths()))

message("R             : ", R.home(), " (", RVER, ")")
message("CRAN snapshot : ", opt$snapshot)
message("Library       : ", opt$lib)
message("Output dir    : ", opt$out)
message("Packages      : ", paste(packages, collapse = ", "))

# ---------------------------------------------------------------------------
# 1. Install the pinned packages (+ tooling) from the snapshot.
# ---------------------------------------------------------------------------
options(repos = c(CRAN = opt$snapshot))

ensure_installed <- function(pkgs, deps) {
  have <- rownames(utils::installed.packages(lib.loc = opt$lib))
  todo <- setdiff(pkgs, have)
  if (length(todo)) {
    message(
      "Installing: ", paste(todo, collapse = ", "),
      " (Ncpus=", opt$ncpus, ")"
    )
    utils::install.packages(
      todo,
      lib = opt$lib, Ncpus = opt$ncpus,
      dependencies = if (deps) TRUE else c("Depends", "Imports", "LinkingTo")
    )
  }
}

# callr gives us a fresh, crash-isolated subprocess per example. Strongly
# preferred: an arbitrary CRAN example must not be able to abort the harvest.
# Only needed when validating.
has_callr <- FALSE
if (opt$install) {
  if (opt$validate) ensure_installed("callr", deps = FALSE)
  ensure_installed(packages, deps = opt$deps)
}

# Install-only mode: just populate this R's library (used to provision the
# vanilla bc R in CI), then stop without (re)generating the benchmark files.
if (opt$install_only) {
  message("\nInstall-only: packages installed into ", opt$lib)
  quit(save = "no", status = 0)
}

if (opt$validate) {
  has_callr <- requireNamespace("callr", quietly = TRUE)
  if (!has_callr) {
    message(
      "NOTE: 'callr' unavailable -- validating examples in-process. ",
      "A crashing example will abort the harvest."
    )
  }
} else {
  message("NOTE: --no-validate -- exporting every example without running it.")
}

# Packages to rcp_cmppkg() before timing: the loaded package plus its installed
# Depends/Imports closure (base/recommended packages are excluded -- they are
# equally byte-compiled in the --bc baseline, so leaving them out keeps the
# comparison fair and the per-run setup cheap).
installed_db <- utils::installed.packages(lib.loc = c(opt$lib, .libPaths()))
base_pkgs <- rownames(utils::installed.packages(priority = "base"))
bench_packages_for <- function(pkg) {
  if (!opt$compile_deps) {
    return(pkg)
  }
  deps <- tryCatch(
    tools::package_dependencies(pkg,
      db = installed_db, recursive = TRUE,
      which = c("Depends", "Imports")
    )[[pkg]],
    error = function(e) character()
  )
  deps <- setdiff(intersect(deps, rownames(installed_db)), base_pkgs)
  unique(c(deps, pkg)) # dependencies first, package last
}

# ---------------------------------------------------------------------------
# 2. Extract the \examples code for one Rd topic.
#    Returns the example source as a single string, or NULL if there is none.
# ---------------------------------------------------------------------------
extract_example <- function(rd) {
  tmp <- tempfile(fileext = ".R")
  on.exit(unlink(tmp), add = TRUE)
  ok <- tryCatch(
    {
      tools::Rd2ex(rd, out = tmp, commentDontrun = TRUE, commentDonttest = FALSE)
      TRUE
    },
    error = function(e) FALSE
  )
  if (!ok || !file.exists(tmp)) {
    return(NULL)
  }

  lines <- readLines(tmp, warn = FALSE)
  marker <- grep("^### \\*\\* Examples", lines)
  if (!length(marker)) {
    return(NULL)
  } # Rd had no \examples section
  body <- lines[seq.int(marker[1] + 1L, length(lines))]

  # Anything left over from \dontrun is commented out by Rd2ex; require that at
  # least one real (non-comment, non-blank) line of code remains.
  code_lines <- body[!grepl("^\\s*(#|$)", body)]
  if (!length(code_lines)) {
    return(NULL)
  }
  paste(body, collapse = "\n")
}

# ---------------------------------------------------------------------------
# 3. Build the wrapper file content for a candidate example.
# ---------------------------------------------------------------------------
make_wrapper <- function(pkg, version, topic, rd_name, example_code, return_value, bench_pkgs) {
  indented <- paste0("    ", strsplit(example_code, "\n", fixed = TRUE)[[1]])
  ret <- if (return_value) "invisible(.res)" else "invisible(NULL)"
  header <- c(
    "## DO NOT EDIT -- generated by cran-harvest/harvest.R",
    sprintf("## Package : %s %s", pkg, version),
    sprintf("## Topic   : %s   (man/%s)", topic, rd_name),
    "## Source  : \\examples section (\\dontrun excluded, \\donttest kept)",
    sprintf("## Verify  : %s", if (return_value) "return value + output" else "output only"),
    "## (packages resolved via R_LIBS, set by run-benchmarks.sh)",
    "",
    sprintf("suppressWarnings(suppressMessages(library(%s)))", pkg),
    "## Packages the harness rcp_cmppkg()s before timing (deps first):",
    sprintf(
      "BENCH_PACKAGES <- c(%s)",
      paste(shQuote(bench_pkgs), collapse = ", ")
    ),
    "if (is.null(grDevices::dev.list())) try(grDevices::pdf(NULL), silent = TRUE)",
    "",
    "execute <- function(num_iter = 10L) {",
    "  .res <- NULL",
    "  for (.iter in seq_len(num_iter)) {",
    "    .res <- local({"
  )
  footer <- c(
    "    })",
    "  }",
    sprintf("  %s", ret),
    "}"
  )
  paste(c(header, indented, footer), collapse = "\n")
}

# ---------------------------------------------------------------------------
# 4. Validate a wrapper the SAME way the harness verifies the --bc baseline:
#    establish an interpreted reference, then run the byte-compiled function and
#    require identical result + output. This rejects examples that error or are
#    non-deterministic under plain ("regular") R, so they never become failing
#    benchmarks. Anything that throws makes validate() below return ok = FALSE.
#
#    The two runs also freeze the system clock at two DIFFERENT instants, so an
#    example whose result/output depends on the current time (e.g. withr's
#    with_timezone, which prints Sys.time()) is detected and dropped here --
#    otherwise it fails the harness when the clock advances between runs.
#    Returns list(elapsed, out_identical, val_identical).
# ---------------------------------------------------------------------------
validate_body <- function(code) {
  grDevices::pdf(NULL)
  on.exit(try(grDevices::dev.off(), silent = TRUE), add = TRUE)
  env <- new.env(parent = globalenv())
  eval(parse(text = code), envir = env)
  execute <- get("execute", envir = env)

  # Run `fn` with Sys.time()/Sys.Date()/date() frozen at `epoch`. The shims are
  # attached to the search path so unqualified calls in the example (and in code
  # the example eval()s, e.g. inside with_timezone()) resolve to them.
  # Validate with num_iter = 1 (a single pass): correctness/determinism of one
  # iteration is representative, it keeps the harvest fast, and it avoids dropping
  # examples that are only "too slow" because of the 100x benchmarking default.
  run_at <- function(fn, epoch) {
    shim <- list(
      Sys.time = function() .POSIXct(epoch, tz = "UTC"),
      Sys.Date = function() as.Date(.POSIXct(epoch, tz = "UTC")),
      date = function() {
        format(
          .POSIXct(epoch, tz = "UTC"),
          "%a %b %e %H:%M:%S %Y"
        )
      }
    )
    attach(shim, name = "rcp_clock_shim", warn.conflicts = FALSE)
    on.exit(detach("rcp_clock_shim"), add = TRUE)
    set.seed(1)
    out <- utils::capture.output(v <- fn(1L))
    list(out = out, v = v)
  }

  # Interpreted reference at clock T1.
  elapsed <- system.time(r1 <- run_at(execute, 1500000000))[["elapsed"]]
  # Byte-compiled run (the --bc baseline) at a DIFFERENT clock T2. For a normal
  # example the clock is irrelevant so this still verifies bc == interpreted; a
  # clock-dependent one produces different output here and is dropped.
  bc <- compiler::cmpfun(execute)
  r2 <- run_at(bc, 1700000000)

  list(
    elapsed = elapsed,
    out_identical = identical(r1$out, r2$out),
    val_identical = identical(r1$v, r2$v)
  )
}

validate <- function(code, libpath, timeout) {
  res <- tryCatch(
    {
      if (has_callr) {
        r <- callr::r(validate_body,
          args = list(code = code),
          libpath = libpath, timeout = timeout
        )
      } else {
        r <- validate_body(code)
      }
      c(list(ok = TRUE, error = NA_character_), r)
    },
    error = function(e) {
      list(
        ok = FALSE, error = conditionMessage(e),
        elapsed = NA_real_, out_identical = FALSE, val_identical = FALSE
      )
    }
  )
  res
}

# ---------------------------------------------------------------------------
# 5. Harvest every package.
# ---------------------------------------------------------------------------
unlink(opt$out, recursive = TRUE) # always emit a clean suite
dir.create(opt$out, recursive = TRUE, showWarnings = FALSE)

report <- list()
add <- function(...) report[[length(report) + 1L]] <<- data.frame(..., stringsAsFactors = FALSE)

libpath <- c(opt$lib, .libPaths())
timeout <- opt$timeout

for (pkg in packages) {
  version <- manifest$version[manifest$package == pkg]
  message("\n=== ", pkg, " ", version, " ===")

  db <- tryCatch(tools::Rd_db(pkg), error = function(e) NULL)
  if (is.null(db)) {
    message("  (could not load Rd database -- package installed?)")
    add(package = pkg, topic = NA, status = "drop", reason = "no Rd db", elapsed = NA)
    next
  }

  bench_pkgs <- bench_packages_for(pkg)

  candidates <- list()
  for (rd_name in names(db)) {
    topic <- sub("\\.Rd$", "", rd_name)
    code <- tryCatch(extract_example(db[[rd_name]]), error = function(e) NULL)
    if (is.null(code)) next

    if (!opt$validate) {
      # --no-validate: export every example without running it. Use output-only
      # verification (returning the value risks spurious mismatches on objects
      # that carry environments, e.g. plots); correctness is checked when the
      # benchmark actually runs under the harness.
      content <- make_wrapper(pkg, version, topic, rd_name, code,
        return_value = FALSE, bench_pkgs = bench_pkgs
      )
      candidates[[length(candidates) + 1L]] <- list(
        topic = topic, rd_name = rd_name, content = content,
        elapsed = NA_real_, verify = "not validated"
      )
      next
    }

    # First pass: assume we can return the value (strong verification).
    wrap_val <- make_wrapper(pkg, version, topic, rd_name, code,
      return_value = TRUE, bench_pkgs = bench_pkgs
    )
    v <- validate(wrap_val, libpath, timeout)

    if (!v$ok) {
      add(
        package = pkg, topic = topic, status = "drop",
        reason = paste0("error: ", substr(v$error, 1, 120)), elapsed = v$elapsed
      )
      next
    }
    if (!v$out_identical) {
      add(
        package = pkg, topic = topic, status = "drop",
        reason = "non-deterministic output", elapsed = v$elapsed
      )
      next
    }

    # If the value isn't reproducibly identical (e.g. it carries environments),
    # fall back to verifying via printed output only.
    return_value <- isTRUE(v$val_identical)
    content <- if (return_value) {
      wrap_val
    } else {
      make_wrapper(pkg, version, topic, rd_name, code,
        return_value = FALSE, bench_pkgs = bench_pkgs
      )
    }

    candidates[[length(candidates) + 1L]] <- list(
      topic = topic, rd_name = rd_name, content = content,
      elapsed = v$elapsed, verify = if (return_value) "value+output" else "output"
    )
  }

  if (!length(candidates)) {
    message("  no usable examples")
    next
  }

  # Keep the longest-running examples (most JIT signal); log anything dropped.
  # --max-per-pkg 0 (or negative) keeps them all. Without validation there are
  # no timings to rank by, so everything is kept regardless of the cap.
  kept <- candidates
  if (opt$validate) {
    ord <- order(vapply(candidates, `[[`, numeric(1), "elapsed"), decreasing = TRUE)
    candidates <- candidates[ord]
    kept <- candidates
  }
  if (opt$validate && opt$max_per_pkg > 0L && length(candidates) > opt$max_per_pkg) {
    kept <- candidates[seq_len(opt$max_per_pkg)]
    for (c in candidates[(opt$max_per_pkg + 1L):length(candidates)]) {
      add(
        package = pkg, topic = c$topic, status = "drop",
        reason = sprintf("over --max-per-pkg=%d cap", opt$max_per_pkg),
        elapsed = c$elapsed
      )
    }
    message(sprintf("  capped: kept %d of %d examples", opt$max_per_pkg, length(candidates)))
  }

  pkg_dir <- file.path(opt$out, pkg)
  dir.create(pkg_dir, recursive = TRUE, showWarnings = FALSE)
  for (c in kept) {
    writeLines(c$content, file.path(pkg_dir, paste0(c$topic, ".R")))
    add(
      package = pkg, topic = c$topic, status = "keep",
      reason = c$verify, elapsed = c$elapsed
    )
  }
  message(sprintf("  kept %d example(s)", length(kept)))
}

# ---------------------------------------------------------------------------
# 6. Report.
# ---------------------------------------------------------------------------
report_df <- do.call(rbind, report)
report_path <- file.path(opt$out, "harvest-report.csv")
utils::write.csv(report_df, report_path, row.names = FALSE)

kept <- sum(report_df$status == "keep")
dropped <- sum(report_df$status == "drop")
message("\n", strrep("=", 60))
message(sprintf("Harvest complete: %d benchmarks kept, %d candidates dropped", kept, dropped))
message("Per-package kept counts:")
tab <- table(report_df$package[report_df$status == "keep"])
for (p in packages) message(sprintf("  %-12s %d", p, if (p %in% names(tab)) tab[[p]] else 0L))
message("\nReport written to: ", report_path)
message("Benchmarks under  : ", opt$out)
message(strrep("=", 60))
