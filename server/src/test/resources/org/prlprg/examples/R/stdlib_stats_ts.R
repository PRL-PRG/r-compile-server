#? stdlib
`ts` <- function (data = NA, start = 1, end = numeric(), frequency = 1, 
    deltat = 1, ts.eps = getOption("ts.eps"), class = if (nseries > 
        1) c("mts", "ts", "matrix", "array") else "ts", names = if (!is.null(dimnames(data))) colnames(data) else paste("Series", 
        seq(nseries))) 
{
    if (is.data.frame(data)) 
        data <- data.matrix(data)
    if (is.matrix(data)) {
        nseries <- ncol(data)
        ndata <- nrow(data)
        dimnames(data) <- list(NULL, names)
    }
    else {
        nseries <- 1
        ndata <- length(data)
    }
    if (ndata == 0) 
        stop("'ts' object must have one or more observations")
    if (missing(frequency)) 
        frequency <- 1/deltat
    else if (missing(deltat)) 
        deltat <- 1/frequency
    if (frequency > 1 && 0 < (d <- abs(frequency - round(frequency))) && 
        d < ts.eps) 
        frequency <- round(frequency)
    if (!missing(start)) 
        start <- as.numeric(start)
    if (length(start) > 1L) {
        start <- start[1L] + (start[2L] - 1)/frequency
    }
    if (!missing(end)) 
        end <- as.numeric(end)
    if (length(end) > 1L) {
        end <- end[1L] + (end[2L] - 1)/frequency
    }
    if (missing(end)) 
        end <- start + (ndata - 1)/frequency
    else if (missing(start)) 
        start <- end - (ndata - 1)/frequency
    if (start > end) 
        stop("'start' cannot be after 'end'")
    cycles <- as.numeric((end - start) * frequency)
    if (abs(round(cycles) - cycles) > ts.eps * max(cycles, 1)) 
        stop("'end' must be a whole number of cycles after 'start'")
    nobs <- floor(cycles + 1.01)
    if (nobs != ndata) 
        data <- if (NCOL(data) == 1) {
            if (ndata < nobs) 
                rep_len(data, nobs)
            else if (ndata > nobs) 
                data[1L:nobs]
        }
        else {
            if (ndata < nobs) 
                data[rep_len(1L:ndata, nobs), ]
            else if (ndata > nobs) 
                data[1L:nobs, ]
        }
    attr(data, "tsp") <- c(start, end, frequency)
    if (!is.null(class) && class[[1]] != "none") 
        attr(data, "class") <- class
    data
}

# Examples
require(graphics)

ts(1:10, frequency = 4, start = c(1959, 2)) # 2nd Quarter of 1959
print( ts(1:10, frequency = 7, start = c(12, 2)), calendar = TRUE)
# print.ts(.)
## Using July 1954 as start date:
gnp <- ts(cumsum(1 + round(rnorm(100), 2)),
          start = c(1954, 7), frequency = 12)
plot(gnp) # using 'plot.ts' for time-series plot

\donttest{utils:: methods(class = "ts") # all functions with methods available for "ts"}

## "ts" methods for head() and tail()
utils:: head(lynx, 4)
utils:: tail(lynx, -7)
 stopifnot(is.ts(head(lynx, -6)),
                     is.ts(tail(lynx, 3)))


## Multivariate
z <- ts(matrix(rnorm(300), 100, 3), start = c(1961, 1), frequency = 12)
class(z)
is.mts(z)
head(z) # "ts" method ==> incl. times:
plot(z)
plot(z, plot.type = "single", lty = 1:3)

## A phase plot:
plot(nhtemp, lag(nhtemp, 1), cex = .8, col = "blue",
     main = "Lag plot of New Haven temperatures")

