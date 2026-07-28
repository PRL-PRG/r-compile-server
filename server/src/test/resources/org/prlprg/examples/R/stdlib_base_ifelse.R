#? stdlib
`ifelse` <- function (test, yes, no) 
{
    if (is.atomic(test)) {
        if (typeof(test) != "logical") 
            storage.mode(test) <- "logical"
        if (length(test) == 1 && is.null(attributes(test))) {
            if (is.na(test)) 
                return(NA)
            else if (test) {
                if (length(yes) == 1) {
                  yat <- attributes(yes)
                  if (is.null(yat) || (is.function(yes) && identical(names(yat), 
                    "srcref"))) 
                    return(yes)
                }
            }
            else if (length(no) == 1) {
                nat <- attributes(no)
                if (is.null(nat) || (is.function(no) && identical(names(nat), 
                  "srcref"))) 
                  return(no)
            }
        }
    }
    else test <- if (isS4(test)) 
        methods::as(test, "logical")
    else as.logical(test)
    ans <- test
    len <- length(ans)
    ypos <- which(test)
    npos <- which(!test)
    if (length(ypos) > 0L) 
        ans[ypos] <- rep(yes, length.out = len)[ypos]
    if (length(npos) > 0L) 
        ans[npos] <- rep(no, length.out = len)[npos]
    ans
}

# Examples
x <- c(6:-4)
sqrt(x)  #- gives warning
sqrt(ifelse(x >= 0, x, NA))  # no warning

## Note: the following also gives the warning !
ifelse(x >= 0, sqrt(x), NA)


## ifelse() strips attributes
## This is important when working with Dates and factors
x <- seq(as.Date("2000-02-29"), as.Date("2004-10-04"), by = "1 month")
## has many "yyyy-mm-29", but a few "yyyy-03-01" in the non-leap years
y <- ifelse(as.POSIXlt(x)$mday == 29, x, NA)
head(y) # not what you expected ... ==> need restore the class attribute:
class(y) <- class(x)
y
## This is a (not atypical) case where it is better *not* to use ifelse(),
## but rather the more efficient and still clear:
y2 <- x
y2[as.POSIXlt(x)$mday != 29] <- NA
## which gives the same as ifelse()+class() hack:
stopifnot(identical(y2, y))


## example of different return modes (and 'test' alone determining length):
yes <- 1:3
no  <- pi^(1:4)
utils::str( ifelse(NA,    yes, no) ) # logical, length 1
utils::str( ifelse(TRUE,  yes, no) ) # integer, length 1
utils::str( ifelse(FALSE, yes, no) ) # double,  length 1

