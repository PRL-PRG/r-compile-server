#? stdlib
`unlist` <- function (x, recursive = TRUE, use.names = TRUE) 
{
    if (.Internal(islistfactor(x, recursive))) {
        URapply <- if (recursive) 
            function(x, Fn) .Internal(unlist(rapply(x, Fn, how = "list"), 
                recursive, FALSE))
        else function(x, Fn) .Internal(unlist(lapply(x, Fn), 
            recursive, FALSE))
        lv <- unique(URapply(x, levels))
        nm <- if (use.names) 
            names(.Internal(unlist(x, recursive, use.names)))
        res <- match(URapply(x, as.character), lv)
        structure(res, levels = lv, names = nm, class = "factor")
    }
    else .Internal(unlist(x, recursive, use.names))
}

# Examples
unlist(options())
unlist(options(), use.names = FALSE)

l.ex <- list(a = list(1:5, LETTERS[1:5]), b = "Z", c = NA)
unlist(l.ex, recursive = FALSE)
unlist(l.ex, recursive = TRUE)

l1 <- list(a = "a", b = 2, c = pi+2i)
unlist(l1) # a character vector
l2 <- list(a = "a", b = as.name("b"), c = pi+2i)
unlist(l2) # remains a list

ll <- list(as.name("sinc"), quote( a + b ), 1:10, letters, expression(1+x))
utils::str(ll)
for(x in ll)
  stopifnot(identical(x, unlist(x)))

