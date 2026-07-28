#? stdlib
`boxplot.matrix` <- function (x, use.cols = TRUE, ...) 
{
    groups <- if (use.cols) {
        split(c(x), rep.int(1L:ncol(x), rep.int(nrow(x), ncol(x))))
    }
    else split(c(x), seq(nrow(x)))
    if (length(nam <- dimnames(x)[[1 + use.cols]])) 
        names(groups) <- nam
    invisible(boxplot(groups, ...))
}

# Examples
## Very similar to the example in ?boxplot
mat <- cbind(Uni05 = (1:100)/21, Norm = rnorm(100),
             T5 = rt(100, df = 5), Gam2 = rgamma(100, shape = 2))
boxplot(mat, main = "boxplot.matrix(...., main = ...)",
        notch = TRUE, col = 1:4)

