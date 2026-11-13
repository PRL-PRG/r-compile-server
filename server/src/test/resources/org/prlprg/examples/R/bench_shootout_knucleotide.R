# https://github.com/reactorlabs/RBenchmarking/blob/a92447b37a03e96f8da1e18eb3cd8ab3b46fbf89/Benchmarks/shootout/knucleotide/knucleotide.r
# License: none stated, see server/doc/benchmark-licenses.md
# ------------------------------------------------------------------
# The Computer Language Shootout
# http://shootout.alioth.debian.org/
#
# Contributed by Leo Osvald
# ------------------------------------------------------------------

gen_freq <- function(seq, frame) {
    frame <- frame - 1L
    ns <- length(seq) - frame
    h <- new.env(emptyenv(), hash=TRUE)
    for (i in 1:ns) {
        subseq_str = paste(seq[i:(i + frame)], collapse="", sep="")
	if (exists(subseq_str, h, inherits=FALSE))
	    cnt <- get(subseq_str, h, inherits=FALSE)
	else
	    cnt <- 0L
	assign(subseq_str, cnt + 1L, h)
    }
    return(sapply(ls(h), function(k) get(k, h, inherits=FALSE)))
}

sort_seq <- function(seq, len) {
    fs <- gen_freq(seq, len)
    seqs <- names(fs)
    inds <- order(-fs, seqs)
#    cat(paste.(seqs[inds], 100 * fs[inds] / sum(fs), collapse="\n", digits=3),
    cat(paste(seqs[inds], 100 * fs[inds] / sum(fs), collapse="\n"),
        "\n")
}

find_seq <- function(seq, s) {
    freqs <- gen_freq(seq, nchar(s))
    if (s %in% names(freqs))
        return(freqs[[s]])
    return(0L)
}

knucleotide <- function(args) {
    in_filename = args[[1]]
    f <- textConnection(in_filename)  # Port: was file(in_filename, "r")
    while (length(line <- readLines(f, n=1, warn=FALSE))) {
        first_char <- substr(line, 1L, 1L)
        if (first_char == '>' || first_char == ';')
            if (substr(line, 2L, 3L) == 'TH')
                break
    }

    n <- 0L
    cap <- 8L
    str_buf <- character(cap)
    while (length(line <- scan(f, what="", nmax=1, quiet=TRUE))) {
        first_char <- substr(line, 1L, 1L)
        if (first_char == '>' || first_char == ';')
            break
        n <- n + 1L
        # ensure O(N) resizing (instead of O(N^2))
        str_buf[[cap <- if (cap < n) 2L * cap else cap]] <- ""
        str_buf[[n]] <- line
    }
    length(str_buf) <- n
    close(f)
    seq <- strsplit(paste(str_buf, collapse=""), split="")[[1]]

    for (frame in 1:2)
        sort_seq(seq, frame)
    for (s in c("GGT", "GGTA", "GGTATT", "GGTATTTTAATT", "GGTATTTTAATTTATAGT"))
        cat(find_seq(seq, tolower(s)), sep="\t", s, "\n")
}

# Port: the unused helper `paste.` (it calls `.Internal(paste(...))`) is deleted.

# Port: the argument is the input lines, not the size of the input file.
execute <- function(input) {
    knucleotide(list(input))
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

input <- fasta_input(200L)
warmup_input <- fasta_input(110L)

#? benchmark: capture.output(execute(input))

# warmup
for (i in 1:12) {
  capture.output(execute(warmup_input))
}
