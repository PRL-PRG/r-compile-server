#? stdlib
`proportions` <- function (x, margin = NULL) 
{
    if (length(margin)) 
        sweep(x, margin, marginSums(x, margin), `/`, check.margin = FALSE)
    else x/sum(x)
}

# Examples
m <- matrix(1:4, 2)
m
proportions(m, 1)

DF <- as.data.frame(UCBAdmissions)
tbl <- xtabs(Freq ~ Gender + Admit, DF)
tbl
proportions(tbl, "Gender")

