#? stdlib
`print.kmeans` <- function (x, ...) 
{
    cat("K-means clustering with ", length(x$size), " clusters of sizes ", 
        paste(x$size, collapse = ", "), "\n", sep = "")
    cat("\nCluster means:\n")
    print(x$centers, ...)
    cat("\nClustering vector:\n")
    print(x$cluster, ...)
    cat("\nWithin cluster sum of squares by cluster:\n")
    print(x$withinss, ...)
    ratio <- sprintf(" (between_SS / total_SS = %5.1f %%)\n", 
        100 * x$betweenss/x$totss)
    cat(sub(".", getOption("OutDec"), ratio, fixed = TRUE), "Available components:\n", 
        sep = "\n")
    print(names(x))
    if (!is.null(x$ifault) && x$ifault == 2L) 
        cat("Warning: did *not* converge in specified number of iterations\n")
    invisible(x)
}
