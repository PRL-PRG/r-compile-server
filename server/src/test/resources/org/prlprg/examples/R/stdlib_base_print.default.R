#? stdlib
`print.default` <- function (x, digits = NULL, quote = TRUE, na.print = NULL, print.gap = NULL, 
    right = FALSE, max = NULL, width = NULL, useSource = TRUE, 
    ...) 
{
    args <- pairlist(digits = digits, quote = quote, na.print = na.print, 
        print.gap = print.gap, right = right, max = max, width = width, 
        useSource = useSource, ...)
    missings <- c(missing(digits), missing(quote), missing(na.print), 
        missing(print.gap), missing(right), missing(max), missing(width), 
        missing(useSource))
    .Internal(print.default(x, args, missings))
}

# Examples
pi
print(pi, digits = 16)
LETTERS[1:16]
print(LETTERS, quote = FALSE)

M <- cbind(I = 1, matrix(1:10000, ncol = 10,
                         dimnames = list(NULL, LETTERS[1:10])))
utils::head(M)        # makes more sense than
print(M, max = 1000)  # prints 90 rows and a message about omitting 910

(x <- 2^seq(-8, 30, by=1/4)) # auto-prints; by default all in "exponential" format
prI <- function(x) noquote(format(x, scientific = FALSE))
prI(x) # prints more "nicely" (using a bit more space)

