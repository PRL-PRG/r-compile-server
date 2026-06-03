#? stdlib
`prepare3_Rd` <- function (Rd, Rdfile, msglevel = 0) 
{
    keep <- rep.int(TRUE, length(Rd))
    checkEmpty <- function(x, this) {
        if (this) 
            return(TRUE)
        if (is.list(x)) 
            for (xx in x) this <- checkEmpty(xx, this)
        else {
            tag <- attr(x, "Rd_tag")
            if (!is.null(tag)) 
                switch(tag, USERMACRO = , `\\newcommand` = , 
                  `\\renewcommand` = , COMMENT = {
                  }, VERB = , RCODE = , TEXT = if (any(grepl("[^[:space:]]", 
                    s, perl = TRUE, useBytes = TRUE))) return(TRUE), 
                  return(TRUE))
        }
        this
    }
    for (i in seq_along(Rd)) {
        this <- FALSE
        s0 <- section <- Rd[[i]]
        tag <- attr(section, "Rd_tag")
        if (tag == "\\section") {
            tagtitle <- sQuote(trimws(.Rd_deparse(section[[1L]])))
            section <- section[[2L]]
        }
        else tagtitle <- tag
        for (s in section) this <- checkEmpty(s, this)
        keep[i] <- this
        if (!this && msglevel > 0) 
            warnRd(s0, Rdfile, "Dropping empty section ", tagtitle)
    }
    Rd[keep]
}
