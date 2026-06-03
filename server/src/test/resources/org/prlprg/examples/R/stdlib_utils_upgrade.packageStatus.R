#? stdlib
`upgrade.packageStatus` <- function (object, ask = TRUE, ...) 
{
    update <- NULL
    old <- which(object$inst$Status == "upgrade")
    if (length(old) == 0L) {
        cat("Nothing to do!\n")
        return(invisible())
    }
    askprint <- function(x) write.table(x, row.names = FALSE, 
        col.names = FALSE, quote = FALSE, sep = " at ")
    haveasked <- character()
    if (ask) {
        for (k in old) {
            pkg <- object$inst[k, "Package"]
            tmpstring <- paste(pkg, as.character(object$inst[k, 
                "LibPath"]))
            if (tmpstring %in% haveasked) 
                next
            haveasked <- c(haveasked, tmpstring)
            cat("\n")
            cat(pkg, ":\n")
            askprint(object$inst[k, c("Version", "LibPath")])
            askprint(object$avail[pkg, c("Version", "Repository")])
            answer <- askYesNo("Update?")
            if (is.na(answer)) {
                cat("cancelled by user\n")
                return(invisible())
            }
            if (isTRUE(answer)) 
                update <- rbind(update, c(pkg, as.character(object$inst[k, 
                  "LibPath"]), as.character(object$avail[pkg, 
                  "Repository"])))
        }
    }
    else {
        pkgs <- object$inst[, "Package"]
        update <- cbind(pkgs, as.character(object$inst[, "LibPath"]), 
            as.character(object$avail[pkgs, "Repository"]))
        update <- update[old, , drop = FALSE]
    }
    if (length(update)) {
        for (repo in unique(update[, 3])) {
            ok <- update[, 3] == repo
            install.packages(update[ok, 1], update[ok, 2], contriburl = repo, 
                ...)
        }
    }
}
