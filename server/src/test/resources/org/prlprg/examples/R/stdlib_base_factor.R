#? stdlib
`factor` <- function (x = character(), levels, labels = levels, exclude = NA, 
    ordered = is.ordered(x), nmax = NA) 
{
    if (is.null(x)) 
        x <- character()
    nx <- names(x)
    if (missing(levels)) {
        y <- unique(x, nmax = nmax)
        ind <- order(y)
        levels <- unique(as.character(y)[ind])
    }
    force(ordered)
    if (!is.character(x)) 
        x <- as.character(x)
    levels <- levels[is.na(match(levels, exclude))]
    f <- match(x, levels)
    if (!is.null(nx)) 
        names(f) <- nx
    if (missing(labels)) {
        levels(f) <- as.character(levels)
    }
    else {
        nlab <- length(labels)
        if (nlab == length(levels)) {
            nlevs <- unique(xlevs <- as.character(labels))
            at <- attributes(f)
            at$levels <- nlevs
            f <- match(xlevs, nlevs)[f]
            attributes(f) <- at
        }
        else if (nlab == 1L) 
            levels(f) <- paste0(labels, seq_along(levels))
        else stop(gettextf("invalid 'labels'; length %d should be 1 or %d", 
            nlab, length(levels)), domain = NA)
    }
    class(f) <- c(if (ordered) "ordered", "factor")
    f
}

# Examples
(ff <- factor(substring("statistics", 1:10, 1:10), levels = letters))
as.integer(ff)      # the internal codes
(f. <- factor(ff))  # drops the levels that do not occur
ff[, drop = TRUE]   # the same, more transparently

factor(letters[1:20], labels = "letter")

class(ordered(4:1)) # "ordered", inheriting from "factor"
z <- factor(LETTERS[3:1], ordered = TRUE)
## and "relational" methods work:
stopifnot(sort(z)[c(1,3)] == range(z), min(z) < max(z))

of <- ordered(ff)
stopifnot(identical(range(of, rev(of)), of[3:2]),
	  identical(max(of), of[2]))


## suppose you want "NA" as a level, and to allow missing values.
(x <- factor(c(1, 2, NA), exclude = NULL))
is.na(x)[2] <- TRUE
x  # [1] 1    <NA> <NA>
is.na(x)
# [1] FALSE  TRUE FALSE

## More rational, since R 3.4.0 :
factor(c(1:2, NA), exclude =  "" ) # keeps <NA> , as
factor(c(1:2, NA), exclude = NULL) # always did
## exclude = <character>
z # ordered levels 'A < B < C'
factor(z, exclude = "C") # does exclude
factor(z, exclude = "B") # ditto

## Now, labels maybe duplicated:
## factor() with duplicated labels allowing to "merge levels"
x <- c("Man", "Male", "Man", "Lady", "Female")
## Map from 4 different values to only two levels:
(xf <- factor(x, levels = c("Male", "Man" , "Lady",   "Female"),
                 labels = c("Male", "Male", "Female", "Female")))
#> [1] Male   Male   Male   Female Female
#> Levels: Male Female

## Using addNA()
Month <- airquality$Month
table(addNA(Month))
table(addNA(Month, ifany = TRUE))

