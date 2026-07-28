#? stdlib
`layout` <- function (mat, widths = rep.int(1, ncol(mat)), heights = rep.int(1, 
    nrow(mat)), respect = FALSE) 
{
    storage.mode(mat) <- "integer"
    mat <- as.matrix(mat)
    if (!is.logical(respect)) {
        respect <- as.matrix(respect)
        if (!is.matrix(respect) || any(dim(respect) != dim(mat))) 
            stop("'respect' must be logical or matrix with same dimension as 'mat'")
    }
    num.figures <- as.integer(max(mat))
    for (i in 1L:num.figures) if (match(i, mat, nomatch = 0L) == 
        0L) 
        stop(gettextf("layout matrix must contain at least one reference\nto each of the values {1 ... %d}\n", 
            num.figures), domain = NA)
    dm <- dim(mat)
    num.rows <- dm[1L]
    num.cols <- dm[2L]
    cm.widths <- if (is.character(widths)) 
        grep("cm", widths, fixed = TRUE)
    cm.heights <- if (is.character(heights)) 
        grep("cm", heights, fixed = TRUE)
    pad1.rm.cm <- function(v, cm.v, len) {
        if ((ll <- length(v)) < len) 
            v <- c(v, rep.int(1, len - ll))
        if (is.character(v)) {
            wcm <- v[cm.v]
            v[cm.v] <- substring(wcm, 1L, nchar(wcm, type = "c") - 
                3)
            v <- chartr(getOption("OutDec"), ".", v)
        }
        as.numeric(v)
    }
    widths <- pad1.rm.cm(widths, cm.widths, len = num.cols)
    heights <- pad1.rm.cm(heights, cm.heights, len = num.rows)
    if (is.matrix(respect)) {
        respect.mat <- as.integer(respect)
        respect <- 2
    }
    else {
        respect.mat <- matrix(0L, num.rows, num.cols)
    }
    .External.graphics(C_layout, num.rows, num.cols, mat, as.integer(num.figures), 
        col.widths = widths, row.heights = heights, cm.widths, 
        cm.heights, respect = as.integer(respect), respect.mat)
    invisible(num.figures)
}

# Examples
def.par <- par(no.readonly = TRUE) # save default, for resetting...

## divide the device into two rows and two columns
## allocate figure 1 all of row 1
## allocate figure 2 the intersection of column 2 and row 2
layout(matrix(c(1,1,0,2), 2, 2, byrow = TRUE))
## show the regions that have been allocated to each plot
layout.show(2)

## divide device into two rows and two columns
## allocate figure 1 and figure 2 as above
## respect relations between widths and heights
nf <- layout(matrix(c(1,1,0,2), 2, 2, byrow = TRUE), respect = TRUE)
layout.show(nf)

## create single figure which is 5cm square
nf <- layout(matrix(1), widths = lcm(5), heights = lcm(5))
layout.show(nf)


##-- Create a scatterplot with marginal histograms -----

x <- pmin(3, pmax(-3, stats::rnorm(50)))
y <- pmin(3, pmax(-3, stats::rnorm(50)))
xhist <- hist(x, breaks = seq(-3,3,0.5), plot = FALSE)
yhist <- hist(y, breaks = seq(-3,3,0.5), plot = FALSE)
top <- max(c(xhist$counts, yhist$counts))
xrange <- c(-3, 3)
yrange <- c(-3, 3)
nf <- layout(matrix(c(2,0,1,3),2,2,byrow = TRUE), c(3,1), c(1,3), TRUE)
layout.show(nf)

par(mar = c(3,3,1,1))
plot(x, y, xlim = xrange, ylim = yrange, xlab = "", ylab = "")
par(mar = c(0,3,1,1))
barplot(xhist$counts, axes = FALSE, ylim = c(0, top), space = 0)
par(mar = c(3,0,1,1))
barplot(yhist$counts, axes = FALSE, xlim = c(0, top), space = 0, horiz = TRUE)

par(def.par)  #- reset to default

