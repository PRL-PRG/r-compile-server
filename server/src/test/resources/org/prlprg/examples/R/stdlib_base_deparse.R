#? stdlib
`deparse` <- function (expr, width.cutoff = 60L, backtick = mode(expr) %in% 
    c("call", "expression", "(", "function"), control = c("keepNA", 
    "keepInteger", "niceNames", "showAttributes"), nlines = -1L) 
.Internal(deparse(expr, width.cutoff, backtick, .deparseOpts(control), 
    nlines))

# Examples
require(stats); require(graphics)

deparse(args(lm))
deparse(args(lm), width.cutoff = 500)

myplot <- function(x, y) {
    plot(x, y, xlab = deparse1(substitute(x)),
               ylab = deparse1(substitute(y)))
}

e <- quote(`foo bar`)
deparse(e)
deparse(e, backtick = TRUE)
e <- quote(`foo bar`+1)
deparse(e)
deparse(e, control = "all") # wraps it w/ quote( . )

