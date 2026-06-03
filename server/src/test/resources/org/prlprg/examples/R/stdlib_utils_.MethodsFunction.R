#? stdlib
`.MethodsFunction` <- function (s3, s4, byclass) 
{
    info3 <- attr(s3, "info")
    info4 <- attr(s4, "info")
    info <- rbind(info3, info4)
    dups <- duplicated(c(rownames(info3), rownames(info4)))
    info <- info[!dups, , drop = FALSE]
    info <- info[order(rownames(info)), , drop = FALSE]
    structure(rownames(info), info = info, byclass = byclass, 
        class = "MethodsFunction")
}
