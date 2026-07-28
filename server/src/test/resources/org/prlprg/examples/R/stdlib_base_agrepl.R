#? stdlib
`agrepl` <- function (pattern, x, max.distance = 0.1, costs = NULL, ignore.case = FALSE, 
    fixed = TRUE, useBytes = FALSE) 
{
    pattern <- as.character(pattern)
    if (!is.character(x)) 
        x <- as.character(x)
    costs <- as.integer(.amatch_costs(costs))
    bounds <- .amatch_bounds(max.distance)
    .Internal(agrepl(pattern, x, ignore.case, FALSE, costs, bounds, 
        useBytes, fixed))
}
