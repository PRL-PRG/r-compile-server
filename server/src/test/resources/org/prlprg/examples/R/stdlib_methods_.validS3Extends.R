#? stdlib
`.validS3Extends` <- function (classDef1, classDef2) 
{
    slots2 <- classDef2@slots
    if (length(slots2) > 0) {
        n2 <- names(slots2)
        slots1 <- classDef1@slots
        n1 <- names(slots1)
        bad <- character()
        for (what in n2[n2 %in% n1]) if (!extends(slots1[[what]], 
            slots2[[what]])) {
            message(gettextf("slot %s: class %s should extend class %s", 
                sQuote(what), dQuote(slots1[[what]]), dQuote(slots2[[what]])), 
                domain = NA)
            bad <- c(bad, what)
        }
        if (length(bad) > 0) 
            stop(gettextf("invalid S4 class corresponding to S3 class: slots in  S4 version must extend corresponding slots in S3 version: fails for %s", 
                paste0("\"", bad, "\"", collapse = ", ")), domain = NA)
    }
    TRUE
}
