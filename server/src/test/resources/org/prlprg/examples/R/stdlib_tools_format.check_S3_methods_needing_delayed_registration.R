#? stdlib
`format.check_S3_methods_needing_delayed_registration` <- function (x, ...) 
{
    c(character(), if (length(bad <- x$bad)) {
        c("Suggested packages not available for checking:", strwrap(paste(bad, 
            collapse = " "), indent = 2L))
    }, if (length(mat <- x$mat)) {
        c("Apparent S3 methods needing delayed registration:", 
            sprintf("  %s %s %s", format(c("Package", mat[, 1L])), 
                format(c("Generic", mat[, 2L])), format(c("Method", 
                  mat[, 3L]))))
    }, if (length(reg <- x$reg)) {
        c("S3 methods using delayed registration:", sprintf("  %s %s %s %s", 
            format(c("Package", reg[, 1L])), format(c("Generic", 
                reg[, 2L])), format(c("Class", reg[, 3L])), format(c("Method", 
                reg[, 4L]))))
    })
}
