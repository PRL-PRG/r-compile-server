#? stdlib
`droplevels.factor` <- function (x, exclude = if (anyNA(levels(x))) NULL else NA, ...) 
factor(x, exclude = exclude)
