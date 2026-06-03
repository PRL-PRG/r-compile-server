#? stdlib
`print.tables_aov` <- function (x, digits = 4L, ...) 
{
    tables.aov <- x$tables
    n.aov <- x$n
    se.aov <- if (se <- !is.na(match("se", names(x)))) 
        x$se
    type <- attr(x, "type")
    switch(type, effects = cat("Tables of effects\n"), means = cat("Tables of means\n"), 
        residuals = if (length(tables.aov) > 1L) cat("Table of residuals from each stratum\n"))
    if (!is.na(ii <- match("Grand mean", names(tables.aov)))) {
        cat("Grand mean\n")
        gmtable <- tables.aov[[ii]]
        print.mtable(gmtable, digits = digits, ...)
    }
    for (i in names(tables.aov)) {
        if (i == "Grand mean") 
            next
        table <- tables.aov[[i]]
        cat("\n", i, "\n")
        if (!is.list(n.aov)) 
            print.mtable(table, digits = digits, ...)
        else {
            n <- n.aov[[i]]
            if (length(dim(table)) < 2L) {
                table <- rbind(table, n)
                rownames(table) <- c("", "rep")
                print(table, digits = digits, ...)
            }
            else {
                ctable <- array(c(table, n), dim = c(dim(table), 
                  2L))
                dim.t <- dim(ctable)
                d <- length(dim.t)
                ctable <- aperm(ctable, c(1, d, 2:(d - 1)))
                dim(ctable) <- c(dim.t[1L] * dim.t[d], dim.t[-c(1, 
                  d)])
                dimnames(ctable) <- c(list(format(c(rownames(table), 
                  rep.int("rep", dim.t[1L])))), dimnames(table)[-1L])
                ctable <- eval(str2lang(paste("ctable[as.numeric(t(matrix(seq(nrow(ctable)),ncol=2)))", 
                  paste(rep.int(", ", d - 2), collapse = " "), 
                  "]")))
                names(dimnames(ctable)) <- names(dimnames(table))
                class(ctable) <- "mtable"
                print.mtable(ctable, digits = digits, ...)
            }
        }
    }
    if (se) {
        if (type == "residuals") 
            rn <- "df"
        else rn <- "replic."
        switch(attr(se.aov, "type"), effects = cat("\nStandard errors of effects\n"), 
            means = cat("\nStandard errors for differences of means\n"), 
            residuals = cat("\nStandard errors of residuals\n"))
        if (length(unlist(se.aov)) == length(se.aov)) {
            n.aov <- n.aov[!is.na(n.aov)]
            se.aov <- unlist(se.aov)
            cn <- names(se.aov)
            se.aov <- rbind(format(se.aov, digits = digits), 
                format(n.aov))
            dimnames(se.aov) <- list(c(" ", rn), cn)
            print(se.aov, quote = FALSE, right = TRUE, ...)
        }
        else for (i in names(se.aov)) {
            se <- se.aov[[i]]
            if (length(se) == 1L) {
                se <- rbind(se, n.aov[i])
                dimnames(se) <- list(c(i, rn), "")
                print(se, digits = digits, ...)
            }
            else {
                dimnames(se)[[1L]] <- ""
                cat("\n", i, "\n")
                cat("When comparing means with same levels of:\n")
                print(se, digits, ...)
                cat("replic.", n.aov[i], "\n")
            }
        }
    }
    invisible(x)
}
