#? stdlib
`mapply` <- function (FUN, ..., MoreArgs = NULL, SIMPLIFY = TRUE, USE.NAMES = TRUE) 
{
    FUN <- match.fun(FUN)
    dots <- list(...)
    answer <- .Internal(mapply(FUN, dots, MoreArgs))
    if (USE.NAMES && length(dots)) {
        if (is.null(names1 <- names(dots[[1L]])) && is.character(dots[[1L]])) 
            names(answer) <- if (length(answer)) 
                dots[[1L]]
            else character()
        else if (!is.null(names1)) 
            names(answer) <- names1
    }
    if (!isFALSE(SIMPLIFY)) 
        simplify2array(answer, higher = (SIMPLIFY == "array"))
    else answer
}

# Examples
mapply(rep, 1:4, 4:1)

mapply(rep, times = 1:4, x = 4:1)

mapply(rep, times = 1:4, MoreArgs = list(x = 42))

mapply(function(x, y) seq_len(x) + y,
       c(a =  1, b = 2, c = 3),  # names from first
       c(A = 10, B = 0, C = -10))

word <- function(C, k) paste(rep.int(C, k), collapse = "")
## names from the first, too:
utils::str(L <- mapply(word, LETTERS[1:6], 6:1, SIMPLIFY = FALSE))

mapply(word, "A", integer()) # gave Error, now list()

