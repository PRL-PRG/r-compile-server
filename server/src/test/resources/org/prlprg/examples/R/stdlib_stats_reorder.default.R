#? stdlib
`reorder.default` <- function (x, X, FUN = mean, ..., order = is.ordered(x), decreasing = FALSE) 
{
    scores <- tapply(X = X, INDEX = x, FUN = FUN, ...)
    structure((if (order) 
        ordered
    else factor)(x, levels = names(sort(scores, decreasing = decreasing, 
        na.last = TRUE))), scores = scores)
}

# Examples
require(graphics)

bymedian <- with(InsectSprays, reorder(spray, count, median))
boxplot(count ~ bymedian, data = InsectSprays,
        xlab = "Type of spray", ylab = "Insect count",
        main = "InsectSprays data", varwidth = TRUE,
        col = "lightgray")

bymedianR <- with(InsectSprays, reorder(spray, count, median, decreasing=TRUE))
stopifnot(exprs = {
    identical(attr(bymedian, "scores") -> sc,
              attr(bymedianR,"scores"))
    identical(nms <- names(sc), LETTERS[1:6])
    identical(levels(bymedian ), nms[isc <- order(sc)])
    identical(levels(bymedianR), nms[rev(isc)])
})

