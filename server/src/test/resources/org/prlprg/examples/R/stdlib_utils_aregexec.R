#? stdlib
`aregexec` <- function (pattern, text, max.distance = 0.1, costs = NULL, ignore.case = FALSE, 
    fixed = FALSE, useBytes = FALSE) 
{
    costs <- as.integer(.amatch_costs(costs))
    bounds <- .amatch_bounds(max.distance)
    .Internal(aregexec(as.character(pattern), as.character(text), 
        bounds, costs, ignore.case, fixed, useBytes))
}

# Examples
## Cf. the examples for agrep.
x <- c("1 lazy", "1", "1 LAZY")
aregexec("laysy", x, max.distance = 2)
aregexec("(lay)(sy)", x, max.distance = 2)
aregexec("(lay)(sy)", x, max.distance = 2, ignore.case = TRUE)
m <- aregexec("(lay)(sy)", x, max.distance = 2)
regmatches(x, m)

