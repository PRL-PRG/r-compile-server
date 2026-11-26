# https://github.com/reactorlabs/RBenchmarking/blob/a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89/Benchmarks/shootout/regexdna/regexdna.r
# License: none stated, see server/doc/benchmark-licenses.md
# ------------------------------------------------------------------
# The Computer Language Shootout
# http://shootout.alioth.debian.org/
#
# Contributed by Leo Osvald
# ------------------------------------------------------------------

pattern1 <- c(
    "agggtaaa|tttaccct",
    "[cgt]gggtaaa|tttaccc[acg]",
    "a[act]ggtaaa|tttacc[agt]t",
    "ag[act]gtaaa|tttac[agt]ct",
    "agg[act]taaa|ttta[agt]cct",
    "aggg[acg]aaa|ttt[cgt]ccct",
    "agggt[cgt]aa|tt[acg]accct",
    "agggta[cgt]a|t[acg]taccct",
    "agggtaa[cgt]|[acg]ttaccct")

pattern2 <- matrix(c(
        c("B", "(c|g|t)"),
        c("D", "(a|g|t)"),
        c("H", "(a|c|t)"),
        c("K", "(g|t)"),
        c("M", "(a|c)"),
        c("N", "(a|c|g|t)"),
        c("R", "(a|g)"),
        c("S", "(c|g)"),
        c("V", "(a|c|g)"),
        c("W", "(a|t)"), 
        c("Y", "(c|t)")
), ncol=2, byrow=TRUE)

match_count <- function(ms) {
    l <- length(ms[[1]])
    fst <- ms[[1]][[1]]
    return(if (l > 1) l else if (fst != -1L) fst else 0)
}

regexdna <- function(args) {
    in_filename = args[[1]]
    f <- textConnection(in_filename)  # Port: was file(in_filename, "r")
    str <- paste(c(readLines(f), ""), collapse="\n")
    close(f)

    len1 <- nchar(str)
    str <- gsub(">.*\n|\n", "", str, perl=TRUE, useBytes=TRUE)
    len2 <- nchar(str)

    for (pat in pattern1)
        cat(pat, match_count(gregexpr(pat, str, useBytes=TRUE)), "\n")

    for (i in 1:nrow(pattern2))
        str <- gsub(pattern2[[i, 1]], pattern2[[i, 2]], str, perl=TRUE, 
                    useBytes=TRUE)

    cat("", len1, len2, nchar(str), sep="\n")
}

# Port: the argument is the input lines, not the size of the input file.
execute <- function(input) {
    regexdna(list(input))
}

# Port: upstream reads the output of fasta from the file fasta/fasta<n>.txt. This function makes
# the same lines (the fasta program of bench_shootout_fasta, without output).
fasta_input <- function(n) {
    last <- 42L
    to_lines <- function(chars) {
        starts <- seq(1L, length(chars), 60L)
        substring(paste(chars, collapse=""), starts, starts + 59L)
    }
    random_lines <- function(probs, syms, count) {
        rs <- double(count)
        for (i in seq_len(count)) {
            last <<- (last * 3877L + 29573L) %% 139968L
            rs[[i]] <- last / 139968
        }
        to_lines(syms[findInterval(rs, cumsum(probs), left.open=TRUE) + 1L])
    }
    alu <- strsplit(paste0(
        "GGCCGGGCGCGGTGGCTCACGCCTGTAATCCCAGCACTTTGG",
        "GAGGCCGAGGCGGGCGGATCACCTGAGGTCAGGAGTTCGAGA",
        "CCAGCCTGGCCAACATGGTGAAACCCCGTCTCTACTAAAAAT",
        "ACAAAAATTAGCCGGGCGTGGTGGCGCGCGCCTGTAATCCCA",
        "GCTACTCGGGAGGCTGAGGCAGGAGAATCGCTTGAACCCGGG",
        "AGGCGGAGGTTGCAGTGAGCCGAGATCGCGCCACTGCACTCC",
        "AGCCTGGGCGACAGAGCGAGACTCCGTCTCAAAAA"), "")[[1]]
    c(">ONE Homo sapiens alu", to_lines(rep_len(alu, 2L * n)),
      ">TWO IUB ambiguity codes",
      random_lines(c(0.27, 0.12, 0.12, 0.27, rep(0.02, 11)), strsplit("acgtBDHKMNRSVWY", "")[[1]], 3L * n),
      ">THREE Homo sapiens frequency",
      random_lines(c(0.3029549426680, 0.1979883004921, 0.1975473066391, 0.3015094502008),
                   c("a", "c", "g", "t"), 5L * n))
}

input <- fasta_input(15000L)
warmup_input <- fasta_input(500L)

#? benchmark: capture.output(execute(input))

# warmup
for (i in 1:12) {
  capture.output(execute(warmup_input))
}
