#? stdlib
`agrep` <- function (pattern, x, max.distance = 0.1, costs = NULL, ignore.case = FALSE, 
    value = FALSE, fixed = TRUE, useBytes = FALSE) 
{
    pattern <- as.character(pattern)
    if (!is.character(x)) 
        x <- as.character(x)
    costs <- as.integer(.amatch_costs(costs))
    bounds <- .amatch_bounds(max.distance)
    .Internal(agrep(pattern, x, ignore.case, value, costs, bounds, 
        useBytes, fixed))
}

# Examples
agrep("lasy", "1 lazy 2")
agrep("lasy", c(" 1 lazy 2", "1 lasy 2"), max.distance = list(sub = 0))
agrep("laysy", c("1 lazy", "1", "1 LAZY"), max.distance = 2)
agrep("laysy", c("1 lazy", "1", "1 LAZY"), max.distance = 2, value = TRUE)
agrep("laysy", c("1 lazy", "1", "1 LAZY"), max.distance = 2, ignore.case = TRUE)

