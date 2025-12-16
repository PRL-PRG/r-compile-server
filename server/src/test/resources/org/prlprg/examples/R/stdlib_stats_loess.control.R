#? stdlib
`loess.control` <- function (surface = c("interpolate", "direct"), statistics = c("approximate", 
    "exact", "none"), trace.hat = c("exact", "approximate"), 
    cell = 0.2, iterations = 4L, iterTrace = FALSE, ...) 
{
    stopifnot(length(iterations) == 1L, !is.na(iterations), as.integer(iterations) > 
        0L, length(iterTrace) == 1L, !is.na(iterTrace), as.integer(iterTrace) >= 
        0L)
    list(surface = match.arg(surface), statistics = match.arg(statistics), 
        trace.hat = match.arg(trace.hat), cell = cell, iterations = iterations, 
        iterTrace = iterTrace)
}

# Examples
