#? stdlib
`se.aov` <- function (object, n, type = "means") 
{
    rdf <- object$df.residual
    rse <- sqrt(sum(object$residuals^2)/rdf)
    if (type == "effects") 
        result <- rse/sqrt(n)
    if (type == "means") 
        result <- lapply(n, function(x, d) {
            nn <- unique(x)
            nn <- nn[!is.na(nn)]
            mat <- outer(nn, nn, function(x, y) 1/x + 1/y)
            dimnames(mat) <- list(paste(nn), paste(nn))
            d * sqrt(mat)
        }, d = rse)
    attr(result, "type") <- type
    class(result) <- "mtable"
    result
}
