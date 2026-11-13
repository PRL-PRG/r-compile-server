# https://github.com/reactorlabs/RBenchmarking/blob/a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89/Benchmarks/shootout/reversecomplement/reversecomplement_2.r
# License: none stated, see server/doc/benchmark-licenses.md
# ------------------------------------------------------------------
# The Computer Language Shootout
# http://shootout.alioth.debian.org/
#
# Contributed by Leo Osvald
# ------------------------------------------------------------------

codes <- c(
    "A", "C", "G", "T", "U", "M", "R", "W", "S", "Y", "K", "V", "H", "D", "B",
    "N")
complements <- c(
    "T", "G", "C", "A", "A", "K", "Y", "W", "S", "R", "M", "B", "D", "H", "V",
    "N")
comp_map <- NULL
comp_map[codes] <- complements
comp_map[tolower(codes)] <- complements

reversecomplement_2 <- function(args) {
    f <- textConnection(args[[1]])  # Port: was file(args[[1]], "r")
    lines <- readLines(f)
    for (i in 1:length(lines)) {
        codes <- strsplit(lines[[i]], split="")[[1]]
        if (codes[[1]] == '>')
            cat(lines[[i]], "\n", sep="")
        else {
            cat(paste(comp_map[codes], collapse=""), "\n",
                sep="")
        }
    }
    close(f)
}

# Port: the argument is the input lines, not the size of the input file.
execute <- function(input) {
    reversecomplement_2(list(input))
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
warmup_input <- fasta_input(30L)

#? benchmark: capture.output(execute(input))

# warmup
for (i in 1:12) {
  capture.output(execute(warmup_input))
}
