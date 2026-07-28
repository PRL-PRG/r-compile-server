#? stdlib
`.recursiveCallTest` <- function (x, fname) 
{
    if (is(x, "call")) {
        if (identical(x[[1L]], quote(standardGeneric))) {
            if (!identical(x[[2L]], fname)) 
                warning(gettextf("the body of the generic function for %s calls 'standardGeneric' to dispatch on a different name (\"%s\")!", 
                  sQuote(fname), paste(as.character(x[[2L]]), 
                    collapse = "\n")), domain = NA)
            TRUE
        }
        else {
            for (i in seq.int(from = 2L, length.out = length(x) - 
                1L)) {
                if (Recall(x[[i]], fname)) 
                  return(TRUE)
            }
            FALSE
        }
    }
    else if (is(x, "language")) {
        for (i in seq.int(from = 2L, length.out = length(x) - 
            1L)) {
            if (Recall(x[[i]], fname)) 
                return(TRUE)
        }
        FALSE
    }
    else FALSE
}
