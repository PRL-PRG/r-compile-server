#? stdlib
`str.dendrogram` <- function (object, max.level = NA, digits.d = 3L, give.attr = FALSE, 
    wid = getOption("width"), nest.lev = 0L, indent.str = "", 
    last.str = getOption("str.dendrogram.last"), stem = "--", 
    ...) 
{
    pasteLis <- function(lis, dropNam, sep = " = ") {
        lis <- lis[!(names(lis) %in% dropNam)]
        fl <- sapply(lis, format, digits = digits.d)
        paste(paste(names(fl), fl, sep = sep), collapse = ", ")
    }
    todo <- NULL
    repeat {
        istr <- sub(" $", last.str, indent.str)
        cat(istr, stem, sep = "")
        at <- attributes(object)
        memb <- at[["members"]]
        hgt <- at[["height"]]
        if (!is.leaf(object)) {
            le <- length(object)
            if (give.attr) {
                if (nzchar(at <- pasteLis(at, c("class", "height", 
                  "members")))) 
                  at <- paste(",", at)
            }
            cat("[dendrogram w/ ", le, " branches and ", memb, 
                " members at h = ", format(hgt, digits = digits.d), 
                if (give.attr) 
                  at, "]", if (!is.na(max.level) && nest.lev == 
                  max.level) 
                  " ..", "\n", sep = "")
            if (is.na(max.level) || nest.lev < max.level) {
                nest.lev <- nest.lev + 1L
                todo <- list(object = object[[le]], nest.lev = nest.lev, 
                  indent.str = paste(indent.str, "  "), todo = todo)
                indent.str <- paste(indent.str, " |")
                while ((le <- le - 1L) > 0L) {
                  todo <- list(object = object[[le]], nest.lev = nest.lev, 
                    indent.str = indent.str, todo = todo)
                }
            }
        }
        else {
            cat("leaf", if (is.character(at$label)) 
                paste("", at$label, "", sep = "\"")
            else format(object, digits = digits.d), "")
            any.at <- hgt != 0
            if (any.at) 
                cat("(h=", format(hgt, digits = digits.d))
            if (memb != 1) 
                cat(if (any.at) 
                  ", "
                else {
                  any.at <- TRUE
                  "("
                }, "memb= ", memb, sep = "")
            at <- pasteLis(at, c("class", "height", "members", 
                "leaf", "label"))
            if (any.at || nzchar(at)) 
                cat(if (!any.at) 
                  "(", at, ")")
            cat("\n")
        }
        if (is.null(todo)) {
            break
        }
        else {
            object <- todo$object
            nest.lev <- todo$nest.lev
            indent.str <- todo$indent.str
            todo <- todo$todo
        }
    }
    invisible()
}
