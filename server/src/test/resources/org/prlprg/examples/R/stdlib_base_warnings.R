#? stdlib
`warnings` <- function (...) 
{
    structure(baseenv()[["last.warning"]] %||% list(), dots = list(...), 
        class = "warnings")
}

# Examples
## NB this example is intended to be pasted in,
##    rather than run by example()
ow <- options("warn")
for(w in -1:1) {
   options(warn = w); cat("\n warn =", w, "\n")
   for(i in 1:3) { cat(i,"..\n"); m <- matrix(1:7, 3,4) }
   cat("--=--=--\n")
}
## at the end prints all three warnings, from the 'option(warn = 0)' above
options(ow) # reset to previous, typically 'warn = 0'
tail(warnings(), 2) # see the last two warnings only (via '[' method)

## Often the most useful way to look at many warnings:
summary(warnings())

ww <- warnings()
uw <- unique(ww)
sw <- summary(ww)
stopifnot(identical(c(ww[1], ww[3]), ww[c(1, 3)]),
          length(uw) == 1, nchar(names(uw)) > 10,
          length(sw) == 1, attr(sw, "counts") == 3)

op <- options(nwarnings = 10000) ## <- get "full statistics"
x <- 1:36; for(n in 1:13) for(m in 1:12) A <- matrix(x, n,m) # There were 105 warnings ...
summary(warnings())
options(op) # revert to previous (keeping 50 messages by default)

