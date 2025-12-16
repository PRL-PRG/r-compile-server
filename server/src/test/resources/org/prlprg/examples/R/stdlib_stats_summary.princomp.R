#? stdlib
`summary.princomp` <- function (object, loadings = FALSE, cutoff = 0.1, ...) 
{
    object$cutoff <- cutoff
    object$print.loadings <- loadings
    class(object) <- "summary.princomp"
    object
}

# Examples
summary(pc.cr <- princomp(USArrests, cor = TRUE))
## The signs of the loading columns are arbitrary
print(summary(princomp(USArrests, cor = TRUE),
              loadings = TRUE, cutoff = 0.2), digits = 2)

