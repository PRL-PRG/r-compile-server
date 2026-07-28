#? stdlib
`gl` <- function (n, k, length = n * k, labels = seq_len(n), ordered = FALSE) 
{
    f <- rep_len(rep.int(seq_len(n), rep.int(k, n)), length)
    levels(f) <- as.character(labels)
    class(f) <- c(if (ordered) "ordered", "factor")
    f
}

# Examples
## First control, then treatment:
gl(2, 8, labels = c("Control", "Treat"))
## 20 alternating 1s and 2s
gl(2, 1, 20)
## alternating pairs of 1s and 2s
gl(2, 2, 20)

